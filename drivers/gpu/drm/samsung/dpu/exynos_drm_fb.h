/* SPDX-License-Identifier: GPL-2.0-only
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd.
 * Authors:
 *	Inki Dae <inki.dae@samsung.com>
 *	Joonyoung Shim <jy0922.shim@samsung.com>
 *	Seung-Woo Kim <sw0312.kim@samsung.com>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef _EXYNOS_DRM_FB_H_
#define _EXYNOS_DRM_FB_H_

#include <linux/dma-buf.h>

#include "exynos_drm_gem.h"

#define MAX_FB_BUFFER	4

static inline bool exynos_drm_fb_is_colormap(const struct drm_framebuffer *fb)
{
	const struct exynos_drm_gem *exynos_gem = to_exynos_gem(fb->obj[0]);

	return (exynos_gem->flags & EXYNOS_DRM_GEM_FLAG_COLORMAP) != 0;
}

dma_addr_t exynos_drm_fb_dma_addr(const struct drm_framebuffer *fb, int index);

void exynos_drm_mode_config_init(struct drm_device *dev);
#endif
