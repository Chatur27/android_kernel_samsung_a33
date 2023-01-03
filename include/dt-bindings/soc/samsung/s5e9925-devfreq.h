/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Device Tree binding constants for Exynos991 devfreq
 */

#ifndef _DT_BINDINGS_EXYNOS_9925_DEVFREQ_H
#define _DT_BINDINGS_EXYNOS_9925_DEVFREQ_H

/* DEVFREQ TYPE LIST */
#define DEVFREQ_MIF			0
#define DEVFREQ_INT			1
#define DEVFREQ_INTCAM			2
#define DEVFREQ_DISP			3
#define DEVFREQ_CAM			4
#define DEVFREQ_NPU			5
#define DEVFREQ_AUD			6
#define DEVFREQ_DNC			7
#define DEVFREQ_MFC0			8
#define DEVFREQ_CSIS			9
#define DEVFREQ_ISP			10
#define DEVFREQ_MFC1			11
#define DEVFREQ_DSP			12
#define DEVFREQ_ALIVE			13
#define DEVFREQ_CHUB			14
#define DEVFREQ_VTS			15
#define DEVFREQ_HSI0			16
#define DEVFREQ_UFD			17
#define DEVFREQ_TYPE_END		18

/* ESS FLAG LIST */

/* DEVFREQ GOV TYPE */
#define SIMPLE_INTERACTIVE	0

#define ESS_FLAG_CPU_CL0	0
#define ESS_FLAG_CPU_CL1	1
#define ESS_FLAG_CPU_CL2	2
#define ESS_FLAG_INT		3
#define ESS_FLAG_MIF		4
#define ESS_FLAG_CAM		5
#define ESS_FLAG_DISP		6
#define ESS_FLAG_INTCAM		7
#define ESS_FLAG_AUD		8
#define ESS_FLAG_MFC		9
#define ESS_FLAG_NPU		10
#define ESS_FLAG_DSU		11
#define ESS_FLAG_DNC		12
#define ESS_FLAG_CSIS		13
#define ESS_FLAG_ISP		14
#define ESS_FLAG_MFC1		15
#define ESS_FLAG_DSP		16
#define ESS_FLAG_ALIVE		17
#define ESS_FLAG_CHUB		18
#define ESS_FLAG_VTS		19
#define ESS_FLAG_HSI0		20
#define ESS_FLAG_UFD		21
#endif
