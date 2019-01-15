
/******************************************************************************
 * This file has been generated by Module Structure Generator
 * 2082 - Hau Sy Le - hau.le.eb@renesas.com
 ******************************************************************************
 * File name:		pfc.h
 * Date created:	11/26/2018 3:31:33 PM
 * PC name:			RVC-LT-410219
 * User name:		haule2
******************************************************************************/

#ifndef	PFC_H_
#define	PFC_H_

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

/******************************************************************************
 *	Name		Offset	Size	R/W
 ******************************************************************************
 *	PMMR		0x0		32	RW
 *	PMMER		0x4		32	RW
 *	DMPR0		0x20	32	RW
 *	DMPR1		0x24	32	RW
 *	DMPR2		0x28	32	RW
 *	DMPR3		0x2C	32	RW
 *	GPSR		0x40	32	RW
 *	IPSR0		0x60	32	RW
 *	IPSR1		0x64	32	RW
 *	IPSR2		0x68	32	RW
 *	IPSR3		0x6C	32	RW
 *	DRVCTRL0	0x80	32	RW
 *	DRVCTRL1	0x84	32	RW
 *	DRVCTRL2	0x88	32	RW
 *	DRVCTRL3	0x8C	32	RW
 *	POC			0xA0	32	RW
 *	PUEN		0xC0	32	RW
 *	PUD			0xE0	32	RW
 *	MOD_SEL		0x100	32	RW
 *	TDSEL0		0x120	32	RW
 *	TDSEL1		0x124	32	RW
 *	BIPSR0		0x140	32	RW
 *	BIPSR1		0x144	32	RW
 *	BIPSR2		0x148	32	RW
 *	BIPSR3		0x14C	32	RW
 *	PSER		0x160	32	RW
 *	PSSR0		0x164	32	RW
 *	PSSR1		0x168	32	RW
 *	IOINTSEL	0x180	32	RW
 *	INOUTSEL	0x184	32	RW
 *	OUTDT		0x188	32	RW
 *	INDT		0x18C	32	RO
 *	INTDT		0x190	32	RO
 *	INTCLR		0x194	32	RW
 *	INTMSK		0x198	32	RW
 *	MSKCLR		0x19C	32	RW
 *	POSNEG		0x1A0	32	RW
 *	EDGLEVEL	0x1A4	32	RW
 *	FILONOFF	0x1A8	32	RW
 *	FILCLKSEL	0x1AC	32	RW
 *	OUTDTSEL	0x1C0	32	RW
 *	OUTDTH		0x1C4	32	RW
 *	OUTDTL		0x1C8	32	RW
 *	BOTHEDGE	0x1CC	32	RW
 *	INEN		0x1D0	32	RW
******************************************************************************/
typedef struct
{
	union
	{
		/* Name:	PMMR
		 * Offset:	0x0
		 * Size:	32 bits */
		__RW	uint32_t	PMMR;
	};

	union
	{
		/* Name:	PMMER
		 * Offset:	0x4
		 * Size:	32 bits */
		__RW	uint32_t	PMMER;
	};

	/* Name:	PFC_RES_0x8
	 * Offset:	0x8
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x8;

	/* Name:	PFC_RES_0xC
	 * Offset:	0xC
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xC;

	/* Name:	PFC_RES_0x10
	 * Offset:	0x10
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x10;

	/* Name:	PFC_RES_0x14
	 * Offset:	0x14
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x14;

	/* Name:	PFC_RES_0x18
	 * Offset:	0x18
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x18;

	/* Name:	PFC_RES_0x1C
	 * Offset:	0x1C
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x1C;

	union
	{
		/* Name:	DMPR0
		 * Offset:	0x20
		 * Size:	32 bits */
		__RW	uint32_t	DMPR0;
	};

	union
	{
		/* Name:	DMPR1
		 * Offset:	0x24
		 * Size:	32 bits */
		__RW	uint32_t	DMPR1;
	};

	union
	{
		/* Name:	DMPR2
		 * Offset:	0x28
		 * Size:	32 bits */
		__RW	uint32_t	DMPR2;
	};

	union
	{
		/* Name:	DMPR3
		 * Offset:	0x2C
		 * Size:	32 bits */
		__RW	uint32_t	DMPR3;
	};

	/* Name:	PFC_RES_0x30
	 * Offset:	0x30
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x30;

	/* Name:	PFC_RES_0x34
	 * Offset:	0x34
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x34;

	/* Name:	PFC_RES_0x38
	 * Offset:	0x38
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x38;

	/* Name:	PFC_RES_0x3C
	 * Offset:	0x3C
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x3C;

	union
	{
		/* Name:	GPSR
		 * Offset:	0x40
		 * Size:	32 bits */
		__RW	uint32_t	GPSR;
	};

	/* Name:	PFC_RES_0x44
	 * Offset:	0x44
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x44;

	/* Name:	PFC_RES_0x48
	 * Offset:	0x48
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x48;

	/* Name:	PFC_RES_0x4C
	 * Offset:	0x4C
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x4C;

	/* Name:	PFC_RES_0x50
	 * Offset:	0x50
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x50;

	/* Name:	PFC_RES_0x54
	 * Offset:	0x54
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x54;

	/* Name:	PFC_RES_0x58
	 * Offset:	0x58
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x58;

	/* Name:	PFC_RES_0x5C
	 * Offset:	0x5C
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x5C;

	union
	{
		/* Name:	IPSR0
		 * Offset:	0x60
		 * Size:	32 bits */
		__RW	uint32_t	IPSR0;
	};

	union
	{
		/* Name:	IPSR1
		 * Offset:	0x64
		 * Size:	32 bits */
		__RW	uint32_t	IPSR1;
	};

	union
	{
		/* Name:	IPSR2
		 * Offset:	0x68
		 * Size:	32 bits */
		__RW	uint32_t	IPSR2;
	};

	union
	{
		/* Name:	IPSR3
		 * Offset:	0x6C
		 * Size:	32 bits */
		__RW	uint32_t	IPSR3;
	};

	/* Name:	PFC_RES_0x70
	 * Offset:	0x70
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x70;

	/* Name:	PFC_RES_0x74
	 * Offset:	0x74
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x74;

	/* Name:	PFC_RES_0x78
	 * Offset:	0x78
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x78;

	/* Name:	PFC_RES_0x7C
	 * Offset:	0x7C
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x7C;

	union
	{
		/* Name:	DRVCTRL0
		 * Offset:	0x80
		 * Size:	32 bits */
		__RW	uint32_t	DRVCTRL0;
	};

	union
	{
		/* Name:	DRVCTRL1
		 * Offset:	0x84
		 * Size:	32 bits */
		__RW	uint32_t	DRVCTRL1;
	};

	union
	{
		/* Name:	DRVCTRL2
		 * Offset:	0x88
		 * Size:	32 bits */
		__RW	uint32_t	DRVCTRL2;
	};

	union
	{
		/* Name:	DRVCTRL3
		 * Offset:	0x8C
		 * Size:	32 bits */
		__RW	uint32_t	DRVCTRL3;
	};

	/* Name:	PFC_RES_0x90
	 * Offset:	0x90
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x90;

	/* Name:	PFC_RES_0x94
	 * Offset:	0x94
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x94;

	/* Name:	PFC_RES_0x98
	 * Offset:	0x98
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x98;

	/* Name:	PFC_RES_0x9C
	 * Offset:	0x9C
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x9C;

	union
	{
		/* Name:	POC
		 * Offset:	0xA0
		 * Size:	32 bits */
		__RW	uint32_t	POC;
	};

	/* Name:	PFC_RES_0xA4
	 * Offset:	0xA4
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xA4;

	/* Name:	PFC_RES_0xA8
	 * Offset:	0xA8
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xA8;

	/* Name:	PFC_RES_0xAC
	 * Offset:	0xAC
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xAC;

	/* Name:	PFC_RES_0xB0
	 * Offset:	0xB0
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xB0;

	/* Name:	PFC_RES_0xB4
	 * Offset:	0xB4
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xB4;

	/* Name:	PFC_RES_0xB8
	 * Offset:	0xB8
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xB8;

	/* Name:	PFC_RES_0xBC
	 * Offset:	0xBC
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xBC;

	union
	{
		/* Name:	PUEN
		 * Offset:	0xC0
		 * Size:	32 bits */
		__RW	uint32_t	PUEN;
	};

	/* Name:	PFC_RES_0xC4
	 * Offset:	0xC4
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xC4;

	/* Name:	PFC_RES_0xC8
	 * Offset:	0xC8
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xC8;

	/* Name:	PFC_RES_0xCC
	 * Offset:	0xCC
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xCC;

	/* Name:	PFC_RES_0xD0
	 * Offset:	0xD0
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xD0;

	/* Name:	PFC_RES_0xD4
	 * Offset:	0xD4
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xD4;

	/* Name:	PFC_RES_0xD8
	 * Offset:	0xD8
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xD8;

	/* Name:	PFC_RES_0xDC
	 * Offset:	0xDC
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xDC;

	union
	{
		/* Name:	PUD
		 * Offset:	0xE0
		 * Size:	32 bits */
		__RW	uint32_t	PUD;
	};

	/* Name:	PFC_RES_0xE4
	 * Offset:	0xE4
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xE4;

	/* Name:	PFC_RES_0xE8
	 * Offset:	0xE8
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xE8;

	/* Name:	PFC_RES_0xEC
	 * Offset:	0xEC
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xEC;

	/* Name:	PFC_RES_0xF0
	 * Offset:	0xF0
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xF0;

	/* Name:	PFC_RES_0xF4
	 * Offset:	0xF4
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xF4;

	/* Name:	PFC_RES_0xF8
	 * Offset:	0xF8
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xF8;

	/* Name:	PFC_RES_0xFC
	 * Offset:	0xFC
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0xFC;

	union
	{
		/* Name:	MOD_SEL
		 * Offset:	0x100
		 * Size:	32 bits */
		__RW	uint32_t	MOD_SEL;
	};

	/* Name:	PFC_RES_0x104
	 * Offset:	0x104
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x104;

	/* Name:	PFC_RES_0x108
	 * Offset:	0x108
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x108;

	/* Name:	PFC_RES_0x10C
	 * Offset:	0x10C
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x10C;

	/* Name:	PFC_RES_0x110
	 * Offset:	0x110
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x110;

	/* Name:	PFC_RES_0x114
	 * Offset:	0x114
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x114;

	/* Name:	PFC_RES_0x118
	 * Offset:	0x118
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x118;

	/* Name:	PFC_RES_0x11C
	 * Offset:	0x11C
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x11C;

	union
	{
		/* Name:	TDSEL0
		 * Offset:	0x120
		 * Size:	32 bits */
		__RW	uint32_t	TDSEL0;
	};

	union
	{
		/* Name:	TDSEL1
		 * Offset:	0x124
		 * Size:	32 bits */
		__RW	uint32_t	TDSEL1;
	};

	/* Name:	PFC_RES_0x128
	 * Offset:	0x128
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x128;

	/* Name:	PFC_RES_0x12C
	 * Offset:	0x12C
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x12C;

	/* Name:	PFC_RES_0x130
	 * Offset:	0x130
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x130;

	/* Name:	PFC_RES_0x134
	 * Offset:	0x134
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x134;

	/* Name:	PFC_RES_0x138
	 * Offset:	0x138
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x138;

	/* Name:	PFC_RES_0x13C
	 * Offset:	0x13C
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x13C;

	union
	{
		/* Name:	BIPSR0
		 * Offset:	0x140
		 * Size:	32 bits */
		__RW	uint32_t	BIPSR0;
	};

	union
	{
		/* Name:	BIPSR1
		 * Offset:	0x144
		 * Size:	32 bits */
		__RW	uint32_t	BIPSR1;
	};

	union
	{
		/* Name:	BIPSR2
		 * Offset:	0x148
		 * Size:	32 bits */
		__RW	uint32_t	BIPSR2;
	};

	union
	{
		/* Name:	BIPSR3
		 * Offset:	0x14C
		 * Size:	32 bits */
		__RW	uint32_t	BIPSR3;
	};

	/* Name:	PFC_RES_0x150
	 * Offset:	0x150
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x150;

	/* Name:	PFC_RES_0x154
	 * Offset:	0x154
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x154;

	/* Name:	PFC_RES_0x158
	 * Offset:	0x158
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x158;

	/* Name:	PFC_RES_0x15C
	 * Offset:	0x15C
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x15C;

	union
	{
		/* Name:	PSER
		 * Offset:	0x160
		 * Size:	32 bits */
		__RW	uint32_t	PSER;
	};

	union
	{
		/* Name:	PSSR0
		 * Offset:	0x164
		 * Size:	32 bits */
		__RW	uint32_t	PSSR0;
	};

	union
	{
		/* Name:	PSSR1
		 * Offset:	0x168
		 * Size:	32 bits */
		__RW	uint32_t	PSSR1;
	};

	/* Name:	PFC_RES_0x16C
	 * Offset:	0x16C
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x16C;

	/* Name:	PFC_RES_0x170
	 * Offset:	0x170
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x170;

	/* Name:	PFC_RES_0x174
	 * Offset:	0x174
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x174;

	/* Name:	PFC_RES_0x178
	 * Offset:	0x178
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x178;

	/* Name:	PFC_RES_0x17C
	 * Offset:	0x17C
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x17C;

	union
	{
		/* Name:	IOINTSEL
		 * Offset:	0x180
		 * Size:	32 bits */
		__RW	uint32_t	IOINTSEL;
	};

	union
	{
		/* Name:	INOUTSEL
		 * Offset:	0x184
		 * Size:	32 bits */
		__RW	uint32_t	INOUTSEL;
	};

	union
	{
		/* Name:	OUTDT
		 * Offset:	0x188
		 * Size:	32 bits */
		__RW	uint32_t	OUTDT;
	};

	union
	{
		/* Name:	INDT
		 * Offset:	0x18C
		 * Size:	32 bits */
		__RO	uint32_t	INDT;
	};

	union
	{
		/* Name:	INTDT
		 * Offset:	0x190
		 * Size:	32 bits */
		__RO	uint32_t	INTDT;
	};

	union
	{
		/* Name:	INTCLR
		 * Offset:	0x194
		 * Size:	32 bits */
		__RW	uint32_t	INTCLR;
	};

	union
	{
		/* Name:	INTMSK
		 * Offset:	0x198
		 * Size:	32 bits */
		__RW	uint32_t	INTMSK;
	};

	union
	{
		/* Name:	MSKCLR
		 * Offset:	0x19C
		 * Size:	32 bits */
		__RW	uint32_t	MSKCLR;
	};

	union
	{
		/* Name:	POSNEG
		 * Offset:	0x1A0
		 * Size:	32 bits */
		__RW	uint32_t	POSNEG;
	};

	union
	{
		/* Name:	EDGLEVEL
		 * Offset:	0x1A4
		 * Size:	32 bits */
		__RW	uint32_t	EDGLEVEL;
	};

	union
	{
		/* Name:	FILONOFF
		 * Offset:	0x1A8
		 * Size:	32 bits */
		__RW	uint32_t	FILONOFF;
	};

	union
	{
		/* Name:	FILCLKSEL
		 * Offset:	0x1AC
		 * Size:	32 bits */
		__RW	uint32_t	FILCLKSEL;
	};

	/* Name:	PFC_RES_0x1B0
	 * Offset:	0x1B0
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x1B0;

	/* Name:	PFC_RES_0x1B4
	 * Offset:	0x1B4
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x1B4;

	/* Name:	PFC_RES_0x1B8
	 * Offset:	0x1B8
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x1B8;

	/* Name:	PFC_RES_0x1BC
	 * Offset:	0x1BC
	 * Size:	32 bits */
	__RO	uint32_t	PFC_RES_0x1BC;

	union
	{
		/* Name:	OUTDTSEL
		 * Offset:	0x1C0
		 * Size:	32 bits */
		__RW	uint32_t	OUTDTSEL;
	};

	union
	{
		/* Name:	OUTDTH
		 * Offset:	0x1C4
		 * Size:	32 bits */
		__RW	uint32_t	OUTDTH;
	};

	union
	{
		/* Name:	OUTDTL
		 * Offset:	0x1C8
		 * Size:	32 bits */
		__RW	uint32_t	OUTDTL;
	};

	union
	{
		/* Name:	BOTHEDGE
		 * Offset:	0x1CC
		 * Size:	32 bits */
		__RW	uint32_t	BOTHEDGE;
	};

	union
	{
		/* Name:	INEN
		 * Offset:	0x1D0
		 * Size:	32 bits */
		__RW	uint32_t	INEN;
	};

} PFC_t;

extern void PFC_SetBit(__RW uint32_t *pmmr, __RW uint32_t *reg, uint8_t bitPos);
extern void PFC_ClearBit(__RW uint32_t *pmmr, __RW uint32_t *reg, uint8_t bitPos);
extern void PFC_SetMultipleBit(__RW uint32_t *pmmr, __RW uint32_t *reg, uint32_t data);
extern void PFC_ClearMultipleBit(__RW uint32_t *pmmr, __RW uint32_t *reg, uint32_t data);
extern void PFC_WriteOr(__RW uint32_t *pmmr, __RW uint32_t *reg, uint32_t data);
extern void PFC_WriteAnd(__RW uint32_t *pmmr, __RW uint32_t *reg, uint32_t data);

#endif	/* PFC_H_ */
