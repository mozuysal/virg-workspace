/**
 * @file tests_opencv_util.cc
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
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <ctime>

#include "gtest/gtest.h"

#include "virg/nexus/nx_message.h"
#include "virg/nexus/nx_image.h"
#include "virg/nexus/nx_opencv_util.h"

using namespace std;

namespace {

class NXUtilOpenCVTest : public ::testing::Test {
protected:
        NXUtilOpenCVTest() {
        }

        virtual void SetUp() {
        }

        virtual void TearDown() {
        }

        uchar test_color(int x, int y) {
                return (((x & 1) == 0) ? (y % 255) : ((height - y) % 255));
        }

        uchar test_color_rgba(int x, int y, int c) {
                return (((x & 1) == 0) ? (y % 252) : ((height - y) % 252)) + c;
        }

        int width = 321;
        int height = 483;
};

TEST_F(NXUtilOpenCVTest, nx2mat_gray_field_check) {
        struct NXImage *img = nx_image_new_gray(width, height);
        cv::Mat mat = nx_wrap_image_nx2mat(img);

        int mat_stride0 = mat.step[0];
        int mat_stride1 = mat.step[1];
        EXPECT_EQ(2,mat.dims);
        EXPECT_EQ(height,mat.rows);
        EXPECT_EQ(width,mat.cols);
        EXPECT_EQ(CV_8UC1,mat.type());
        EXPECT_EQ(1,mat.channels());
        EXPECT_EQ(img->data,mat.data);
        EXPECT_EQ(img->row_stride,mat_stride0);
        EXPECT_EQ(1,mat_stride1);

        nx_image_free(img);
}

TEST_F(NXUtilOpenCVTest, nx2mat_gray_pixel_read_test) {
        struct NXImage *img = nx_image_new_gray(width, height);

        for (int y = 0; y < height; ++y)
                for (int x = 0; x < width; ++x)
                        img->data[y*img->row_stride + x] = test_color(x,y);

        cv::Mat mat = nx_wrap_image_nx2mat(img);
        for (int y = 0; y < height; ++y)
                for (int x = 0; x < width; ++x)
                        EXPECT_EQ(test_color(x,y),mat.at<uchar>(y,x));

        nx_image_free(img);
}

TEST_F(NXUtilOpenCVTest, nx2mat_gray_pixel_write_test) {
        struct NXImage *img = nx_image_new_gray(width, height);

        cv::Mat mat = nx_wrap_image_nx2mat(img);
        for (int y = 0; y < height; ++y)
                for (int x = 0; x < width; ++x)
                        mat.at<uchar>(y,x) = test_color(x,y);

        for (int y = 0; y < height; ++y)
                for (int x = 0; x < width; ++x)
                        EXPECT_EQ(test_color(x,y),img->data[y*img->row_stride + x]);

        nx_image_free(img);
}

TEST_F(NXUtilOpenCVTest, nx2mat_rgba_field_check) {
        struct NXImage *img = nx_image_new_rgba(width, height);
        cv::Mat mat = nx_wrap_image_nx2mat(img);

        int mat_stride0 = mat.step[0];
        EXPECT_EQ(2,mat.dims);
        EXPECT_EQ(height,mat.rows);
        EXPECT_EQ(width,mat.cols);
        EXPECT_EQ(CV_8UC4,mat.type());
        EXPECT_EQ(4,mat.channels());
        EXPECT_EQ(img->data,mat.data);
        EXPECT_EQ(img->row_stride,mat_stride0);

        nx_image_free(img);
}

TEST_F(NXUtilOpenCVTest, nx2mat_rgba_pixel_read_test) {
        struct NXImage *img = nx_image_new_rgba(width, height);

        for (int y = 0; y < height; ++y)
                for (int x = 0; x < width; ++x)
                        for (int c = 0; c < 4; ++c)
                                img->data[y*img->row_stride + 4*x + c] = test_color_rgba(x,y,c);

        cv::Mat mat = nx_wrap_image_nx2mat(img);
        for (int y = 0; y < height; ++y)
                for (int x = 0; x < width; ++x)
                        for (int c = 0; c < 4; ++c)
                                EXPECT_EQ(test_color_rgba(x,y,c),mat.ptr<uchar>(y,x)[c]);

        nx_image_free(img);
}

TEST_F(NXUtilOpenCVTest, nx2mat_rgba_pixel_write_test) {
        struct NXImage *img = nx_image_new_rgba(width, height);

        cv::Mat mat = nx_wrap_image_nx2mat(img);
        for (int y = 0; y < height; ++y)
                for (int x = 0; x < width; ++x)
                        for (int c = 0; c < 4; ++c)
                                mat.ptr<uchar>(y,x)[c] = test_color_rgba(x,y,c);

        for (int y = 0; y < height; ++y)
                for (int x = 0; x < width; ++x)
                        for (int c = 0; c < 4; ++c)
                                EXPECT_EQ(test_color_rgba(x,y,c),img->data[y*img->row_stride + 4*x + c]);

        nx_image_free(img);
}

}
