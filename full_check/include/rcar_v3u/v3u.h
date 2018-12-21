
#ifndef V3U_H_
#define V3U_H_

#include <stdint.h>
#include "drivers/i2c.h"
#include "drivers/pfc.h"
#include "drivers/cpg.h"
#include "drivers/dmac.h"
#include "drivers/pfc.h"
#include "drivers/swdt.h"

#define BSC0_BASE_ADDR      0x00000000
#define BSC1_BASE_ADDR      0x04000000
#define SRAM_BASE_ADDR      0xe6300000
#define SDRAM_BASE_ADDR     0x40000000
#define I2C0_BASE_ADDR      0xe6500000
#define I2C1_BASE_ADDR      0xe6508000
#define I2C2_BASE_ADDR      0xe6510000
#define I2C3_BASE_ADDR      0xe66d0000
#define I2C4_BASE_ADDR      0xe66d8000
#define I2C5_BASE_ADDR      0xe66e0000
#define I2C6_BASE_ADDR      0xe66e8000
#define PFC0_GP1_BASE_ADDR  0xe6050000
#define PFC0_GP2_BASE_ADDR  0xe6050800
#define PFC1_GP0_BASE_ADDR  0xe6058000
#define PFC1_GP3_BASE_ADDR  0xe6058800
#define PFC2_GP4_BASE_ADDR  0xe6060000
#define PFC2_GP5_BASE_ADDR  0xe6060800
#define PFC3_GP6_BASE_ADDR  0xe6068000
#define PFC3_GP7_BASE_ADDR  0xe6068800
#define PFC3_GP8_BASE_ADDR  0xe6069000
#define PFC3_GP9_BASE_ADDR  0xe6069800
#define CPG_BASE_ADDR       0xe6150000
#define APMU_BASE_ADDR      0xe6170000
#define SDMAC1_BASE_ADDR    0xe7300000
#define SDMAC2_BASE_ADDR    0xe7310000
#define RDMAC0_BASE_ADDR    0xffc10000
#define RDMAC1_BASE_ADDR    0xffc20000
#define RDMAC2_BASE_ADDR    0xffd70000
#define RDMAC3_BASE_ADDR    0xffd80000
#define SDMAC1_COMMON_ADDR  0xe7350000
#define SDMAC2_COMMON_ADDR  0xe7351000
#define RDMAC0_COMMON_ADDR  0xffd60000
#define RDMAC1_COMMON_ADDR  0xffd61000
#define RDMAC2_COMMON_ADDR  0xffd62000
#define RDMAC3_COMMON_ADDR  0xffd63000
#define	KCRC0_BASE_ADDR	    0xe7020000
#define	KCRC1_BASE_ADDR	    0xe7030000
#define	KCRC2_BASE_ADDR	    0xe7040000
#define	KCRC3_BASE_ADDR	    0xe7050000
#define	SWDT_BASE_ADDR	    0xe6030000
#define	RWDT_BASE_ADDR	    0xe6020000
#define GIC_CA76_BASE_ADDR  0xf1000000
#define GIC_CR52_BASE_ADDR  0xf0000000

/******************************************************************************
 * WDT, SWDT
 *****************************************************************************/

#define	SWDT	((SWDT_t *)SWDT_BASE_ADDR)
#define	RWDT	((SWDT_t *)RWDT_BASE_ADDR)

/******************************************************************************
 * KCRC
 *****************************************************************************/

#define	KCRC0	((KCRC_t *)KCRC0_BASE_ADDR)
#define	KCRC1	((KCRC_t *)KCRC1_BASE_ADDR)
#define	KCRC2	((KCRC_t *)KCRC2_BASE_ADDR)
#define	KCRC3	((KCRC_t *)KCRC3_BASE_ADDR)

/******************************************************************************
 * I2C
 *****************************************************************************/

#define I2C0            ((I2C_t *)I2C0_BASE_ADDR)
#define I2C1            ((I2C_t *)I2C1_BASE_ADDR)
#define I2C2            ((I2C_t *)I2C2_BASE_ADDR)
#define I2C3            ((I2C_t *)I2C3_BASE_ADDR)
#define I2C4            ((I2C_t *)I2C4_BASE_ADDR)
#define I2C5            ((I2C_t *)I2C5_BASE_ADDR)
#define I2C6            ((I2C_t *)I2C6_BASE_ADDR)

/******************************************************************************
 * PFC
 *****************************************************************************/

#define	PFC0_GP1	    ((PFC_t *)PFC0_GP1_BASE_ADDR)
#define	PFC0_GP2	    ((PFC_t *)PFC0_GP2_BASE_ADDR)
#define	PFC1_GP0	    ((PFC_t *)PFC1_GP0_BASE_ADDR)
#define	PFC1_GP3	    ((PFC_t *)PFC1_GP3_BASE_ADDR)
#define	PFC2_GP4	    ((PFC_t *)PFC2_GP4_BASE_ADDR)
#define	PFC2_GP5	    ((PFC_t *)PFC2_GP5_BASE_ADDR)
#define	PFC3_GP6	    ((PFC_t *)PFC3_GP6_BASE_ADDR)
#define	PFC3_GP7	    ((PFC_t *)PFC3_GP7_BASE_ADDR)
#define	PFC3_GP8	    ((PFC_t *)PFC3_GP8_BASE_ADDR)
#define	PFC3_GP9	    ((PFC_t *)PFC3_GP9_BASE_ADDR)

/******************************************************************************
 * CPG
 *****************************************************************************/

#define	CPGWPR			((__RW uint32_t *)(CPG_BASE_ADDR + 0x0000))
#define	CPGWPCR			((__RW uint32_t *)(CPG_BASE_ADDR + 0x0004))
#define	RSSDER			((__RW uint32_t *)(CPG_BASE_ADDR + 0x0008))
#define	INTCCR			((__RW uint32_t *)(CPG_BASE_ADDR + 0x000c))
#define	CLSTAT			((__RW uint32_t *)(CPG_BASE_ADDR + 0x0108))
#define	FSRCHKRA0		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0400))
#define	FSRCHKRA1		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0404))
#define	FSRCHKRA2		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0408))
#define	FSRCHKRA3		((__RW uint32_t *)(CPG_BASE_ADDR + 0x040c))
#define	FSRCHKRA4		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0410))
#define	FSRCHKRA5		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0414))
#define	FSRCHKRA6		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0418))
#define	FSRCHKRA7		((__RW uint32_t *)(CPG_BASE_ADDR + 0x041c))
#define	FSRCHKRA8		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0420))
#define	FSRCHKRA9		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0424))
#define	FSRCHKRA10		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0428))
#define	FSRCHKRA11		((__RW uint32_t *)(CPG_BASE_ADDR + 0x042c))
#define	FSRCHKRA12		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0430))
#define	FSRCHKRA13		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0434))
#define	FSRCHKRA14		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0438))
#define	FSRCHKRA15		((__RW uint32_t *)(CPG_BASE_ADDR + 0x043c))
#define	FSRCHKRA16		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0440))
#define	FSRCHKRA17		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0444))
#define	FSRCHKRA18		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0448))
#define	FSRCHKRA19		((__RW uint32_t *)(CPG_BASE_ADDR + 0x044c))
#define	FSRCHKRA20		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0450))
#define	FSRCHKRA21		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0454))
#define	FSRCHKRA22		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0458))
#define	FSRCHKRB0		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0480))
#define	FSRCHKRB1		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0484))
#define	FSRCHKRB2		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0488))
#define	FSRCHKRB3		((__RW uint32_t *)(CPG_BASE_ADDR + 0x048c))
#define	FSRCHKRB4		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0490))
#define	FSRCHKRB5		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0494))
#define	FSRCHKRB6		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0498))
#define	FSRCHKRB7		((__RW uint32_t *)(CPG_BASE_ADDR + 0x049c))
#define	FSRCHKRB8		((__RW uint32_t *)(CPG_BASE_ADDR + 0x04a0))
#define	FSRCHKRB9		((__RW uint32_t *)(CPG_BASE_ADDR + 0x04a4))
#define	FSRCHKRB10		((__RW uint32_t *)(CPG_BASE_ADDR + 0x04a8))
#define	FSRCHKRB11		((__RW uint32_t *)(CPG_BASE_ADDR + 0x04ac))
#define	FSRCHKRB12		((__RW uint32_t *)(CPG_BASE_ADDR + 0x04b0))
#define	FSRCHKRB13		((__RW uint32_t *)(CPG_BASE_ADDR + 0x04b4))
#define	FSRCHKRB14		((__RW uint32_t *)(CPG_BASE_ADDR + 0x04b8))
#define	FSRCHKRB15		((__RW uint32_t *)(CPG_BASE_ADDR + 0x04bc))
#define	FSRCHKRB16		((__RW uint32_t *)(CPG_BASE_ADDR + 0x04c0))
#define	FSRCHKRB17		((__RW uint32_t *)(CPG_BASE_ADDR + 0x04c4))
#define	FSRCHKRB18		((__RW uint32_t *)(CPG_BASE_ADDR + 0x04c8))
#define	FSRCHKRB19		((__RW uint32_t *)(CPG_BASE_ADDR + 0x04cc))
#define	FSRCHKRB20		((__RW uint32_t *)(CPG_BASE_ADDR + 0x04d0))
#define	FSRCHKRB21		((__RW uint32_t *)(CPG_BASE_ADDR + 0x04d4))
#define	FSRCHKRB22		((__RW uint32_t *)(CPG_BASE_ADDR + 0x04d8))
#define	FSRCHKSETR0		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0500))
#define	FSRCHKSETR1		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0504))
#define	FSRCHKSETR2		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0508))
#define	FSRCHKSETR3		((__RW uint32_t *)(CPG_BASE_ADDR + 0x050c))
#define	FSRCHKSETR4		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0510))
#define	FSRCHKSETR5		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0514))
#define	FSRCHKSETR6		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0518))
#define	FSRCHKSETR7		((__RW uint32_t *)(CPG_BASE_ADDR + 0x051c))
#define	FSRCHKSETR8		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0520))
#define	FSRCHKSETR9		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0524))
#define	FSRCHKSETR10	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0528))
#define	FSRCHKSETR11	((__RW uint32_t *)(CPG_BASE_ADDR + 0x052c))
#define	FSRCHKSETR12	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0530))
#define	FSRCHKSETR13	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0534))
#define	FSRCHKSETR14	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0538))
#define	FSRCHKSETR15	((__RW uint32_t *)(CPG_BASE_ADDR + 0x053c))
#define	FSRCHKSETR16	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0540))
#define	FSRCHKSETR17	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0544))
#define	FSRCHKSETR18	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0548))
#define	FSRCHKSETR19	((__RW uint32_t *)(CPG_BASE_ADDR + 0x054c))
#define	FSRCHKSETR20	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0550))
#define	FSRCHKSETR21	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0554))
#define	FSRCHKSETR22	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0558))
#define	FSRCHKCLRR0		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0580))
#define	FSRCHKCLRR1		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0584))
#define	FSRCHKCLRR2		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0588))
#define	FSRCHKCLRR3		((__RW uint32_t *)(CPG_BASE_ADDR + 0x058c))
#define	FSRCHKCLRR4		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0590))
#define	FSRCHKCLRR5		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0594))
#define	FSRCHKCLRR6		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0598))
#define	FSRCHKCLRR7		((__RW uint32_t *)(CPG_BASE_ADDR + 0x059c))
#define	FSRCHKCLRR8		((__RW uint32_t *)(CPG_BASE_ADDR + 0x05a0))
#define	FSRCHKCLRR9		((__RW uint32_t *)(CPG_BASE_ADDR + 0x05a4))
#define	FSRCHKCLRR10	((__RW uint32_t *)(CPG_BASE_ADDR + 0x05a8))
#define	FSRCHKCLRR11	((__RW uint32_t *)(CPG_BASE_ADDR + 0x05ac))
#define	FSRCHKCLRR12	((__RW uint32_t *)(CPG_BASE_ADDR + 0x05b0))
#define	FSRCHKCLRR13	((__RW uint32_t *)(CPG_BASE_ADDR + 0x05b4))
#define	FSRCHKCLRR14	((__RW uint32_t *)(CPG_BASE_ADDR + 0x05b8))
#define	FSRCHKCLRR15	((__RW uint32_t *)(CPG_BASE_ADDR + 0x05bc))
#define	FSRCHKCLRR16	((__RW uint32_t *)(CPG_BASE_ADDR + 0x05c0))
#define	FSRCHKCLRR17	((__RW uint32_t *)(CPG_BASE_ADDR + 0x05c4))
#define	FSRCHKCLRR18	((__RW uint32_t *)(CPG_BASE_ADDR + 0x05c8))
#define	FSRCHKCLRR19	((__RW uint32_t *)(CPG_BASE_ADDR + 0x05cc))
#define	FSRCHKCLRR20	((__RW uint32_t *)(CPG_BASE_ADDR + 0x05d0))
#define	FSRCHKCLRR21	((__RW uint32_t *)(CPG_BASE_ADDR + 0x05d4))
#define	FSRCHKCLRR22	((__RW uint32_t *)(CPG_BASE_ADDR + 0x05d8))
#define	PLL1FBCKMCSR   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0600))
#define	PLL1FBCKMECR   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0604))
#define	PLL1FBCKMLCH   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0608))
#define	PLL1FBCKMLCL   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x060c))
#define	PLL1FBCKMCNT   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0610))
#define	PLL1FBCKMCNTE  	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0614))
#define	PLL1FBCKMMDR   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0618))
#define	PLL2_0FBCKMCSR 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0620))
#define	PLL2_0FBCKMECR 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0624))
#define	PLL2_0FBCKMLCH 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0628))
#define	PLL2_0FBCKMLCL 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x062c))
#define	PLL2_0FBCKMCNT 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0630))
#define	PLL2_0FBCKMCNTE	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0634))
#define	PLL2_0FBCKMMDR 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0638))
#define	PLL2_1FBCKMCSR 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0640))
#define	PLL2_1FBCKMECR 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0644))
#define	PLL2_1FBCKMLCH 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0648))
#define	PLL2_1FBCKMLCL 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x064c))
#define	PLL2_1FBCKMCNT 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0650))
#define	PLL2_1FBCKMCNTE	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0654))
#define	PLL2_1FBCKMMDR 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0658))
#define	PLL3_0FBCKMCSR 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0660))
#define	PLL3_0FBCKMECR 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0664))
#define	PLL3_0FBCKMLCH 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0668))
#define	PLL3_0FBCKMLCL 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x066c))
#define	PLL3_0FBCKMCNT 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0670))
#define	PLL3_0FBCKMCNTE	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0674))
#define	PLL3_0FBCKMMDR 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0678))
#define	PLL3_1FBCKMCSR 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0680))
#define	PLL3_1FBCKMECR 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0684))
#define	PLL3_1FBCKMLCH 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0688))
#define	PLL3_1FBCKMLCL 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x068c))
#define	PLL3_1FBCKMCNT 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0690))
#define	PLL3_1FBCKMCNTE	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0694))
#define	PLL3_1FBCKMMDR 	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0698))
#define	PLL4FBCKMCSR   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06a0))
#define	PLL4FBCKMECR   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06a4))
#define	PLL4FBCKMLCH   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06a8))
#define	PLL4FBCKMLCL   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06ac))
#define	PLL4FBCKMCNT   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06b0))
#define	PLL4FBCKMCNTE  	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06b4))
#define	PLL4FBCKMMDR   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06b8))
#define	PLL5FBCKMCSR   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06c0))
#define	PLL5FBCKMECR   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06c4))
#define	PLL5FBCKMLCH   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06c8))
#define	PLL5FBCKMLCL   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06cc))
#define	PLL5FBCKMCNT   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06d0))
#define	PLL5FBCKMCNTE  	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06d4))
#define	PLL5FBCKMMDR   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06d8))
#define	PLL6FBCKMCSR   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06e0))
#define	PLL6FBCKMECR   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06e4))
#define	PLL6FBCKMLCH   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06e8))
#define	PLL6FBCKMLCL   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06ec))
#define	PLL6FBCKMCNT   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06f0))
#define	PLL6FBCKMCNTE  	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06f4))
#define	PLL6FBCKMMDR   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x06f8))
#define	CPCKMCSR       	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0700))
#define	CPCKMECR       	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0704))
#define	CPCKMLCH       	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0708))
#define	CPCKMLCL       	((__RW uint32_t *)(CPG_BASE_ADDR + 0x070c))
#define	CPCKMCNT       	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0710))
#define	CPCKMCNTE      	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0714))
#define	CPCKMMDR       	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0718))
#define	CBFUSACKMCSR   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0720))
#define	CBFUSACKMECR   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0724))
#define	CBFUSACKMLCH   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0728))
#define	CBFUSACKMLCL   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x072c))
#define	CBFUSACKMCNT   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0730))
#define	CBFUSACKMCNTE  	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0734))
#define	CBFUSACKMMDR   	((__RW uint32_t *)(CPG_BASE_ADDR + 0x0738))
#define	FRQCRA     		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0800))
#define	FRQCRB     		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0804))
#define	FRQCRC     		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0808))
#define	FRQCRD0    		((__RW uint32_t *)(CPG_BASE_ADDR + 0x080c))
#define	FRQCRD1    		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0810))
#define	PLLECR     		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0820))
#define	PLL1CR     		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0830))
#define	PLL20CR    		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0834))
#define	PLL21CR    		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0838))
#define	PLL30CR    		((__RW uint32_t *)(CPG_BASE_ADDR + 0x083c))
#define	PLL31CR    		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0840))
#define	PLL4CR     		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0844))
#define	PLL5CR     		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0848))
#define	PLL6CR     		((__RW uint32_t *)(CPG_BASE_ADDR + 0x084c))
#define	PLL1STPCR  		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0850))
#define	PLL20STPCR 		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0854))
#define	PLL21STPCR 		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0858))
#define	PLL30STPCR 		((__RW uint32_t *)(CPG_BASE_ADDR + 0x085c))
#define	PLL31STPCR 		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0860))
#define	PLL4STPCR  		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0864))
#define	PLL5STPCR  		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0868))
#define	PLL6STPCR  		((__RW uint32_t *)(CPG_BASE_ADDR + 0x086c))
#define	SD0CKCR    		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0870))
#define	RPCCKCR    		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0874))
#define	CANFDCKCR  		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0878))
#define	MSOCKCR    		((__RW uint32_t *)(CPG_BASE_ADDR + 0x087c))
#define	CSI0CKCR   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0880))
#define	DSICKCR    		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0884))
#define	IPCCKCR    		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0888))
#define	FRAYCKCR   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x088c))
#define	POSTCKCR   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0890))
#define	POST2CKCR  		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0894))
#define	POST3CKCR  		((__RW uint32_t *)(CPG_BASE_ADDR + 0x0898))
#define	POST4CKCR  		((__RW uint32_t *)(CPG_BASE_ADDR + 0x089c))
#define	SRCR0   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c00))
#define	SRCR1   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c04))
#define	SRCR2   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c08))
#define	SRCR3   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c0c))
#define	SRCR4   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c10))
#define	SRCR5   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c14))
#define	SRCR6   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c18))
#define	SRCR7   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c1c))
#define	SRCR8   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c20))
#define	SRCR9   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c24))
#define	SRCR10   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c28))
#define	SRCR11   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c2c))
#define	SRCR12   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c30))
#define	SRCR13   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c34))
#define	SRCR14   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c38))
#define	SRCR15   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c3c))
#define	SRCR16   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c40))
#define	SRCR17   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c44))
#define	SRCR18   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c48))
#define	SRCR19   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c4c))
#define	SRCR20   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c50))
#define	SRCR21   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c54))
#define	SRCR22   		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c58))
#define	SRSTCLR0		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c80))
#define	SRSTCLR1		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c84))
#define	SRSTCLR2		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c88))
#define	SRSTCLR3		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c8c))
#define	SRSTCLR4		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c90))
#define	SRSTCLR5		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c94))
#define	SRSTCLR6		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c98))
#define	SRSTCLR7		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2c9c))
#define	SRSTCLR8		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2ca0))
#define	SRSTCLR9		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2ca4))
#define	SRSTCLR10		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2ca8))
#define	SRSTCLR11		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2cac))
#define	SRSTCLR12		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2cb0))
#define	SRSTCLR13		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2cb4))
#define	SRSTCLR14		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2cb8))
#define	SRSTCLR15		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2cbc))
#define	SRSTCLR16		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2cc0))
#define	SRSTCLR17		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2cc4))
#define	SRSTCLR18		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2cc8))
#define	SRSTCLR19		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2ccc))
#define	SRSTCLR20		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2cd0))
#define	SRSTCLR21		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2cd4))
#define	SRSTCLR22		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2cd8))
#define	MSTPCR0			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d00))
#define	MSTPCR1			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d04))
#define	MSTPCR2			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d08))
#define	MSTPCR3			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d0c))
#define	MSTPCR4			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d10))
#define	MSTPCR5			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d14))
#define	MSTPCR6			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d18))
#define	MSTPCR7			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d1c))
#define	MSTPCR8			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d20))
#define	MSTPCR9			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d24))
#define	MSTPCR10		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d28))
#define	MSTPCR11		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d2c))
#define	MSTPCR12		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d30))
#define	MSTPCR13		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d34))
#define	MSTPCR14		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d38))
#define	MSTPCR15		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d3c))
#define	MSTPCR16		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d40))
#define	MSTPCR17		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d44))
#define	MSTPCR18		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d48))
#define	MSTPCR19		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d4c))
#define	MSTPCR20		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d50))
#define	MSTPCR21		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d54))
#define	MSTPCR22		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d58))
#define	NSIRCR0			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d80))
#define	NSIRCR1			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d84))
#define	NSIRCR2			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d88))
#define	NSIRCR3			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d8c))
#define	NSIRCR4			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d90))
#define	NSIRCR5			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d94))
#define	NSIRCR6			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d98))
#define	NSIRCR7			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2d9c))
#define	NSIRCR8			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2da0))
#define	NSIRCR9			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2da4))
#define	NSIRCR10		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2da8))
#define	NSIRCR11		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2dac))
#define	NSIRCR12		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2db0))
#define	NSIRCR13		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2db4))
#define	NSIRCR14		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2db8))
#define	NSIRCR15		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2dbc))
#define	NSIRCR16		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2dc0))
#define	NSIRCR17		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2dc4))
#define	NSIRCR18		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2dc8))
#define	NSIRCR19		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2dcc))
#define	NSIRCR20		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2dd0))
#define	NSIRCR21		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2dd4))
#define	NSIRCR22		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2dd8))
#define	MSTPSR0			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e00))
#define	MSTPSR1			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e04))
#define	MSTPSR2			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e08))
#define	MSTPSR3			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e0c))
#define	MSTPSR4			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e10))
#define	MSTPSR5			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e14))
#define	MSTPSR6			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e18))
#define	MSTPSR7			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e1c))
#define	MSTPSR8			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e20))
#define	MSTPSR9			((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e24))
#define	MSTPSR10		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e28))
#define	MSTPSR11		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e2c))
#define	MSTPSR12		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e30))
#define	MSTPSR13		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e34))
#define	MSTPSR14		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e38))
#define	MSTPSR15		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e3c))
#define	MSTPSR16		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e40))
#define	MSTPSR17		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e44))
#define	MSTPSR18		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e48))
#define	MSTPSR19		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e4c))
#define	MSTPSR20		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e50))
#define	MSTPSR21		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e54))
#define	MSTPSR22		((__RW uint32_t *)(CPG_BASE_ADDR + 0x2e58))

/******************************************************************************
 * APMU
 *****************************************************************************/

#define CR52BAR         ((__RW uint32_t *)(APMU_BASE_ADDR + 0x334))

/******************************************************************************
 * DMAC
 *****************************************************************************/

#define SDMAC1       	((__RW DMAC_Common_t   	*)(SDMAC1_COMMON_ADDR))
#define SDMAC2       	((__RW DMAC_Common_t   	*)(SDMAC2_COMMON_ADDR))
#define RDMAC0       	((__RW DMAC_Common_t   	*)(RDMAC0_COMMON_ADDR))
#define RDMAC1       	((__RW DMAC_Common_t   	*)(RDMAC1_COMMON_ADDR))
#define RDMAC2       	((__RW DMAC_Common_t   	*)(RDMAC2_COMMON_ADDR))
#define RDMAC3       	((__RW DMAC_Common_t   	*)(RDMAC3_COMMON_ADDR))

#define SDMAC1CH0       ((__RW DMAC_Channel_t   *)(SDMAC1_BASE_ADDR + 0x0000))
#define SDMAC1CH1       ((__RW DMAC_Channel_t   *)(SDMAC1_BASE_ADDR + 0x1000))
#define SDMAC1CH2       ((__RW DMAC_Channel_t   *)(SDMAC1_BASE_ADDR + 0x2000))
#define SDMAC1CH3       ((__RW DMAC_Channel_t   *)(SDMAC1_BASE_ADDR + 0x3000))
#define SDMAC1CH4       ((__RW DMAC_Channel_t   *)(SDMAC1_BASE_ADDR + 0x4000))
#define SDMAC1CH5       ((__RW DMAC_Channel_t   *)(SDMAC1_BASE_ADDR + 0x5000))
#define SDMAC1CH6       ((__RW DMAC_Channel_t   *)(SDMAC1_BASE_ADDR + 0x6000))
#define SDMAC1CH7       ((__RW DMAC_Channel_t   *)(SDMAC1_BASE_ADDR + 0x7000))
#define SDMAC1CH8       ((__RW DMAC_Channel_t   *)(SDMAC1_BASE_ADDR + 0x8000))
#define SDMAC1CH9       ((__RW DMAC_Channel_t   *)(SDMAC1_BASE_ADDR + 0x9000))
#define SDMAC1CH10      ((__RW DMAC_Channel_t   *)(SDMAC1_BASE_ADDR + 0xa000))
#define SDMAC1CH11      ((__RW DMAC_Channel_t   *)(SDMAC1_BASE_ADDR + 0xb000))
#define SDMAC1CH12      ((__RW DMAC_Channel_t   *)(SDMAC1_BASE_ADDR + 0xc000))
#define SDMAC1CH13      ((__RW DMAC_Channel_t   *)(SDMAC1_BASE_ADDR + 0xd000))
#define SDMAC1CH14      ((__RW DMAC_Channel_t   *)(SDMAC1_BASE_ADDR + 0xe000))
#define SDMAC1CH15      ((__RW DMAC_Channel_t   *)(SDMAC1_BASE_ADDR + 0xf000))
#define SDMAC2CH0      	((__RW DMAC_Channel_t   *)(SDMAC2_BASE_ADDR + 0x0000))
#define SDMAC2CH1      	((__RW DMAC_Channel_t   *)(SDMAC2_BASE_ADDR + 0x1000))
#define SDMAC2CH2      	((__RW DMAC_Channel_t   *)(SDMAC2_BASE_ADDR + 0x2000))
#define SDMAC2CH3      	((__RW DMAC_Channel_t   *)(SDMAC2_BASE_ADDR + 0x3000))
#define SDMAC2CH4      	((__RW DMAC_Channel_t   *)(SDMAC2_BASE_ADDR + 0x4000))
#define SDMAC2CH5      	((__RW DMAC_Channel_t   *)(SDMAC2_BASE_ADDR + 0x5000))
#define SDMAC2CH6      	((__RW DMAC_Channel_t   *)(SDMAC2_BASE_ADDR + 0x6000))
#define SDMAC2CH7      	((__RW DMAC_Channel_t   *)(SDMAC2_BASE_ADDR + 0x7000))
#define RDMAC0CH0       ((__RW DMAC_Channel_t   *)(RDMAC0_BASE_ADDR + 0x0000))
#define RDMAC0CH1       ((__RW DMAC_Channel_t   *)(RDMAC0_BASE_ADDR + 0x1000))
#define RDMAC0CH2       ((__RW DMAC_Channel_t   *)(RDMAC0_BASE_ADDR + 0x2000))
#define RDMAC0CH3       ((__RW DMAC_Channel_t   *)(RDMAC0_BASE_ADDR + 0x3000))
#define RDMAC0CH4       ((__RW DMAC_Channel_t   *)(RDMAC0_BASE_ADDR + 0x4000))
#define RDMAC0CH5       ((__RW DMAC_Channel_t   *)(RDMAC0_BASE_ADDR + 0x5000))
#define RDMAC0CH6       ((__RW DMAC_Channel_t   *)(RDMAC0_BASE_ADDR + 0x6000))
#define RDMAC0CH7       ((__RW DMAC_Channel_t   *)(RDMAC0_BASE_ADDR + 0x7000))
#define RDMAC0CH8       ((__RW DMAC_Channel_t   *)(RDMAC0_BASE_ADDR + 0x8000))
#define RDMAC0CH9       ((__RW DMAC_Channel_t   *)(RDMAC0_BASE_ADDR + 0x9000))
#define RDMAC0CH10      ((__RW DMAC_Channel_t   *)(RDMAC0_BASE_ADDR + 0xa000))
#define RDMAC0CH11      ((__RW DMAC_Channel_t   *)(RDMAC0_BASE_ADDR + 0xb000))
#define RDMAC0CH12      ((__RW DMAC_Channel_t   *)(RDMAC0_BASE_ADDR + 0xc000))
#define RDMAC0CH13      ((__RW DMAC_Channel_t   *)(RDMAC0_BASE_ADDR + 0xd000))
#define RDMAC0CH14      ((__RW DMAC_Channel_t   *)(RDMAC0_BASE_ADDR + 0xe000))
#define RDMAC0CH15      ((__RW DMAC_Channel_t   *)(RDMAC0_BASE_ADDR + 0xf000))
#define RDMAC1CH0       ((__RW DMAC_Channel_t   *)(RDMAC1_BASE_ADDR + 0x0000))
#define RDMAC1CH1       ((__RW DMAC_Channel_t   *)(RDMAC1_BASE_ADDR + 0x1000))
#define RDMAC1CH2       ((__RW DMAC_Channel_t   *)(RDMAC1_BASE_ADDR + 0x2000))
#define RDMAC1CH3       ((__RW DMAC_Channel_t   *)(RDMAC1_BASE_ADDR + 0x3000))
#define RDMAC1CH4       ((__RW DMAC_Channel_t   *)(RDMAC1_BASE_ADDR + 0x4000))
#define RDMAC1CH5       ((__RW DMAC_Channel_t   *)(RDMAC1_BASE_ADDR + 0x5000))
#define RDMAC1CH6       ((__RW DMAC_Channel_t   *)(RDMAC1_BASE_ADDR + 0x6000))
#define RDMAC1CH7       ((__RW DMAC_Channel_t   *)(RDMAC1_BASE_ADDR + 0x7000))
#define RDMAC1CH8       ((__RW DMAC_Channel_t   *)(RDMAC1_BASE_ADDR + 0x8000))
#define RDMAC1CH9       ((__RW DMAC_Channel_t   *)(RDMAC1_BASE_ADDR + 0x9000))
#define RDMAC1CH10      ((__RW DMAC_Channel_t   *)(RDMAC1_BASE_ADDR + 0xa000))
#define RDMAC1CH11      ((__RW DMAC_Channel_t   *)(RDMAC1_BASE_ADDR + 0xb000))
#define RDMAC1CH12      ((__RW DMAC_Channel_t   *)(RDMAC1_BASE_ADDR + 0xc000))
#define RDMAC1CH13      ((__RW DMAC_Channel_t   *)(RDMAC1_BASE_ADDR + 0xd000))
#define RDMAC1CH14      ((__RW DMAC_Channel_t   *)(RDMAC1_BASE_ADDR + 0xe000))
#define RDMAC1CH15      ((__RW DMAC_Channel_t   *)(RDMAC1_BASE_ADDR + 0xf000))
#define RDMAC2CH0       ((__RW DMAC_Channel_t   *)(RDMAC2_BASE_ADDR + 0x0000))
#define RDMAC2CH1       ((__RW DMAC_Channel_t   *)(RDMAC2_BASE_ADDR + 0x1000))
#define RDMAC2CH2       ((__RW DMAC_Channel_t   *)(RDMAC2_BASE_ADDR + 0x2000))
#define RDMAC2CH3       ((__RW DMAC_Channel_t   *)(RDMAC2_BASE_ADDR + 0x3000))
#define RDMAC2CH4       ((__RW DMAC_Channel_t   *)(RDMAC2_BASE_ADDR + 0x4000))
#define RDMAC2CH5       ((__RW DMAC_Channel_t   *)(RDMAC2_BASE_ADDR + 0x5000))
#define RDMAC2CH6       ((__RW DMAC_Channel_t   *)(RDMAC2_BASE_ADDR + 0x6000))
#define RDMAC2CH7       ((__RW DMAC_Channel_t   *)(RDMAC2_BASE_ADDR + 0x7000))
#define RDMAC2CH8      	((__RW DMAC_Channel_t   *)(RDMAC2_BASE_ADDR + 0x8000))
#define RDMAC2CH9       ((__RW DMAC_Channel_t   *)(RDMAC2_BASE_ADDR + 0x9000))
#define RDMAC2CH10      ((__RW DMAC_Channel_t   *)(RDMAC2_BASE_ADDR + 0xa000))
#define RDMAC2CH11      ((__RW DMAC_Channel_t   *)(RDMAC2_BASE_ADDR + 0xb000))
#define RDMAC2CH12      ((__RW DMAC_Channel_t   *)(RDMAC2_BASE_ADDR + 0xc000))
#define RDMAC2CH13      ((__RW DMAC_Channel_t   *)(RDMAC2_BASE_ADDR + 0xd000))
#define RDMAC2CH14      ((__RW DMAC_Channel_t   *)(RDMAC2_BASE_ADDR + 0xe000))
#define RDMAC2CH15      ((__RW DMAC_Channel_t   *)(RDMAC2_BASE_ADDR + 0xf000))
#define RDMAC3CH0       ((__RW DMAC_Channel_t   *)(RDMAC3_BASE_ADDR + 0x0000))
#define RDMAC3CH1       ((__RW DMAC_Channel_t   *)(RDMAC3_BASE_ADDR + 0x1000))
#define RDMAC3CH2       ((__RW DMAC_Channel_t   *)(RDMAC3_BASE_ADDR + 0x2000))
#define RDMAC3CH3       ((__RW DMAC_Channel_t   *)(RDMAC3_BASE_ADDR + 0x3000))
#define RDMAC3CH4       ((__RW DMAC_Channel_t   *)(RDMAC3_BASE_ADDR + 0x4000))
#define RDMAC3CH5       ((__RW DMAC_Channel_t   *)(RDMAC3_BASE_ADDR + 0x5000))
#define RDMAC3CH6       ((__RW DMAC_Channel_t   *)(RDMAC3_BASE_ADDR + 0x6000))
#define RDMAC3CH7       ((__RW DMAC_Channel_t   *)(RDMAC3_BASE_ADDR + 0x7000))
#define RDMAC3CH8       ((__RW DMAC_Channel_t   *)(RDMAC3_BASE_ADDR + 0x8000))
#define RDMAC3CH9       ((__RW DMAC_Channel_t   *)(RDMAC3_BASE_ADDR + 0x9000))
#define RDMAC3CH10      ((__RW DMAC_Channel_t   *)(RDMAC3_BASE_ADDR + 0xa000))
#define RDMAC3CH11      ((__RW DMAC_Channel_t   *)(RDMAC3_BASE_ADDR + 0xb000))
#define RDMAC3CH12      ((__RW DMAC_Channel_t   *)(RDMAC3_BASE_ADDR + 0xc000))
#define RDMAC3CH13      ((__RW DMAC_Channel_t   *)(RDMAC3_BASE_ADDR + 0xd000))
#define RDMAC3CH14      ((__RW DMAC_Channel_t   *)(RDMAC3_BASE_ADDR + 0xe000))
#define RDMAC3CH15      ((__RW DMAC_Channel_t   *)(RDMAC3_BASE_ADDR + 0xf000))

#endif
