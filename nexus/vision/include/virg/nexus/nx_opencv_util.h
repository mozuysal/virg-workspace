/**
 * @file nx_opencv_util.h
 *
 * This file is part of the IYTE Visual Intelligence Research Group Software Library
 *
 * Copyright (C) 2017 Mustafa Ozuysal. All rights reserved.
 *
 * @author Mustafa Ozuysal
 *
 * Contact mustafaozuysal@iyte.edu.tr for comments and bug reports.
 *
 */
#ifndef VIRG_NEXUS_NX_OPENCV_UTIL_H
#define VIRG_NEXUS_NX_OPENCV_UTIL_H

#if CV_MAJOR_VERSION < 3
#  include "opencv2/core/core.hpp"
#  include "opencv2/features2d/features2d.hpp"
#else
#  include "opencv2/core.hpp"
#endif

#include "virg/nexus/nx_assert.h"
#include "virg/nexus/nx_image.h"
#include "virg/nexus/nx_types.h"
#include "virg/nexus/nx_keypoint.h"

const float NX_KEYPOINT_NEIGHBORHOOD_MULTIPLIER = 3.0f;

inline cv::Mat         nx_wrap_image_nx2mat(struct NXImage *nx_img);
inline struct NXImage *nx_wrap_image_mat2nx(cv::Mat &cv_mat);

inline void nx_convert_key_nx2cv(cv::KeyPoint *cv_key, const struct NXKeypoint *nx_key);
inline void nx_convert_key_cv2nx(struct NXKeypoint *nx_key, const cv::KeyPoint *cv_key);

inline void nx_convert_keys_nx2cv(int n_keys, cv::KeyPoint *cv_keys, const struct NXKeypoint *nx_keys);
inline void nx_convert_keys_cv2nx(int n_keys, struct NXKeypoint *nx_keys, const cv::KeyPoint *cv_keys);

// --------------------------- inline implementations -----------------------------
cv::Mat nx_wrap_image_nx2mat(struct NXImage *nx_img)
{
        NX_ASSERT_PTR(nx_img);
        NX_ASSERT(nx_img->n_channels == 1 || nx_img->n_channels == 4);

        int type = (nx_img->n_channels == 1) ? CV_8UC1 : CV_8UC4;
        cv::Mat cv_mat(nx_img->height, nx_img->width, type, (void *)nx_img->data, nx_img->row_stride);
        return cv_mat;
}

struct NXImage *nx_wrap_image_mat2nx(cv::Mat &cv_mat)
{
        int mat_type = cv_mat.type();
        NX_ASSERT(mat_type == CV_8UC1 || mat_type == CV_8UC4);

        if (cv_mat.data == NULL)
                return NULL;

        struct NXImage *nx_img = nx_image_alloc();
        enum NXImageType type =  (mat_type == CV_8UC1) ? NX_IMAGE_GRAYSCALE : NX_IMAGE_RGBA;
        nx_image_wrap(nx_img, cv_mat.data, cv_mat.cols, cv_mat.rows, cv_mat.step[0], type, NX_FALSE);
        return nx_img;
}

void nx_convert_key_nx2cv(cv::KeyPoint *cv_key, const struct NXKeypoint *nx_key)
{
        NX_ASSERT_PTR(cv_key);
        NX_ASSERT_PTR(nx_key);

        int octave = log(nx_key->scale) / log(2.0);
        cv_key->size = NX_KEYPOINT_NEIGHBORHOOD_MULTIPLIER * nx_key->sigma;
        cv_key->pt.x = nx_key->xs;
        cv_key->pt.y = nx_key->ys;
        cv_key->angle = nx_key->ori;
        cv_key->octave = octave;
        cv_key->response = nx_key->score;
        cv_key->class_id = nx_key->id;
}

void nx_convert_key_cv2nx(struct NXKeypoint *nx_key, const cv::KeyPoint *cv_key)
{
        NX_ASSERT_PTR(cv_key);
        NX_ASSERT_PTR(nx_key);

        nx_key->x = cv_key->pt.x;
        nx_key->y = cv_key->pt.y;
        nx_key->xs = cv_key->pt.x;
        nx_key->ys = cv_key->pt.y;
        nx_key->level = -1;
        nx_key->scale = 1 << cv_key->octave;
        nx_key->sigma = 0.0f;
        nx_key->score = cv_key->response;
        nx_key->ori = cv_key->angle;
        nx_key->id = cv_key->class_id;
}

void nx_convert_keys_nx2cv(int n_keys, cv::KeyPoint *cv_keys, const struct NXKeypoint *nx_keys)
{
        for (int i = 0; i < n_keys; ++i)
                nx_convert_key_nx2cv(cv_keys + i, nx_keys + i);
}

void nx_convert_keys_cv2nx(int n_keys, struct NXKeypoint *nx_keys, const cv::KeyPoint *cv_keys)
{
        for (int i = 0; i < n_keys; ++i)
                nx_convert_key_cv2nx(nx_keys + i, cv_keys + i);
}

#endif
