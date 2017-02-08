#include "gtest/gtest.h"

#include "SFMT.h"

TEST(sfmt, genrand_uint32) {
        sfmt_t sfmt;
        sfmt_init_gen_rand(&sfmt, 1234);
        EXPECT_EQ(3440181298, sfmt_genrand_uint32(&sfmt));
}

int main(int argc, char **argv) {
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
