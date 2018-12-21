
/******************************************************************************
 * This file has been generated by Module Structure Generator
 * 2082 - Hau Sy Le - hau.le.eb@renesas.com
 ******************************************************************************
 * File name:		i2c.h
 * Date created:	10/16/2018 2:10:44 PM
 * PC name:			RVC-LT-410219
 * User name:		haule2
******************************************************************************/

#ifndef	I2C_H_
#define	I2C_H_

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

#define I2C0_MODEL  0
#define I2C1_MODEL  1
#define I2C2_MODEL  2
#define I2C3_MODEL  3
#define I2C4_MODEL  4
#define I2C5_MODEL  5
#define I2C6_MODEL  6
#define I2C0_SLAVE_ADDR 0x50
#define I2C1_SLAVE_ADDR 0x51
#define I2C2_SLAVE_ADDR 0x52
#define I2C3_SLAVE_ADDR 0x53
#define I2C4_SLAVE_ADDR 0x54
#define I2C5_SLAVE_ADDR 0x55
#define I2C6_SLAVE_ADDR 0x56
#define I2C_START_ADDR  0x01
#define I2C_GENERAL_CALL_ADDR   0x00

/******************************************************************************
 *	Name	Offset	Size	R/W
 ******************************************************************************
 *	ICSCR	0x0	32	RW
 *	ICMCR	0x4	32	RW
 *	ICSSR	0x8	32	RW
 *	ICMSR	0xC	32	RW
 *	ICSIER	0x10	32	RW
 *	ICMIER	0x14	32	RW
 *	ICCCR	0x18	32	RW
 *	ICSAR	0x1C	32	RW
 *	ICMAR	0x20	32	RW
 *	ICRXD	0x24	32	RO
 *	ICTXD	0x24	32	WO
 *	ICCCR2	0x28	32	RW
 *	ICMPR	0x2C	32	RW
 *	ICHPR	0x30	32	RW
 *	ICLPR	0x34	32	RW
 *	ICFBSCR	0x38	32	RW
 *	ICDMAER	0x3C	32	RW
******************************************************************************/
typedef struct
{
	union
	{
		/* Name:	ICSCR
		 * Offset:	0x0
		 * Size:	32 bits */
		__RW	uint32_t	ICSCR;
		struct
		{
			__RW	uint32_t	FNA	:1;
			__RW	uint32_t	GCAE	:1;
			__RW	uint32_t	SIE	:1;
			__RW	uint32_t	SDBS	:1;
			__RW	uint32_t	SCSS	:1;
			__RO	uint32_t	ICSCR_RES_5	:1;
			__RO	uint32_t	ICSCR_RES_6	:1;
			__RO	uint32_t	ICSCR_RES_7	:1;
			__RO	uint32_t	ICSCR_RES_8	:1;
			__RO	uint32_t	ICSCR_RES_9	:1;
			__RO	uint32_t	ICSCR_RES_10	:1;
			__RO	uint32_t	ICSCR_RES_11	:1;
			__RO	uint32_t	ICSCR_RES_12	:1;
			__RO	uint32_t	ICSCR_RES_13	:1;
			__RO	uint32_t	ICSCR_RES_14	:1;
			__RO	uint32_t	ICSCR_RES_15	:1;
			__RO	uint32_t	ICSCR_RES_16	:1;
			__RO	uint32_t	ICSCR_RES_17	:1;
			__RO	uint32_t	ICSCR_RES_18	:1;
			__RO	uint32_t	ICSCR_RES_19	:1;
			__RO	uint32_t	ICSCR_RES_20	:1;
			__RO	uint32_t	ICSCR_RES_21	:1;
			__RO	uint32_t	ICSCR_RES_22	:1;
			__RO	uint32_t	ICSCR_RES_23	:1;
			__RO	uint32_t	ICSCR_RES_24	:1;
			__RO	uint32_t	ICSCR_RES_25	:1;
			__RO	uint32_t	ICSCR_RES_26	:1;
			__RO	uint32_t	ICSCR_RES_27	:1;
			__RO	uint32_t	ICSCR_RES_28	:1;
			__RO	uint32_t	ICSCR_RES_29	:1;
			__RO	uint32_t	ICSCR_RES_30	:1;
			__RO	uint32_t	ICSCR_RES_31	:1;
		};
	};

	union
	{
		/* Name:	ICMCR
		 * Offset:	0x4
		 * Size:	32 bits */
		__RW	uint32_t	ICMCR;
		struct
		{
			__RW	uint32_t	ESG	:1;
			__RW	uint32_t	FSB	:1;
			__RW	uint32_t	TSBE	:1;
			__RW	uint32_t	MIE	:1;
			__RW	uint32_t	OBPC	:1;
			__RW	uint32_t	FSDA	:1;
			__RW	uint32_t	FSCL	:1;
			__RW	uint32_t	MDBS	:1;
			__RO	uint32_t	ICMCR_RES_8	:1;
			__RO	uint32_t	ICMCR_RES_9	:1;
			__RO	uint32_t	ICMCR_RES_10	:1;
			__RO	uint32_t	ICMCR_RES_11	:1;
			__RO	uint32_t	ICMCR_RES_12	:1;
			__RO	uint32_t	ICMCR_RES_13	:1;
			__RO	uint32_t	ICMCR_RES_14	:1;
			__RO	uint32_t	ICMCR_RES_15	:1;
			__RO	uint32_t	ICMCR_RES_16	:1;
			__RO	uint32_t	ICMCR_RES_17	:1;
			__RO	uint32_t	ICMCR_RES_18	:1;
			__RO	uint32_t	ICMCR_RES_19	:1;
			__RO	uint32_t	ICMCR_RES_20	:1;
			__RO	uint32_t	ICMCR_RES_21	:1;
			__RO	uint32_t	ICMCR_RES_22	:1;
			__RO	uint32_t	ICMCR_RES_23	:1;
			__RO	uint32_t	ICMCR_RES_24	:1;
			__RO	uint32_t	ICMCR_RES_25	:1;
			__RO	uint32_t	ICMCR_RES_26	:1;
			__RO	uint32_t	ICMCR_RES_27	:1;
			__RO	uint32_t	ICMCR_RES_28	:1;
			__RO	uint32_t	ICMCR_RES_29	:1;
			__RO	uint32_t	ICMCR_RES_30	:1;
			__RO	uint32_t	ICMCR_RES_31	:1;
		};
	};

	union
	{
		/* Name:	ICSSR
		 * Offset:	0x8
		 * Size:	32 bits */
		__RW	uint32_t	ICSSR;
		struct
		{
			__RW	uint32_t	SAR	:1;
			__RW	uint32_t	SDR	:1;
			__RW	uint32_t	SDT	:1;
			__RW	uint32_t	SDE	:1;
			__RW	uint32_t	SSR	:1;
			__RO	uint32_t	SSTM	:1;
			__RO	uint32_t	GCAR	:1;
			__RO	uint32_t	ICSSR_RES_7	:1;
			__RO	uint32_t	ICSSR_RES_8	:1;
			__RO	uint32_t	ICSSR_RES_9	:1;
			__RO	uint32_t	ICSSR_RES_10	:1;
			__RO	uint32_t	ICSSR_RES_11	:1;
			__RO	uint32_t	ICSSR_RES_12	:1;
			__RO	uint32_t	ICSSR_RES_13	:1;
			__RO	uint32_t	ICSSR_RES_14	:1;
			__RO	uint32_t	ICSSR_RES_15	:1;
			__RO	uint32_t	ICSSR_RES_16	:1;
			__RO	uint32_t	ICSSR_RES_17	:1;
			__RO	uint32_t	ICSSR_RES_18	:1;
			__RO	uint32_t	ICSSR_RES_19	:1;
			__RO	uint32_t	ICSSR_RES_20	:1;
			__RO	uint32_t	ICSSR_RES_21	:1;
			__RO	uint32_t	ICSSR_RES_22	:1;
			__RO	uint32_t	ICSSR_RES_23	:1;
			__RO	uint32_t	ICSSR_RES_24	:1;
			__RO	uint32_t	ICSSR_RES_25	:1;
			__RO	uint32_t	ICSSR_RES_26	:1;
			__RO	uint32_t	ICSSR_RES_27	:1;
			__RO	uint32_t	ICSSR_RES_28	:1;
			__RO	uint32_t	ICSSR_RES_29	:1;
			__RO	uint32_t	ICSSR_RES_30	:1;
			__RO	uint32_t	ICSSR_RES_31	:1;
		};
	};

	union
	{
		/* Name:	ICMSR
		 * Offset:	0xC
		 * Size:	32 bits */
		__RW	uint32_t	ICMSR;
		struct
		{
			__RW	uint32_t	MAT	:1;
			__RW	uint32_t	MDR	:1;
			__RW	uint32_t	MDT	:1;
			__RW	uint32_t	MDE	:1;
			__RW	uint32_t	MST	:1;
			__RW	uint32_t	MAL	:1;
			__RW	uint32_t	MNR	:1;
			__RO	uint32_t	ICMSR_RES_7	:1;
			__RO	uint32_t	ICMSR_RES_8	:1;
			__RO	uint32_t	ICMSR_RES_9	:1;
			__RO	uint32_t	ICMSR_RES_10	:1;
			__RO	uint32_t	ICMSR_RES_11	:1;
			__RO	uint32_t	ICMSR_RES_12	:1;
			__RO	uint32_t	ICMSR_RES_13	:1;
			__RO	uint32_t	ICMSR_RES_14	:1;
			__RO	uint32_t	ICMSR_RES_15	:1;
			__RO	uint32_t	ICMSR_RES_16	:1;
			__RO	uint32_t	ICMSR_RES_17	:1;
			__RO	uint32_t	ICMSR_RES_18	:1;
			__RO	uint32_t	ICMSR_RES_19	:1;
			__RO	uint32_t	ICMSR_RES_20	:1;
			__RO	uint32_t	ICMSR_RES_21	:1;
			__RO	uint32_t	ICMSR_RES_22	:1;
			__RO	uint32_t	ICMSR_RES_23	:1;
			__RO	uint32_t	ICMSR_RES_24	:1;
			__RO	uint32_t	ICMSR_RES_25	:1;
			__RO	uint32_t	ICMSR_RES_26	:1;
			__RO	uint32_t	ICMSR_RES_27	:1;
			__RO	uint32_t	ICMSR_RES_28	:1;
			__RO	uint32_t	ICMSR_RES_29	:1;
			__RO	uint32_t	ICMSR_RES_30	:1;
			__RO	uint32_t	ICMSR_RES_31	:1;
		};
	};

	union
	{
		/* Name:	ICSIER
		 * Offset:	0x10
		 * Size:	32 bits */
		__RW	uint32_t	ICSIER;
		struct
		{
			__RW	uint32_t	SARE	:1;
			__RW	uint32_t	SDRE	:1;
			__RW	uint32_t	SDTE	:1;
			__RW	uint32_t	SDEE	:1;
			__RW	uint32_t	SSRE	:1;
			__RO	uint32_t	ICSIER_RES_5	:1;
			__RO	uint32_t	ICSIER_RES_6	:1;
			__RO	uint32_t	ICSIER_RES_7	:1;
			__RO	uint32_t	ICSIER_RES_8	:1;
			__RO	uint32_t	ICSIER_RES_9	:1;
			__RO	uint32_t	ICSIER_RES_10	:1;
			__RO	uint32_t	ICSIER_RES_11	:1;
			__RO	uint32_t	ICSIER_RES_12	:1;
			__RO	uint32_t	ICSIER_RES_13	:1;
			__RO	uint32_t	ICSIER_RES_14	:1;
			__RO	uint32_t	ICSIER_RES_15	:1;
			__RO	uint32_t	ICSIER_RES_16	:1;
			__RO	uint32_t	ICSIER_RES_17	:1;
			__RO	uint32_t	ICSIER_RES_18	:1;
			__RO	uint32_t	ICSIER_RES_19	:1;
			__RO	uint32_t	ICSIER_RES_20	:1;
			__RO	uint32_t	ICSIER_RES_21	:1;
			__RO	uint32_t	ICSIER_RES_22	:1;
			__RO	uint32_t	ICSIER_RES_23	:1;
			__RO	uint32_t	ICSIER_RES_24	:1;
			__RO	uint32_t	ICSIER_RES_25	:1;
			__RO	uint32_t	ICSIER_RES_26	:1;
			__RO	uint32_t	ICSIER_RES_27	:1;
			__RO	uint32_t	ICSIER_RES_28	:1;
			__RO	uint32_t	ICSIER_RES_29	:1;
			__RO	uint32_t	ICSIER_RES_30	:1;
			__RO	uint32_t	ICSIER_RES_31	:1;
		};
	};

	union
	{
		/* Name:	ICMIER
		 * Offset:	0x14
		 * Size:	32 bits */
		__RW	uint32_t	ICMIER;
		struct
		{
			__RW	uint32_t	MATE	:1;
			__RW	uint32_t	MDRE	:1;
			__RW	uint32_t	MDTE	:1;
			__RW	uint32_t	MDEE	:1;
			__RW	uint32_t	MSTE	:1;
			__RW	uint32_t	MALE	:1;
			__RW	uint32_t	MNRE	:1;
			__RO	uint32_t	ICMIER_RES_7	:1;
			__RO	uint32_t	ICMIER_RES_8	:1;
			__RO	uint32_t	ICMIER_RES_9	:1;
			__RO	uint32_t	ICMIER_RES_10	:1;
			__RO	uint32_t	ICMIER_RES_11	:1;
			__RO	uint32_t	ICMIER_RES_12	:1;
			__RO	uint32_t	ICMIER_RES_13	:1;
			__RO	uint32_t	ICMIER_RES_14	:1;
			__RO	uint32_t	ICMIER_RES_15	:1;
			__RO	uint32_t	ICMIER_RES_16	:1;
			__RO	uint32_t	ICMIER_RES_17	:1;
			__RO	uint32_t	ICMIER_RES_18	:1;
			__RO	uint32_t	ICMIER_RES_19	:1;
			__RO	uint32_t	ICMIER_RES_20	:1;
			__RO	uint32_t	ICMIER_RES_21	:1;
			__RO	uint32_t	ICMIER_RES_22	:1;
			__RO	uint32_t	ICMIER_RES_23	:1;
			__RO	uint32_t	ICMIER_RES_24	:1;
			__RO	uint32_t	ICMIER_RES_25	:1;
			__RO	uint32_t	ICMIER_RES_26	:1;
			__RO	uint32_t	ICMIER_RES_27	:1;
			__RO	uint32_t	ICMIER_RES_28	:1;
			__RO	uint32_t	ICMIER_RES_29	:1;
			__RO	uint32_t	ICMIER_RES_30	:1;
			__RO	uint32_t	ICMIER_RES_31	:1;
		};
	};

	union
	{
		/* Name:	ICCCR
		 * Offset:	0x18
		 * Size:	32 bits */
		__RW	uint32_t	ICCCR;
		struct
		{
			__RW	uint32_t	CDF	:3;
			__RW	uint32_t	SCGD	:6;
			__RO	uint32_t	ICCCR_RES_9	:1;
			__RO	uint32_t	ICCCR_RES_10	:1;
			__RO	uint32_t	ICCCR_RES_11	:1;
			__RO	uint32_t	ICCCR_RES_12	:1;
			__RO	uint32_t	ICCCR_RES_13	:1;
			__RO	uint32_t	ICCCR_RES_14	:1;
			__RO	uint32_t	ICCCR_RES_15	:1;
			__RO	uint32_t	ICCCR_RES_16	:1;
			__RO	uint32_t	ICCCR_RES_17	:1;
			__RO	uint32_t	ICCCR_RES_18	:1;
			__RO	uint32_t	ICCCR_RES_19	:1;
			__RO	uint32_t	ICCCR_RES_20	:1;
			__RO	uint32_t	ICCCR_RES_21	:1;
			__RO	uint32_t	ICCCR_RES_22	:1;
			__RO	uint32_t	ICCCR_RES_23	:1;
			__RO	uint32_t	ICCCR_RES_24	:1;
			__RO	uint32_t	ICCCR_RES_25	:1;
			__RO	uint32_t	ICCCR_RES_26	:1;
			__RO	uint32_t	ICCCR_RES_27	:1;
			__RO	uint32_t	ICCCR_RES_28	:1;
			__RO	uint32_t	ICCCR_RES_29	:1;
			__RO	uint32_t	ICCCR_RES_30	:1;
			__RO	uint32_t	ICCCR_RES_31	:1;
		};
	};

	union
	{
		/* Name:	ICSAR
		 * Offset:	0x1C
		 * Size:	32 bits */
		__RW	uint32_t	ICSAR;
		struct
		{
			__RW	uint32_t	SADD0	:7;
			__RO	uint32_t	ICSAR_RES_7	:1;
			__RO	uint32_t	ICSAR_RES_8	:1;
			__RO	uint32_t	ICSAR_RES_9	:1;
			__RO	uint32_t	ICSAR_RES_10	:1;
			__RO	uint32_t	ICSAR_RES_11	:1;
			__RO	uint32_t	ICSAR_RES_12	:1;
			__RO	uint32_t	ICSAR_RES_13	:1;
			__RO	uint32_t	ICSAR_RES_14	:1;
			__RO	uint32_t	ICSAR_RES_15	:1;
			__RO	uint32_t	ICSAR_RES_16	:1;
			__RO	uint32_t	ICSAR_RES_17	:1;
			__RO	uint32_t	ICSAR_RES_18	:1;
			__RO	uint32_t	ICSAR_RES_19	:1;
			__RO	uint32_t	ICSAR_RES_20	:1;
			__RO	uint32_t	ICSAR_RES_21	:1;
			__RO	uint32_t	ICSAR_RES_22	:1;
			__RO	uint32_t	ICSAR_RES_23	:1;
			__RO	uint32_t	ICSAR_RES_24	:1;
			__RO	uint32_t	ICSAR_RES_25	:1;
			__RO	uint32_t	ICSAR_RES_26	:1;
			__RO	uint32_t	ICSAR_RES_27	:1;
			__RO	uint32_t	ICSAR_RES_28	:1;
			__RO	uint32_t	ICSAR_RES_29	:1;
			__RO	uint32_t	ICSAR_RES_30	:1;
			__RO	uint32_t	ICSAR_RES_31	:1;
		};
	};

	union
	{
		/* Name:	ICMAR
		 * Offset:	0x20
		 * Size:	32 bits */
		__RW	uint32_t	ICMAR;
		struct
		{
			__RW	uint32_t	STM1	:1;
			__RW	uint32_t	SADD1	:7;
			__RO	uint32_t	ICMAR_RES_8	:1;
			__RO	uint32_t	ICMAR_RES_9	:1;
			__RO	uint32_t	ICMAR_RES_10	:1;
			__RO	uint32_t	ICMAR_RES_11	:1;
			__RO	uint32_t	ICMAR_RES_12	:1;
			__RO	uint32_t	ICMAR_RES_13	:1;
			__RO	uint32_t	ICMAR_RES_14	:1;
			__RO	uint32_t	ICMAR_RES_15	:1;
			__RO	uint32_t	ICMAR_RES_16	:1;
			__RO	uint32_t	ICMAR_RES_17	:1;
			__RO	uint32_t	ICMAR_RES_18	:1;
			__RO	uint32_t	ICMAR_RES_19	:1;
			__RO	uint32_t	ICMAR_RES_20	:1;
			__RO	uint32_t	ICMAR_RES_21	:1;
			__RO	uint32_t	ICMAR_RES_22	:1;
			__RO	uint32_t	ICMAR_RES_23	:1;
			__RO	uint32_t	ICMAR_RES_24	:1;
			__RO	uint32_t	ICMAR_RES_25	:1;
			__RO	uint32_t	ICMAR_RES_26	:1;
			__RO	uint32_t	ICMAR_RES_27	:1;
			__RO	uint32_t	ICMAR_RES_28	:1;
			__RO	uint32_t	ICMAR_RES_29	:1;
			__RO	uint32_t	ICMAR_RES_30	:1;
			__RO	uint32_t	ICMAR_RES_31	:1;
		};
	};

	union
	{
		/* Name:	ICRXD
		 * Offset:	0x24
		 * Size:	32 bits */
		__RO	uint32_t	ICRXD;
		struct
		{
			__RW	uint32_t	RXD	:8;
			__RO	uint32_t	ICRXD_RES_8	:1;
			__RO	uint32_t	ICRXD_RES_9	:1;
			__RO	uint32_t	ICRXD_RES_10	:1;
			__RO	uint32_t	ICRXD_RES_11	:1;
			__RO	uint32_t	ICRXD_RES_12	:1;
			__RO	uint32_t	ICRXD_RES_13	:1;
			__RO	uint32_t	ICRXD_RES_14	:1;
			__RO	uint32_t	ICRXD_RES_15	:1;
			__RO	uint32_t	ICRXD_RES_16	:1;
			__RO	uint32_t	ICRXD_RES_17	:1;
			__RO	uint32_t	ICRXD_RES_18	:1;
			__RO	uint32_t	ICRXD_RES_19	:1;
			__RO	uint32_t	ICRXD_RES_20	:1;
			__RO	uint32_t	ICRXD_RES_21	:1;
			__RO	uint32_t	ICRXD_RES_22	:1;
			__RO	uint32_t	ICRXD_RES_23	:1;
			__RO	uint32_t	ICRXD_RES_24	:1;
			__RO	uint32_t	ICRXD_RES_25	:1;
			__RO	uint32_t	ICRXD_RES_26	:1;
			__RO	uint32_t	ICRXD_RES_27	:1;
			__RO	uint32_t	ICRXD_RES_28	:1;
			__RO	uint32_t	ICRXD_RES_29	:1;
			__RO	uint32_t	ICRXD_RES_30	:1;
			__RO	uint32_t	ICRXD_RES_31	:1;
		};

		/* Name:	ICTXD
		 * Offset:	0x24
		 * Size:	32 bits */
		__WO	uint32_t	ICTXD;
		struct
		{
			__RW	uint32_t	TXD	:8;
			__RO	uint32_t	ICTXD_RES_8	:1;
			__RO	uint32_t	ICTXD_RES_9	:1;
			__RO	uint32_t	ICTXD_RES_10	:1;
			__RO	uint32_t	ICTXD_RES_11	:1;
			__RO	uint32_t	ICTXD_RES_12	:1;
			__RO	uint32_t	ICTXD_RES_13	:1;
			__RO	uint32_t	ICTXD_RES_14	:1;
			__RO	uint32_t	ICTXD_RES_15	:1;
			__RO	uint32_t	ICTXD_RES_16	:1;
			__RO	uint32_t	ICTXD_RES_17	:1;
			__RO	uint32_t	ICTXD_RES_18	:1;
			__RO	uint32_t	ICTXD_RES_19	:1;
			__RO	uint32_t	ICTXD_RES_20	:1;
			__RO	uint32_t	ICTXD_RES_21	:1;
			__RO	uint32_t	ICTXD_RES_22	:1;
			__RO	uint32_t	ICTXD_RES_23	:1;
			__RO	uint32_t	ICTXD_RES_24	:1;
			__RO	uint32_t	ICTXD_RES_25	:1;
			__RO	uint32_t	ICTXD_RES_26	:1;
			__RO	uint32_t	ICTXD_RES_27	:1;
			__RO	uint32_t	ICTXD_RES_28	:1;
			__RO	uint32_t	ICTXD_RES_29	:1;
			__RO	uint32_t	ICTXD_RES_30	:1;
			__RO	uint32_t	ICTXD_RES_31	:1;
		};
	};

	union
	{
		/* Name:	ICCCR2
		 * Offset:	0x28
		 * Size:	32 bits */
		__RW	uint32_t	ICCCR2;
		struct
		{
			__RW	uint32_t	SME	:1;
			__RW	uint32_t	HLSE	:1;
			__RW	uint32_t	CDFD	:1;
			__RO	uint32_t	ICCCR2_RES_3	:1;
			__RO	uint32_t	ICCCR2_RES_4	:1;
			__RO	uint32_t	ICCCR2_RES_5	:1;
			__RO	uint32_t	ICCCR2_RES_6	:1;
			__RW	uint32_t	FMPE	:1;
			__RO	uint32_t	ICCCR2_RES_8	:1;
			__RO	uint32_t	ICCCR2_RES_9	:1;
			__RO	uint32_t	ICCCR2_RES_10	:1;
			__RO	uint32_t	ICCCR2_RES_11	:1;
			__RO	uint32_t	ICCCR2_RES_12	:1;
			__RO	uint32_t	ICCCR2_RES_13	:1;
			__RO	uint32_t	ICCCR2_RES_14	:1;
			__RO	uint32_t	ICCCR2_RES_15	:1;
			__RO	uint32_t	ICCCR2_RES_16	:1;
			__RO	uint32_t	ICCCR2_RES_17	:1;
			__RO	uint32_t	ICCCR2_RES_18	:1;
			__RO	uint32_t	ICCCR2_RES_19	:1;
			__RO	uint32_t	ICCCR2_RES_20	:1;
			__RO	uint32_t	ICCCR2_RES_21	:1;
			__RO	uint32_t	ICCCR2_RES_22	:1;
			__RO	uint32_t	ICCCR2_RES_23	:1;
			__RO	uint32_t	ICCCR2_RES_24	:1;
			__RO	uint32_t	ICCCR2_RES_25	:1;
			__RO	uint32_t	ICCCR2_RES_26	:1;
			__RO	uint32_t	ICCCR2_RES_27	:1;
			__RO	uint32_t	ICCCR2_RES_28	:1;
			__RO	uint32_t	ICCCR2_RES_29	:1;
			__RO	uint32_t	ICCCR2_RES_30	:1;
			__RO	uint32_t	ICCCR2_RES_31	:1;
		};
	};

	union
	{
		/* Name:	ICMPR
		 * Offset:	0x2C
		 * Size:	32 bits */
		__RW	uint32_t	ICMPR;
		struct
		{
			__RW	uint32_t	SMD	:8;
			__RO	uint32_t	ICMPR_RES_8	:1;
			__RO	uint32_t	ICMPR_RES_9	:1;
			__RO	uint32_t	ICMPR_RES_10	:1;
			__RO	uint32_t	ICMPR_RES_11	:1;
			__RO	uint32_t	ICMPR_RES_12	:1;
			__RO	uint32_t	ICMPR_RES_13	:1;
			__RO	uint32_t	ICMPR_RES_14	:1;
			__RO	uint32_t	ICMPR_RES_15	:1;
			__RO	uint32_t	ICMPR_RES_16	:1;
			__RO	uint32_t	ICMPR_RES_17	:1;
			__RO	uint32_t	ICMPR_RES_18	:1;
			__RO	uint32_t	ICMPR_RES_19	:1;
			__RO	uint32_t	ICMPR_RES_20	:1;
			__RO	uint32_t	ICMPR_RES_21	:1;
			__RO	uint32_t	ICMPR_RES_22	:1;
			__RO	uint32_t	ICMPR_RES_23	:1;
			__RO	uint32_t	ICMPR_RES_24	:1;
			__RO	uint32_t	ICMPR_RES_25	:1;
			__RO	uint32_t	ICMPR_RES_26	:1;
			__RO	uint32_t	ICMPR_RES_27	:1;
			__RO	uint32_t	ICMPR_RES_28	:1;
			__RO	uint32_t	ICMPR_RES_29	:1;
			__RO	uint32_t	ICMPR_RES_30	:1;
			__RO	uint32_t	ICMPR_RES_31	:1;
		};
	};

	union
	{
		/* Name:	ICHPR
		 * Offset:	0x30
		 * Size:	32 bits */
		__RW	uint32_t	ICHPR;
		struct
		{
			__RW	uint32_t	SCHD	:16;
			__RO	uint32_t	ICHPR_RES_16	:1;
			__RO	uint32_t	ICHPR_RES_17	:1;
			__RO	uint32_t	ICHPR_RES_18	:1;
			__RO	uint32_t	ICHPR_RES_19	:1;
			__RO	uint32_t	ICHPR_RES_20	:1;
			__RO	uint32_t	ICHPR_RES_21	:1;
			__RO	uint32_t	ICHPR_RES_22	:1;
			__RO	uint32_t	ICHPR_RES_23	:1;
			__RO	uint32_t	ICHPR_RES_24	:1;
			__RO	uint32_t	ICHPR_RES_25	:1;
			__RO	uint32_t	ICHPR_RES_26	:1;
			__RO	uint32_t	ICHPR_RES_27	:1;
			__RO	uint32_t	ICHPR_RES_28	:1;
			__RO	uint32_t	ICHPR_RES_29	:1;
			__RO	uint32_t	ICHPR_RES_30	:1;
			__RO	uint32_t	ICHPR_RES_31	:1;
		};
	};

	union
	{
		/* Name:	ICLPR
		 * Offset:	0x34
		 * Size:	32 bits */
		__RW	uint32_t	ICLPR;
		struct
		{
			__RW	uint32_t	SCLD	:16;
			__RO	uint32_t	ICLPR_RES_16	:1;
			__RO	uint32_t	ICLPR_RES_17	:1;
			__RO	uint32_t	ICLPR_RES_18	:1;
			__RO	uint32_t	ICLPR_RES_19	:1;
			__RO	uint32_t	ICLPR_RES_20	:1;
			__RO	uint32_t	ICLPR_RES_21	:1;
			__RO	uint32_t	ICLPR_RES_22	:1;
			__RO	uint32_t	ICLPR_RES_23	:1;
			__RO	uint32_t	ICLPR_RES_24	:1;
			__RO	uint32_t	ICLPR_RES_25	:1;
			__RO	uint32_t	ICLPR_RES_26	:1;
			__RO	uint32_t	ICLPR_RES_27	:1;
			__RO	uint32_t	ICLPR_RES_28	:1;
			__RO	uint32_t	ICLPR_RES_29	:1;
			__RO	uint32_t	ICLPR_RES_30	:1;
			__RO	uint32_t	ICLPR_RES_31	:1;
		};
	};

	union
	{
		/* Name:	ICFBSCR
		 * Offset:	0x38
		 * Size:	32 bits */
		__RW	uint32_t	ICFBSCR;
		struct
		{
			__RW	uint32_t	FBSC	        :5;
			__RO	uint32_t	ICFBSCR_RES_5	:1;
			__RO	uint32_t	ICFBSCR_RES_6	:1;
			__RO	uint32_t	ICFBSCR_RES_7	:1;
			__RO	uint32_t	ICFBSCR_RES_8	:1;
			__RO	uint32_t	ICFBSCR_RES_9	:1;
			__RO	uint32_t	ICFBSCR_RES_10	:1;
			__RO	uint32_t	ICFBSCR_RES_11	:1;
			__RO	uint32_t	ICFBSCR_RES_12	:1;
			__RO	uint32_t	ICFBSCR_RES_13	:1;
			__RO	uint32_t	ICFBSCR_RES_14	:1;
			__RO	uint32_t	ICFBSCR_RES_15	:1;
            __RW    uint32_t    TXFBSC          :5;
			__RO	uint32_t	ICFBSCR_RES_21	:1;
			__RO	uint32_t	ICFBSCR_RES_22	:1;
			__RO	uint32_t	ICFBSCR_RES_23	:1;
            __RW    uint32_t    RXFBSC          :5;
			__RO	uint32_t	ICFBSCR_RES_29	:1;
			__RO	uint32_t	ICFBSCR_RES_30	:1;
			__RO	uint32_t	ICFBSCR_RES_31	:1;
		};
	};

	union
	{
		/* Name:	ICDMAER
		 * Offset:	0x3C
		 * Size:	32 bits */
		__RW	uint32_t	ICDMAER;
		struct
		{
			__RW	uint32_t	TMDMAE	:1;
			__RW	uint32_t	RMDMAE	:1;
			__RW	uint32_t	TSDMAE	:1;
			__RW	uint32_t	RSDMAE	:1;
			__RO	uint32_t	ICDMAER_RES_4	:1;
			__RO	uint32_t	ICDMAER_RES_5	:1;
			__RW	uint32_t	RMDMACE	:1;
			__RW	uint32_t	TMDMACE	:1;
			__RW	uint32_t	TMDMATSZ	:8;
			__RW	uint32_t	RMDMATSZ	:8;
			__RW	uint32_t	MDMACTSZ	:8;
		};
	};

} I2C_t;

#define FNA_POS         0
#define GCAE_POS        1
#define SIE_POS         2
#define SDBS_POS        3
#define SCSS_POS        4
#define SAR_POS         0
#define SDR_POS         1
#define SDT_POS         2
#define SDE_POS         3
#define SSR_POS         4
#define STM_POS         5
#define GCAR_POS        6
#define SARE_POS        0
#define SDRE_POS        1
#define SDTE_POS        2
#define SDEE_POS        3
#define SSRE_POS        4
#define SADD0_POS       0
#define SADD1_POS       1
#define ESG_POS         0
#define FSB_POS         1
#define TSBE_POS        2
#define MIE_POS         3
#define OBPC_POS        4
#define FSDA_POS        5
#define FSCL_POS        6
#define MDBS_POS        7
#define MAT_POS         0
#define MDR_POS         1
#define MDT_POS         2
#define MDE_POS         3
#define MST_POS         4
#define MAL_POS         5
#define MNR_POS         6
#define MATE_POS        0
#define MDRE_POS        1
#define MDTE_POS        2
#define MDEE_POS        3
#define MSTE_POS        4
#define MALE_POS        5
#define MNRE_POS        6
#define STM1_POS        0
#define CDF_POS         0
#define SCGD_POS        3
#define SME_POS         0
#define HLSE_POS        1
#define CDFD_POS        2
#define TMDMAE_POS      0
#define RMDMAE_POS      1
#define TSDMAE_POS      2
#define RSDMAE_POS      3
#define RMDMAC_POS      6
#define TMDMAC_POS      7
#define TMDMATSZ_POS    8
#define RMDMATSZ_POS    16
#define MDMACTSZ_POS    24

#define I2C_INT_SAR          (1 << SAR_POS   )
#define I2C_INT_SDR          (1 << SDR_POS   )
#define I2C_INT_SDT          (1 << SDT_POS   )
#define I2C_INT_SDE          (1 << SDE_POS   )
#define I2C_INT_SSR          (1 << SSR_POS   )
#define I2C_INT_MAT          (1 << MAT_POS   )
#define I2C_INT_MDR          (1 << MDR_POS   )
#define I2C_INT_MDT          (1 << MDT_POS   )
#define I2C_INT_MDE          (1 << MDE_POS   )
#define I2C_INT_MST          (1 << MST_POS   )
#define I2C_INT_MAL          (1 << MAL_POS   )
#define I2C_INT_MNR          (1 << MNR_POS   )
#define I2C_INT_ALL          (~0)

#define FNA_MASK             (1 << FNA_POS   )
#define GCAE_MASK            (1 << GCAE_POS  )
#define SIE_MASK             (1 << SIE_POS   )
#define SDBS_MASK            (1 << SDBS_POS  )
#define SCSS_MASK            (1 << SCSS_POS  )
#define SAR_MASK             (1 << SAR_POS   )
#define SDR_MASK             (1 << SDR_POS   )
#define SDT_MASK             (1 << SDT_POS   )
#define SDE_MASK             (1 << SDE_POS   )
#define SSR_MASK             (1 << SSR_POS   )
#define STM_MASK             (1 << STM_POS   )
#define GCAR_MASK            (1 << GCAR_POS  )
#define SARE_MASK            (1 << SARE_POS  )
#define SDRE_MASK            (1 << SDRE_POS  )
#define SDTE_MASK            (1 << SDTE_POS  )
#define SDEE_MASK            (1 << SDEE_POS  )
#define SSRE_MASK            (1 << SSRE_POS  )
#define SADD0_MASK           (1 << SADD0_POS )
#define SADD1_MASK           (1 << SADD1_POS )
#define ESG_MASK             (1 << ESG_POS   )
#define FSB_MASK             (1 << FSB_POS   )
#define TSBE_MASK            (1 << TSBE_POS  )
#define MIE_MASK             (1 << MIE_POS   )
#define OBPC_MASK            (1 << OBPC_POS  )
#define FSDA_MASK            (1 << FSDA_POS  )
#define FSCL_MASK            (1 << FSCL_POS  )
#define MDBS_MASK            (1 << MDBS_POS  )
#define MAT_MASK             (1 << MAT_POS   )
#define MDR_MASK             (1 << MDR_POS   )
#define MDT_MASK             (1 << MDT_POS   )
#define MDE_MASK             (1 << MDE_POS   )
#define MST_MASK             (1 << MST_POS   )
#define MAL_MASK             (1 << MAL_POS   )
#define MNR_MASK             (1 << MNR_POS   )
#define MATE_MASK            (1 << MATE_POS  )
#define MDRE_MASK            (1 << MDRE_POS  )
#define MDTE_MASK            (1 << MDTE_POS  )
#define MDEE_MASK            (1 << MDEE_POS  )
#define MSTE_MASK            (1 << MSTE_POS  )
#define MALE_MASK            (1 << MALE_POS  )
#define MNRE_MASK            (1 << MNRE_POS  )
#define STM1_MASK            (1 << STM1_POS  )
#define SME_MASK             (1 << SME_POS   )
#define HLSE_MASK            (1 << HLSE_POS  )
#define CDFD_MASK            (1 << CDFD_POS  )
#define TMDMAE_MASK          (1 << TMDMAE_POS)
#define RMDMAE_MASK          (1 << RMDMAE_POS)
#define TSDMAE_MASK          (1 << TSDMAE_POS)
#define RSDMAE_MASK          (1 << RSDMAE_POS)
#define RMDMAC_MASK          (1 << RMDMAC_POS)
#define TMDMAC_MASK          (1 << TMDMAC_POS)
#define CDF_MASK     	0x00000003
#define SCGD_MASK    	0x000001f8
#define TMDMATSZ_MASK	0x0000ff00
#define RMDMATSZ_MASK	0x00ff0000
#define MDMACTSZ_MASK	0xff000000

typedef enum
{
    OD_BUFFER,
    LVTTL_BUFFER

} I2C_IOBufferType_t;

typedef enum
{
    FIXED_DUTY_CYCLE,
    VARIABLE_DUTY_CYCLE

} I2C_ClockType_t;

typedef enum
{
    GENERAL_CALL_ACK_DISABLE,
    GENERAL_CALL_ACK_ENABLE

} I2C_GenCallMode_t;

typedef enum
{
    CLOCK_STRETCH_BEFORE,
    CLOCK_STRETCH_AFTER

} I2C_ClockStretchMode_t;

typedef enum
{
    CLOCK_RATE_50KHZ,
    CLOCK_RATE_100KHZ,
    CLOCK_RATE_200KHZ,
    CLOCK_RATE_250KHZ,
    CLOCK_RATE_300KHZ,
    CLOCK_RATE_400KHZ,
    CLOCK_RATE_1MHZ

} I2C_ClockRate_t;

typedef enum
{
    SLAVE_DMA_DISABLE,
    SLAVE_RX_DMA_ENABLE,
    SLAVE_TX_DMA_ENABLE

} I2C_SlaveDMATransferMode_t;

typedef enum
{
    MASTER_TX,
    MASTER_RX

} I2C_MasterTransferMode_t;

typedef enum
{
    START_BYTE_TRANSMIT_DISABLE,
    START_BYTE_TRANSMIT_ENABLE

} I2C_MasterStartByteTransmitMode_t;

typedef enum
{
    MASTER_DMA_DISABLE,
    MASTER_RX_DMA_ENABLE,
    MASTER_TX_DMA_ENABLE

} I2C_MasterDMATransferMode_t;

typedef struct
{
    uint8_t                             SlaveAddress;           // ICSAR
    I2C_ClockStretchMode_t              ClockStretchMode;       // ICSCR.SCSS
    I2C_GenCallMode_t                   GenCallMode;            // ICSCR.GCAE
    I2C_IOBufferType_t                  IOBufferType;           //
    I2C_ClockType_t                     ClockType;              // ICCCR2
    I2C_ClockRate_t                     ClockRate;              // ICCCR, ICCCR2, ICMPR, ICHPR, ICLPR, ICFBSCR
    
} I2C_SlaveConfig_t;

typedef struct
{
    I2C_MasterTransferMode_t            TransferMode;           // ICMAR
    uint8_t                             SlaveAddress;           // ICMAR
    I2C_MasterStartByteTransmitMode_t   StartByteTransmitMode;  // ICMCR
    I2C_IOBufferType_t                  IOBufferType;           //
    I2C_ClockType_t                     ClockType;              // ICCCR2
    I2C_ClockRate_t                     ClockRate;              // ICCCR, ICCCR2, ICMPR, ICHPR, ICLPR, ICFBSCR

} I2C_MasterConfig_t;

typedef struct
{
    uint32_t ID;
    uint32_t *BufferPtr;
    uint32_t BufferSize;
    uint32_t CRC;
    
} I2C_DataPackage_t;

extern void I2C_slaveInit(I2C_t *i2c, const I2C_SlaveConfig_t *slaveConfig);
extern void I2C_slaveEnable(I2C_t *i2c);
extern void I2C_slaveDisable(I2C_t *i2c);
extern void I2C_slaveEnableInterrupt(I2C_t *i2c, uint32_t flag);
extern void I2C_slaveDisableInterrupt(I2C_t *i2c, uint32_t flag);
extern uint32_t I2C_slaveGetInterruptStatus(I2C_t *i2c);
extern void I2C_slaveClearInterruptStatus(I2C_t *i2c, uint32_t flag);
extern void I2C_slaveForceNAK(I2C_t *i2c);
extern uint32_t I2C_slaveReceiveMultipleByteNext(I2C_t *i2c);
extern uint32_t I2C_slaveReceiveMultipleByteStop(I2C_t *i2c);
extern uint32_t I2C_slaveReceiveMultipleByteFinish(I2C_t *i2c);
extern void I2C_slaveSetData(I2C_t *i2c, uint8_t data);
extern void I2C_slaveEnableDMAReceive(I2C_t *i2c);
extern void I2C_slaveDisableDMAReceive(I2C_t *i2c);
extern void I2C_slaveEnableDMATransmit(I2C_t *i2c);
extern void I2C_slaveDisableDMATransmit(I2C_t *i2c);
extern void I2C_masterInit(I2C_t *i2c, const I2C_MasterConfig_t *masterConfig);
extern void I2C_masterSetSlaveAddress(I2C_t *i2c, uint8_t addr);
extern void I2C_masterSetMode(I2C_t *i2c, I2C_MasterTransferMode_t mode);
extern void I2C_masterEnable(I2C_t *i2c);
extern void I2C_masterDisable(I2C_t *i2c);
extern void I2C_masterEnableInterrupt(I2C_t *i2c, uint32_t flag);
extern void I2C_masterDisableInterrupt(I2C_t *i2c, uint32_t flag);
extern uint32_t I2C_masterGetInterruptStatus(I2C_t *i2c);
extern void I2C_masterClearInterruptStatus(I2C_t *i2c, uint32_t flag);
extern void I2C_masterSendMultipleByteStart(I2C_t *i2c, uint32_t data);
extern void I2C_masterSendMultipleByteNext(I2C_t *i2c, uint32_t data);
extern void I2C_masterSendMultipleByteStop(I2C_t *i2c);
extern void I2C_masterReceiveStart(I2C_t *i2c);
extern uint32_t I2C_masterReceiveMultipleByteNext(I2C_t *i2c);
extern uint32_t I2C_masterReceiveMultipleByteStop(I2C_t *i2c);
extern uint32_t I2C_masterReceiveMultipleByteFinish(I2C_t *i2c);
extern void I2C_masterSetDMAContinuousTransferCount(I2C_t *i2c, uint8_t transferCount);
extern void I2C_masterSetDMAContinuousReceiveBlockCount(I2C_t *i2c, uint8_t blockCount);
extern void I2C_masterSetDMAContinuousTransmitBlockCount(I2C_t *i2c, uint8_t blockCount);
extern void I2C_masterEnableDMAContinuousReceive(I2C_t *i2c);
extern void I2C_masterDisableDMAContinuousReceive(I2C_t *i2c);
extern void I2C_masterEnableDMAContinuousTransmit(I2C_t *i2c);
extern void I2C_masterDisableDMAContinuousTransmit(I2C_t *i2c);
extern void I2C_masterEnableDMAReceive(I2C_t *i2c);
extern void I2C_masterDisableDMAReceive(I2C_t *i2c);
extern void I2C_masterEnableDMATransmit(I2C_t *i2c);
extern void I2C_masterDisableDMATransmit(I2C_t *i2c);
extern void I2C_masterRestart(I2C_t *i2c, uint8_t slaveAddress, I2C_MasterTransferMode_t masterTransferMode);
extern bool I2C_slaveIsGeneralCall(I2C_t *i2c);
extern bool I2C_masterIsArbitrationLost(I2C_t *i2c);
extern void I2C_configPins(void);
extern void I2C_releasePins(void);
extern void I2C_modelEnable(void);
extern void I2C_modelDisable(void);
extern void I2C_modelConnect(const uint32_t a, const uint32_t b);
extern void I2C_masterDisableStartGeneration(I2C_t *i2c);
extern void I2C_masterEnableStartByteTransmit(I2C_t *i2c);
extern void I2C_masterDisableStartByteTransmit(I2C_t *i2c);

#endif	/* I2C_H_ */

