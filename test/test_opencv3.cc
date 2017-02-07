#include "gtest/gtest.h"

#include "opencv2/core.hpp"

using cv::Mat;
using cv::Mat_;

TEST(opencv3, dot_product) {
        Mat v1 = (Mat_<double>(3,1) << 1, 2, 3);
        Mat v2 = (Mat_<double>(3,1) << 1, 1, 1);
        EXPECT_EQ(6, v1.dot(v2));
}

int main(int argc, char **argv) {
        ::testing::InitGoogleTest(&argc, argv);
        int r = RUN_ALL_TESTS();
        return r;
}
