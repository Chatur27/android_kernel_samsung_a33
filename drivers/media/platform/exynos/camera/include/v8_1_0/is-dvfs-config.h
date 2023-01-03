// SPDX-License-Identifier: GPL-2.0
/*
 * Samsung Exynos SoC series Pablo driver
 *
 * Copyright (c) 2019 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_DVFS_CONFIG_H
#define IS_DVFS_CONFIG_H

/* dvfs table idx ex.different dvfa table  pure bayer or dynamic bayer */
#define IS_DVFS_TABLE_IDX_MAX 3

/* FIMC-IS DVFS SCENARIO enum */
enum IS_SCENARIO_ID {
	IS_SN_DEFAULT,
	IS_SN_FRONT2_PREVIEW,
	IS_SN_FRONT2_CAPTURE,
	IS_SN_FRONT2_CAMCORDING,
	IS_SN_FRONT2_CAMCORDING_CAPTURE,
	IS_SN_FRONT_PREVIEW,
	IS_SN_FRONT_PREVIEW_FULL,
	IS_SN_FRONT_CAPTURE,
	IS_SN_FRONT_CAMCORDING,
	IS_SN_FRONT_CAMCORDING_WHD,
	IS_SN_FRONT_CAMCORDING_UHD,
	IS_SN_FRONT_CAMCORDING_FHD_60FPS,
	IS_SN_FRONT_CAMCORDING_UHD_60FPS,
	IS_SN_FRONT_CAMCORDING_FHD_120FPS,
	IS_SN_FRONT_CAMCORDING_CAPTURE,
	IS_SN_FRONT_CAMCORDING_WHD_CAPTURE,
	IS_SN_FRONT_CAMCORDING_UHD_CAPTURE,
	IS_SN_FRONT_CAMCORDING_FHD_60FPS_CAPTURE,
	IS_SN_FRONT_CAMCORDING_UHD_60FPS_CAPTURE,
	IS_SN_FRONT_CAMCORDING_FHD_120FPS_CAPTURE,
	IS_SN_FRONT_DUAL_SYNC_PREVIEW,
	IS_SN_FRONT_DUAL_SYNC_CAPTURE,
	IS_SN_FRONT_DUAL_SYNC_FHD_CAMCORDING,
	IS_SN_FRONT_DUAL_SYNC_FHD_CAMCORDING_CAPTURE,
	IS_SN_FRONT_VT1,
	IS_SN_FRONT_VT2,
	IS_SN_FRONT_VT4,
	IS_SN_FRONT_PREVIEW_HIGH_SPEED_FPS,
	IS_SN_FRONT_VIDEO_HIGH_SPEED_120FPS,
	IS_SN_REAR3_PREVIEW_FHD,
	IS_SN_REAR3_CAPTURE,
	IS_SN_REAR3_CAMCORDING_FHD,
	IS_SN_REAR3_CAMCORDING_FHD_CAPTURE,
	IS_SN_REAR2_PREVIEW_FHD,
	IS_SN_REAR2_CAPTURE,
	IS_SN_REAR2_CAMCORDING_FHD,
	IS_SN_REAR2_CAMCORDING_UHD_8K,
	IS_SN_REAR2_CAMCORDING_FHD_CAPTURE,
	IS_SN_REAR2_CAMCORDING_UHD_8K_CAPTURE,
	IS_SN_REAR_PREVIEW_FHD,
	IS_SN_REAR_PREVIEW_WHD,
	IS_SN_REAR_PREVIEW_UHD,
	IS_SN_REAR_PREVIEW_FULL,
	IS_SN_REAR_PREVIEW_UHD_60FPS,
	IS_SN_REAR_CAPTURE,
	IS_SN_REAR_CAMCORDING_FHD,
	IS_SN_REAR_CAMCORDING_HDR,
	IS_SN_REAR_CAMCORDING_WHD,
	IS_SN_REAR_CAMCORDING_UHD,
	IS_SN_REAR_CAMCORDING_UHD_60FPS,
	IS_SN_REAR_CAMCORDING_UHD_8K,
	IS_SN_REAR_CAMCORDING_FHD_CAPTURE,
	IS_SN_REAR_CAMCORDING_HDR_CAPTURE,
	IS_SN_REAR_CAMCORDING_WHD_CAPTURE,
	IS_SN_REAR_CAMCORDING_UHD_CAPTURE,
	IS_SN_REAR_CAMCORDING_UHD_8K_CAPTURE,
	IS_SN_SECURE_FRONT,
	IS_SN_DUAL_SYNC_PREVIEW,
	IS_SN_DUAL_SYNC_CAPTURE,
	IS_SN_DUAL_SYNC_PREVIEW_WHD,
	IS_SN_DUAL_SYNC_WHD_CAPTURE,
	IS_SN_DUAL_SYNC_FHD_CAMCORDING,
	IS_SN_DUAL_SYNC_FHD_CAMCORDING_CAPTURE,
	IS_SN_DUAL_SYNC_UHD_CAMCORDING,
	IS_SN_DUAL_SYNC_UHD_CAMCORDING_CAPTURE,
	IS_SN_DUAL_PREVIEW,
	IS_SN_DUAL_CAPTURE,
	IS_SN_DUAL_FHD_CAMCORDING,
	IS_SN_DUAL_FHD_CAMCORDING_CAPTURE,
	IS_SN_DUAL_UHD_CAMCORDING,
	IS_SN_DUAL_UHD_CAMCORDING_CAPTURE,
	IS_SN_PIP_PREVIEW,
	IS_SN_PIP_CAPTURE,
	IS_SN_PIP_CAMCORDING,
	IS_SN_PIP_CAMCORDING_CAPTURE,
	IS_SN_PREVIEW_HIGH_SPEED_FPS,
	IS_SN_VIDEO_HIGH_SPEED_60FPS_SWVDIS,
	IS_SN_VIDEO_HIGH_SPEED_60FPS,
	IS_SN_VIDEO_HIGH_SPEED_60FPS_PRO,
	IS_SN_VIDEO_HIGH_SPEED_120FPS,
	IS_SN_VIDEO_HIGH_SPEED_120FPS_PRO,
	IS_SN_VIDEO_HIGH_SPEED_240FPS,
	IS_SN_VIDEO_HIGH_SPEED_DUALFPS,
	IS_SN_VIDEO_HIGH_SPEED_60FPS_CAPTURE,
	IS_SN_DUAL_TOF,
	IS_SN_EXT_DUAL,
	IS_SN_EXT_REAR,
	IS_SN_EXT_FRONT,
	IS_SN_EXT_SECURE,
	IS_SN_THERMAL_8K,
	IS_SN_MAX,
	IS_SN_END,
};

struct is_dvfs_dt_t {
	const char *parse_scenario_nm;	/* string for parsing from DTS */
	u32 scenario_id;	/* scenario_id */
};

/* for DT parsing */
static struct is_dvfs_dt_t is_dvfs_dt_arr[IS_DVFS_SN_END] = {
		{"default_"				, IS_SN_DEFAULT},
		{"secure_front_"			, IS_SN_SECURE_FRONT},
		{"front2_preview_"			, IS_SN_FRONT2_PREVIEW},
		{"front2_capture_"			, IS_SN_FRONT2_CAPTURE},
		{"front2_video_"			, IS_SN_FRONT2_CAMCORDING},
		{"front2_video_capture_"		, IS_SN_FRONT2_CAMCORDING_CAPTURE},
		{"front_preview_"			, IS_SN_FRONT_PREVIEW},
		{"front_preview_full_"			, IS_SN_FRONT_PREVIEW_FULL},
		{"front_capture_"			, IS_SN_FRONT_CAPTURE},
		{"front_video_"				, IS_SN_FRONT_CAMCORDING},
		{"front_video_whd_"			, IS_SN_FRONT_CAMCORDING_WHD},
		{"front_video_uhd_"			, IS_SN_FRONT_CAMCORDING_UHD},
		{"front_video_fhd_60fps_"		, IS_SN_FRONT_CAMCORDING_FHD_60FPS},
		{"front_video_uhd_60fps_"		, IS_SN_FRONT_CAMCORDING_UHD_60FPS},
		{"front_video_fhd_120fps_"		, IS_SN_FRONT_CAMCORDING_FHD_120FPS},
		{"front_video_capture_"			, IS_SN_FRONT_CAMCORDING_CAPTURE},
		{"front_video_whd_capture_"		, IS_SN_FRONT_CAMCORDING_WHD_CAPTURE},
		{"front_video_uhd_capture_"		, IS_SN_FRONT_CAMCORDING_UHD_CAPTURE},
		{"front_video_fhd_60fps_capture_"	, IS_SN_FRONT_CAMCORDING_FHD_60FPS_CAPTURE},
		{"front_video_uhd_60fps_capture_"	, IS_SN_FRONT_CAMCORDING_UHD_60FPS_CAPTURE},
		{"front_video_fhd_120fps_capture_"	, IS_SN_FRONT_CAMCORDING_FHD_120FPS_CAPTURE},
		{"front_video_uhd_capture_"		, IS_SN_FRONT_CAMCORDING_UHD_CAPTURE},
		{"front_dual_sync_preview_"		, IS_SN_FRONT_DUAL_SYNC_PREVIEW},
		{"front_dual_sync_capture_"		, IS_SN_FRONT_DUAL_SYNC_CAPTURE},
		{"front_dual_sync_video_fhd_"		, IS_SN_FRONT_DUAL_SYNC_FHD_CAMCORDING},
		{"front_dual_sync_video_fhd_capture_"	, IS_SN_FRONT_DUAL_SYNC_FHD_CAMCORDING_CAPTURE},
		{"front_vt1_"				, IS_SN_FRONT_VT1},
		{"front_vt2_"				, IS_SN_FRONT_VT2},
		{"front_vt4_"				, IS_SN_FRONT_VT4},
		{"front_preview_high_speed_fps_"	, IS_SN_FRONT_PREVIEW_HIGH_SPEED_FPS},
		{"front_video_high_speed_120fps_"       , IS_SN_FRONT_VIDEO_HIGH_SPEED_120FPS},
		{"rear3_preview_fhd_"			, IS_SN_REAR3_PREVIEW_FHD},
		{"rear3_capture_"			, IS_SN_REAR3_CAPTURE},
		{"rear3_video_fhd_"			, IS_SN_REAR3_CAMCORDING_FHD},
		{"rear3_video_fhd_capture_"		, IS_SN_REAR3_CAMCORDING_FHD_CAPTURE},
		{"rear2_preview_fhd_"			, IS_SN_REAR2_PREVIEW_FHD},
		{"rear2_capture_"			, IS_SN_REAR2_CAPTURE},
		{"rear2_video_fhd_"			, IS_SN_REAR2_CAMCORDING_FHD},
		{"rear2_video_uhd_8k_"			, IS_SN_REAR2_CAMCORDING_UHD_8K},
		{"rear2_video_fhd_capture_"		, IS_SN_REAR2_CAMCORDING_FHD_CAPTURE},
		{"rear2_video_uhd_8k_capture_"		, IS_SN_REAR2_CAMCORDING_UHD_8K_CAPTURE},
		{"rear_preview_full_"			, IS_SN_REAR_PREVIEW_FULL},
		{"rear_preview_fhd_"			, IS_SN_REAR_PREVIEW_FHD},
		{"rear_preview_whd_"			, IS_SN_REAR_PREVIEW_WHD},
		{"rear_preview_uhd_"			, IS_SN_REAR_PREVIEW_UHD},
		{"rear_preview_uhd_60fps_"		, IS_SN_REAR_PREVIEW_UHD_60FPS},
		{"rear_capture_"			, IS_SN_REAR_CAPTURE},
		{"rear_video_fhd_"			, IS_SN_REAR_CAMCORDING_FHD},
		{"rear_video_hdr_"			, IS_SN_REAR_CAMCORDING_HDR},
		{"rear_video_whd_"			, IS_SN_REAR_CAMCORDING_WHD},
		{"rear_video_uhd_"			, IS_SN_REAR_CAMCORDING_UHD},
		{"rear_video_uhd_60fps_"		, IS_SN_REAR_CAMCORDING_UHD_60FPS},
		{"rear_video_uhd_8k_"			, IS_SN_REAR_CAMCORDING_UHD_8K},
		{"rear_video_fhd_capture_"		, IS_SN_REAR_CAMCORDING_FHD_CAPTURE},
		{"rear_video_hdr_capture_"		, IS_SN_REAR_CAMCORDING_HDR_CAPTURE},
		{"rear_video_whd_capture_"		, IS_SN_REAR_CAMCORDING_WHD_CAPTURE},
		{"rear_video_uhd_capture_"		, IS_SN_REAR_CAMCORDING_UHD_CAPTURE},
		{"rear_video_uhd_8k_capture_"	, IS_SN_REAR_CAMCORDING_UHD_8K_CAPTURE},
		{"dual_preview_"			, IS_SN_DUAL_PREVIEW},
		{"dual_capture_"			, IS_SN_DUAL_CAPTURE},
		{"dual_video_fhd_"			, IS_SN_DUAL_FHD_CAMCORDING},
		{"dual_video_fhd_capture_"		, IS_SN_DUAL_FHD_CAMCORDING_CAPTURE},
		{"dual_video_uhd_"			, IS_SN_DUAL_UHD_CAMCORDING},
		{"dual_video_uhd_capture_"		, IS_SN_DUAL_UHD_CAMCORDING_CAPTURE},
		{"dual_sync_preview_"			, IS_SN_DUAL_SYNC_PREVIEW},
		{"dual_sync_capture_"			, IS_SN_DUAL_SYNC_CAPTURE},
		{"dual_sync_preview_whd_"		, IS_SN_DUAL_SYNC_PREVIEW_WHD},
		{"dual_sync_whd_capture_"		, IS_SN_DUAL_SYNC_WHD_CAPTURE},
		{"dual_sync_video_fhd_"			, IS_SN_DUAL_SYNC_FHD_CAMCORDING},
		{"dual_sync_video_fhd_capture_"		, IS_SN_DUAL_SYNC_FHD_CAMCORDING_CAPTURE},
		{"dual_sync_video_uhd_"			, IS_SN_DUAL_SYNC_UHD_CAMCORDING},
		{"dual_sync_video_uhd_capture_"		, IS_SN_DUAL_SYNC_UHD_CAMCORDING_CAPTURE},
		{"pip_preview_"				, IS_SN_PIP_PREVIEW},
		{"pip_capture_"				, IS_SN_PIP_CAPTURE},
		{"pip_video_"				, IS_SN_PIP_CAMCORDING},
		{"pip_video_capture_"			, IS_SN_PIP_CAMCORDING_CAPTURE},
		{"preview_high_speed_fps_"		, IS_SN_PREVIEW_HIGH_SPEED_FPS},
		{"video_high_speed_60fps_"		, IS_SN_VIDEO_HIGH_SPEED_60FPS},
		{"video_high_speed_60fps_pro_"          , IS_SN_VIDEO_HIGH_SPEED_60FPS_PRO},
		{"video_high_speed_120fps_"		, IS_SN_VIDEO_HIGH_SPEED_120FPS},
		{"video_high_speed_120fps_pro_"         , IS_SN_VIDEO_HIGH_SPEED_120FPS_PRO},
		{"video_high_speed_240fps_"		, IS_SN_VIDEO_HIGH_SPEED_240FPS},
		{"video_high_speed_dualfps_"		, IS_SN_VIDEO_HIGH_SPEED_DUALFPS},
		{"video_high_speed_60fps_capture_"	, IS_SN_VIDEO_HIGH_SPEED_60FPS_CAPTURE},
		{"ext_rear_"				, IS_SN_EXT_REAR},
		{"ext_front_"				, IS_SN_EXT_FRONT},
		{"ext_secure_"				, IS_SN_EXT_SECURE},
		{"thermal_8k_"				, IS_SN_THERMAL_8K},
		{"max_"					, IS_SN_MAX},
};

#endif /* IS_DVFS_CONFIG_H */
