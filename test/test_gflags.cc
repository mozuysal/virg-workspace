#include "gtest/gtest.h"

#include "gflags/gflags.h"

DEFINE_int32(test_value, 0, "A command line integer to test");

TEST(gflags, expect_eq) {
        EXPECT_EQ(42, FLAGS_test_value);
}

int main(int argc, char **argv) {
        ::testing::InitGoogleTest(&argc, argv);
        google::ParseCommandLineFlags(&argc, &argv, true);
        int r = RUN_ALL_TESTS();
        google::ShutDownCommandLineFlags();
        return r;
}
