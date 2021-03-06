
/******************************************************************************
 * I2C driver.
 * 2082 - Hau Sy Le - hau.le.eb@renesas.com
 ****************************************************************************/

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

const uint32_t I2C_CLOCK_SETTINGS[IO_BUFFER_TYPE_COUNT][CLOCK_TYPE_COUNT][CLOCK_RATE_COUNT][10] =
{
	/* Setting for open drain IO cells */
	{
		/* Setting for fixed duty cycle mode */
		{
			/*
			C	H	S	F	C	S	M	H		L		F
			D	L	M	B	D	C	P	P		P		M
			F	S	E	S	F	G	R	R		R		P
			D	E		C		D						E
			*/
			{0,	0,	0,	0,	6,	44,	0,	0,		0,		0},	// 50kHz
			{0,	0,	0,	0,	6,	20,	0,	0,		0,		0},	// 100kHz
			{0,	0,	0,	0,	6,	9,	0,	0,		0,		0},	// 200kHz
			{0,	0,	0,	0,	6,	7,	0,	0,		0,		0},	// 250kHz
			{0,	0,	0,	0,	6,	5,	0,	0,		0,		0},	// 300kHz
			{0,	0,	0,	0,	6,	3,	0,	0,		0,		0},	// 400kHz
			{0,	0,	0,	0,	6,	3,	0,	0,		0,		1}	// 1MHz
		},
		/* Setting for variable duty cycle mode */
		{
			{1,	1,	1,	15,	6,	0,	28,	1281,	1300,	0},	// 50kHz
			{1,	1,	1,	15,	6,	0,	28,	615,	633,	0},	// 100kHz
			{1,	1,	1,	15,	6,	0,	28,	281,	281,	0},	// 200kHz
			{1,	1,	1,	15,	6,	0,	28,	215,	233,	0},	// 250kHz
			{1,	1,	1,	15,	6,	0,	28,	170,	189,	0},	// 300kHz
			{1,	1,	1,	15,	6,	0,	28,	115,	133,	0},	// 400kHz
			{1,	1,	1,	15,	6,	0,	28,	32,		39,		1}	// 1MHz
		},
	},
	/* Setting for LVTTL IO cells */
	{
		/* Setting for fixed duty cycle mode */
		{
			{0,		0,	0,	0,	6,	44,	0,	0,		0,		0},	// 50kHz
			{0,		0,	0,	0,	6,	20,	0,	0,		0,		0},	// 100kHz
			{0,		0,	0,	0,	6,	9,	0,	0,		0,		0},	// 200kHz
			{0,		0,	0,	0,	6,	7,	0,	0,		0,		0},	// 250kHz
			{0,		0,	0,	0,	6,	5,	0,	0,		0,		0},	// 300kHz
			{0,		0,	0,	0,	6,	3,	0,	0,		0,		0},	// 400kHz
			{0,		0,	0,	0,	6,	3,	0,	0,		0,		1}	// 1MHz
		},
		/* Setting for variable duty cycle mode */
		{
			{15,	1,	1,	1,	6,	0,	28,	1281,	1300,	0},	// 50kHz
			{15,	1,	1,	1,	6,	0,	28,	615,	633,	0},	// 100kHz
			{15,	1,	1,	1,	6,	0,	28,	281,	281,	0},	// 200kHz
			{15,	1,	1,	1,	6,	0,	28,	215,	233,	0},	// 250kHz
			{15,	1,	1,	1,	6,	0,	28,	170,	189,	0},	// 300kHz
			{15,	1,	1,	1,	6,	0,	28,	115,	133,	0},	// 400kHz
			{15,	1,	1,	1,	6,	0,	28,	32,		39,		1}	// 1MHz
		},
	},
};

/******************************************************************************
 * Subroutines for slave mode
 *****************************************************************************/

void I2C_slaveInit(I2C_t *i2c, const I2C_SlaveConfig_t * slaveConfig)
{
    /* Set slave address */
    i2c->ICSAR = slaveConfig->SlaveAddress;
    
    /* Select single buffer mode */
    i2c->SDBS = 1;

    /* Configure clock stretch mode */
    if (slaveConfig->ClockStretchMode == CLOCK_STRETCH_AFTER) { i2c->SCSS = 1; }
    else { i2c->SCSS = 0; }

    /* Configure general call mode */
    if (slaveConfig->GenCallMode == GENERAL_CALL_ACK_ENABLE) { i2c->GCAE = 1; }
    else { i2c->GCAE = 0; }

    /* Configure clock rate and clock type */
    i2c->CDFD   = I2C_CLOCK_SETTINGS[slaveConfig->IOBufferType][slaveConfig->ClockType][slaveConfig->ClockRate][0];
    i2c->HLSE   = I2C_CLOCK_SETTINGS[slaveConfig->IOBufferType][slaveConfig->ClockType][slaveConfig->ClockRate][1];
    i2c->SME    = I2C_CLOCK_SETTINGS[slaveConfig->IOBufferType][slaveConfig->ClockType][slaveConfig->ClockRate][2];
    i2c->FBSC   = I2C_CLOCK_SETTINGS[slaveConfig->IOBufferType][slaveConfig->ClockType][slaveConfig->ClockRate][3];
    i2c->CDF    = I2C_CLOCK_SETTINGS[slaveConfig->IOBufferType][slaveConfig->ClockType][slaveConfig->ClockRate][4];
    i2c->SCGD   = I2C_CLOCK_SETTINGS[slaveConfig->IOBufferType][slaveConfig->ClockType][slaveConfig->ClockRate][5];
    i2c->ICMPR  = I2C_CLOCK_SETTINGS[slaveConfig->IOBufferType][slaveConfig->ClockType][slaveConfig->ClockRate][6];
    i2c->ICHPR  = I2C_CLOCK_SETTINGS[slaveConfig->IOBufferType][slaveConfig->ClockType][slaveConfig->ClockRate][7];
    i2c->ICLPR  = I2C_CLOCK_SETTINGS[slaveConfig->IOBufferType][slaveConfig->ClockType][slaveConfig->ClockRate][8];
    i2c->FMPE   = I2C_CLOCK_SETTINGS[slaveConfig->IOBufferType][slaveConfig->ClockType][slaveConfig->ClockRate][9];
}

void I2C_slaveEnable(I2C_t *i2c)
{
    i2c->SIE = 1;
}

void I2C_slaveDisable(I2C_t *i2c)
{
    i2c->SIE = 0;
}

void I2C_slaveSetAddress(I2C_t *i2c, uint8_t addr)
{
    i2c->ICSAR = addr;
}

void I2C_slaveEnableInterrupt(I2C_t *i2c, uint32_t flag)
{
    i2c->ICSIER |= flag;
}

void I2C_slaveDisableInterrupt(I2C_t *i2c, uint32_t flag)
{
    i2c->ICSIER &= ~flag;
}

uint32_t I2C_slaveGetInterruptStatus(I2C_t *i2c)
{
    return (i2c->ICSSR & 0xff);
}

void I2C_slaveClearInterruptStatus(I2C_t *i2c, uint32_t flag)
{
    i2c->ICSSR &= ~flag;
}

void I2C_slaveForceNAK(I2C_t *i2c)
{
    i2c->FNA = 1;
}

uint32_t I2C_slaveReceiveMultipleByteNext(I2C_t *i2c)
{
    return (i2c->ICRXD & 0xff);
}

uint32_t I2C_slaveReceiveMultipleByteStop(I2C_t *i2c)
{
    /* Get the received byte and send NACK on the next received byte */
    i2c->FNA = 1;
    return (i2c->ICRXD & 0xff);
}

uint32_t I2C_slaveReceiveMultipleByteFinish(I2C_t *i2c)
{
    /* Get the last received byte */
    return (i2c->ICRXD & 0xff);
}

void I2C_slaveSetData(I2C_t *i2c, uint8_t data)
{
    i2c->ICTXD = data;
}

void I2C_slaveEnableDMAReceive(I2C_t *i2c)
{
    i2c->RSDMAE = 1;
}

void I2C_slaveDisableDMAReceive(I2C_t *i2c)
{
    i2c->RSDMAE = 0;
}

void I2C_slaveEnableDMATransmit(I2C_t *i2c)
{
    i2c->TSDMAE = 1;
}

void I2C_slaveDisableDMATransmit(I2C_t *i2c)
{
    i2c->TSDMAE = 0;
}

/******************************************************************************
 * Subroutines for master mode
 *****************************************************************************/

void I2C_masterInit(I2C_t *i2c, const I2C_MasterConfig_t *masterConfig)
{
    /* Set slave address and configure transfer mode */
    i2c->ICMAR = (masterConfig->SlaveAddress << 1 | masterConfig->TransferMode);

    /* Select single buffer mode */
    i2c->MDBS = 1;

    /* Configure start byte transmit mode */
    if (masterConfig->StartByteTransmitMode == START_BYTE_TRANSMIT_ENABLE) { i2c->TSBE = 1; }
    else { i2c->TSBE = 0; }

    /* Configure clock rate and clock type */
    i2c->CDFD   = I2C_CLOCK_SETTINGS[masterConfig->IOBufferType][masterConfig->ClockType][masterConfig->ClockRate][0];
    i2c->HLSE   = I2C_CLOCK_SETTINGS[masterConfig->IOBufferType][masterConfig->ClockType][masterConfig->ClockRate][1];
    i2c->SME    = I2C_CLOCK_SETTINGS[masterConfig->IOBufferType][masterConfig->ClockType][masterConfig->ClockRate][2];
    i2c->FBSC   = I2C_CLOCK_SETTINGS[masterConfig->IOBufferType][masterConfig->ClockType][masterConfig->ClockRate][3];
    i2c->CDF    = I2C_CLOCK_SETTINGS[masterConfig->IOBufferType][masterConfig->ClockType][masterConfig->ClockRate][4];
    i2c->SCGD   = I2C_CLOCK_SETTINGS[masterConfig->IOBufferType][masterConfig->ClockType][masterConfig->ClockRate][5];
    i2c->ICMPR  = I2C_CLOCK_SETTINGS[masterConfig->IOBufferType][masterConfig->ClockType][masterConfig->ClockRate][6];
    i2c->ICHPR  = I2C_CLOCK_SETTINGS[masterConfig->IOBufferType][masterConfig->ClockType][masterConfig->ClockRate][7];
    i2c->ICLPR  = I2C_CLOCK_SETTINGS[masterConfig->IOBufferType][masterConfig->ClockType][masterConfig->ClockRate][8];
    i2c->FMPE   = I2C_CLOCK_SETTINGS[masterConfig->IOBufferType][masterConfig->ClockType][masterConfig->ClockRate][9];
}

void I2C_masterSetSlaveAddress(I2C_t *i2c, uint8_t addr)
{
    i2c->SADD1 = addr;
}

void I2C_masterSetMode(I2C_t *i2c, I2C_MasterTransferMode_t mode)
{
    i2c->STM1 = mode;
}

void I2C_masterEnable(I2C_t *i2c)
{
    i2c->MIE = 1;
}

void I2C_masterDisable(I2C_t *i2c)
{
    i2c->MIE = 0;
}

void I2C_masterEnableInterrupt(I2C_t *i2c, uint32_t flag)
{
    i2c->ICMIER |= flag;
}

void I2C_masterDisableInterrupt(I2C_t *i2c, uint32_t flag)
{
    i2c->ICMIER &= ~flag;
}

uint32_t I2C_masterGetInterruptStatus(I2C_t *i2c)
{
    return (i2c->ICMSR & 0xff);
}

void I2C_masterClearInterruptStatus(I2C_t *i2c, uint32_t flag)
{
    i2c->ICMSR &= ~flag;
}

void I2C_masterSendMultipleByteStart(I2C_t *i2c, uint32_t data)
{
    i2c->ICTXD = data;
    i2c->ESG = 1;
}

void I2C_masterSendMultipleByteNext(I2C_t *i2c, uint32_t data)
{
    i2c->ICTXD = data;
}

void I2C_masterSendMultipleByteStop(I2C_t *i2c)
{
    i2c->FSB = 1;
}

void I2C_masterReceiveStart(I2C_t *i2c)
{
    i2c->ESG = 1;
}

uint32_t I2C_masterReceiveMultipleByteNext(I2C_t *i2c)
{
    return (i2c->ICRXD & 0xff);
}

uint32_t I2C_masterReceiveMultipleByteStop(I2C_t *i2c)
{
    i2c->FSB = 1;
    return (i2c->ICRXD & 0xff);
}

uint32_t I2C_masterReceiveMultipleByteFinish(I2C_t *i2c)
{
    return (i2c->ICRXD & 0xff);
}

void I2C_masterSetDMAContinuousTransferCount(I2C_t *i2c, uint8_t transferCount)
{
	i2c->MDMACTSZ = transferCount;
}

void I2C_masterSetDMAContinuousReceiveBlockCount(I2C_t *i2c, uint8_t blockCount)
{
	i2c->RMDMATSZ = blockCount;
}

void I2C_masterSetDMAContinuousTransmitBlockCount(I2C_t *i2c, uint8_t blockCount)
{
	i2c->TMDMATSZ = blockCount;
}

void I2C_masterEnableDMAContinuousReceive(I2C_t *i2c)
{
	i2c->RMDMACE = 1;
}

void I2C_masterDisableDMAContinuousReceive(I2C_t *i2c)
{
	i2c->RMDMACE = 0;
}

void I2C_masterEnableDMAContinuousTransmit(I2C_t *i2c)
{
	i2c->TMDMACE = 1;
}

void I2C_masterDisableDMAContinuousTransmit(I2C_t *i2c)
{
	i2c->TMDMACE = 0;
}

void I2C_masterEnableDMAReceive(I2C_t *i2c)
{
	i2c->RMDMAE = 1;
}

void I2C_masterDisableDMAReceive(I2C_t *i2c)
{
	i2c->RMDMAE = 0;
}

void I2C_masterEnableDMATransmit(I2C_t *i2c)
{
	i2c->TMDMAE = 1;
}

void I2C_masterDisableDMATransmit(I2C_t *i2c)
{
	i2c->TMDMAE = 0;
}

void I2C_masterRestart(I2C_t *i2c, uint8_t slaveAddress, I2C_MasterTransferMode_t masterTransferMode)
{
    i2c->ICMAR = (slaveAddress << 1 | masterTransferMode);
    i2c->ESG = 1;
}

bool I2C_slaveIsGeneralCall(I2C_t *i2c)
{
    return (i2c->GCAR ? true : false);
}

bool I2C_masterIsArbitrationLost(I2C_t *i2c)
{
    return (i2c->MAL ? true : false);
}

void I2C_masterDisableStartGeneration(I2C_t *i2c)
{
    i2c->ESG = 0;
}

void I2C_masterEnableStartByteTransmit(I2C_t *i2c)
{
    i2c->TSBE = 1;
}

void I2C_masterDisableStartByteTransmit(I2C_t *i2c)
{
    i2c->TSBE = 0;
}
