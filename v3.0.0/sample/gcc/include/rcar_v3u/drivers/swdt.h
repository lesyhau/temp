
/******************************************************************************
 * This file has been generated by Module Structure Generator
 * 2082 - Hau Sy Le - hau.le.eb@renesas.com
 ******************************************************************************
 * File name:		swdt.h
 * Date created:	11/1/2018 2:55:30 PM
 * PC name:			RVC-LT-410219
 * User name:		haule2
******************************************************************************/

#ifndef	SWDT_H_
#define	SWDT_H_

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
 *	Name	Offset	Size	R/W
 ******************************************************************************
 *	SWTCNT	0x0	32	RW
 *	SWTCSRA	0x4	32	RW
 *	SWTCSRB	0x8	32	RW
******************************************************************************/
typedef struct
{
	union
	{
		/* Name:	SWTCNT
		 * Offset:	0x0
		 * Size:	32 bits */
		__RW	uint32_t	SWTCNT;
	};

	union
	{
		/* Name:	SWTCSRA
		 * Offset:	0x4
		 * Size:	32 bits */
		__RW	uint32_t	SWTCSRA;
		struct
		{
			__RW	uint32_t	CKS0	:3;
			__RW	uint32_t	WOVFE	:1;
			__RW	uint32_t	WOVF	:1;
			__RW	uint32_t	WRFLG	:1;
			__RW	uint32_t	TME	:1;
		};
	};

	union
	{
		/* Name:	SWTCSRB
		 * Offset:	0x8
		 * Size:	32 bits */
		__RW	uint32_t	SWTCSRB;
		struct
		{
			__RW	uint32_t	CKS1	:6;
		};
	};

} SWDT_t;

#endif	/* SWDT_H_ */

