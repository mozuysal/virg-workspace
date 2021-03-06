/**
 * @file nx_image_io_jpeg.h
 *
 * This file is part of the IYTE Visual Intelligence Research Group Software Library
 *
 * Copyright (C) 2015 Mustafa Ozuysal. All rights reserved.
 *
 * @author Mustafa Ozuysal
 *
 * Contact mustafaozuysal@iyte.edu.tr for comments and bug reports.
 *
 */
#ifndef VIRG_NEXUS_NX_IMAGE_IO_JPEG_H
#define VIRG_NEXUS_NX_IMAGE_IO_JPEG_H

#include "virg/nexus/nx_config.h"

#include "virg/nexus/nx_config.h"
#include "virg/nexus/nx_image.h"
#include "virg/nexus/nx_image_io_params.h"

__NX_BEGIN_DECL

void nx_image_xsave_jpeg(const struct NXImage *img, const char *filename);

void nx_image_xload_jpeg(struct NXImage *img, const char *filename, enum NXImageLoadMode mode);

NXResult nx_image_save_jpeg(const struct NXImage *img, const char *filename);

NXResult nx_image_load_jpeg(struct NXImage *img, const char *filename, enum NXImageLoadMode mode);

__NX_END_DECL

#endif
