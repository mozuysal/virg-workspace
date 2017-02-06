#include "gtest/gtest.h"

#include <Eigen/Dense>

using Eigen::Vector3d;

TEST(eigen, vector3_dot) {
        Vector3d v1(1, 1, 1);
        Vector3d v2(1, 2, 3);
        EXPECT_EQ(6, v1.dot(v2));
}

int main(int argc, char **argv) {
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
