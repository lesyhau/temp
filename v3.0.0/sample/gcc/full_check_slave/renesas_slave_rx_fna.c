
/* Standard C libraries */
#include <stdint.h>
#include <stdbool.h>

/* R-Car V3U drives */
#include <global.h>
#include <rcar_v3u/v3u.h>
#include <rcar_v3u/drivers/sim_utils.h>
#include <rcar_v3u/drivers/i2c.h>
#include <rcar_v3u/drivers/pfc.h>
#include <rcar_v3u/drivers/cpg.h>
#include <rcar_v3u/drivers/gic.h>
#include <rcar_v3u/drivers/dmac.h>
#include <rcar_v3u/drivers/kcrc.h>

static const I2C_MasterConfig_t masterConfig =
{
    MASTER_TX,
    I2C0_SLAVE_ADDR,
    START_BYTE_TRANSMIT_DISABLE,
    OD_BUFFER,
    FIXED_DUTY_CYCLE,
    CLOCK_RATE_400KHZ
};

static const I2C_SlaveConfig_t slaveConfig =
{
    I2C0_SLAVE_ADDR,
    CLOCK_STRETCH_BEFORE,
    GENERAL_CALL_ACK_DISABLE,
    OD_BUFFER,
    FIXED_DUTY_CYCLE,
    CLOCK_RATE_400KHZ
};

#define DATA_PACKAGE_LENGTH 2
static const uint32_t sendData[DATA_PACKAGE_LENGTH] = { 0xaa, 0x55 };
static uint32_t receivedData[DATA_PACKAGE_LENGTH];
static volatile uint32_t sendDataIndex = 0, receivedDataIndex = 0;
static volatile bool isTransferComplete = false;

static void i2c0InterruptHandler(void);
static void i2c1InterruptHandler(void);

uint32_t renesas_slave_rx_fna(void)
{
	uint32_t i = 0;

    /* Configure I2C1 in master TX mode */
    I2C_masterInit(I2C1, &masterConfig);
    I2C_masterClearInterruptStatus(I2C1, I2C_INT_ALL);
    I2C_masterEnableInterrupt(I2C1, I2C_INT_MAT | I2C_INT_MDE | I2C_INT_MST);
    I2C_masterEnable(I2C1);

    /* Configure I2C0 in slave RX mode */
    I2C_slaveInit(I2C0, &slaveConfig);
    I2C0->SDBS = 0;
    I2C_slaveClearInterruptStatus(I2C0, I2C_INT_ALL);
    I2C_slaveEnableInterrupt(I2C0, I2C_INT_SAR | I2C_INT_SDR | I2C_INT_SSR);
    I2C_slaveEnable(I2C0);

    GIC_enable();
    GIC_setInterruptHandler(GIC_INTID_I2C0, &i2c0InterruptHandler);
    GIC_setInterruptHandler(GIC_INTID_I2C1, &i2c1InterruptHandler);
    GIC_enableInterrupt(GIC_INTID_I2C0);
    GIC_enableInterrupt(GIC_INTID_I2C1);

    /* Set the first data byte, send start condition, send slave address */
    I2C_masterSendMultipleByteStart(I2C1, sendData[sendDataIndex++]);

    /* Wait for the transaction to complete */
    while(! isTransferComplete);
	
    I2C_masterDisable(I2C1);
    I2C_slaveDisable(I2C0);

    /* Judge the result */
	for (i = 0; i < DATA_PACKAGE_LENGTH; i++)
    {
        if (receivedData[i] != sendData[i])
        {
            return TEST_FAIL;
        }
    }

	return TEST_PASS;
}

void i2c1InterruptHandler(void)
{
    uint32_t status = I2C_masterGetInterruptStatus(I2C1);

    if (status & I2C_INT_MAT) { I2C_masterDisableStartGeneration(I2C1); }
    else if (status & I2C_INT_MDE) { I2C_masterSendMultipleByteNext(I2C1, sendData[sendDataIndex++]); }

    if (status & I2C_INT_MST) { isTransferComplete = true; }

    I2C_masterClearInterruptStatus(I2C1, status);
}

void i2c0InterruptHandler(void)
{
    uint32_t status = I2C_slaveGetInterruptStatus(I2C0);

    if (status & I2C_INT_SDR)
    {
        if (receivedDataIndex < (DATA_PACKAGE_LENGTH - 2)) { receivedData[receivedDataIndex++] = I2C_slaveReceiveMultipleByteNext(I2C0); }
        else if (receivedDataIndex == (DATA_PACKAGE_LENGTH - 2)) { receivedData[receivedDataIndex++] = I2C_slaveReceiveMultipleByteStop(I2C0); }
        else if (receivedDataIndex == (DATA_PACKAGE_LENGTH - 1)) { receivedData[receivedDataIndex++] = I2C_slaveReceiveMultipleByteFinish(I2C0); }
    }

    I2C_slaveClearInterruptStatus(I2C0, status);
}