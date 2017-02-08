#include "gtest/gtest.h"

#include "flann/flann.h"

TEST(flann_c, linear_index) {
        int nn = 2;

        float data[4] = { 0.0f, 0.0f,
                          1.0, 0.5};
        float qdata[2] = { 1.0f, 0.0f };
        int indices[2];
        float dists[2];
        struct FLANNParameters p = DEFAULT_FLANN_PARAMETERS;
        p.algorithm = FLANN_INDEX_LINEAR;
        float speedup = 1.0f;
        flann_index_t index = flann_build_index_float(&data[0], 2, 2, &speedup, &p);
        flann_find_nearest_neighbors_index(index, &qdata[0], 1,
                                           &indices[0], &dists[0], nn, &p);

        EXPECT_EQ(1, indices[0]);
        EXPECT_FLOAT_EQ(0.25f, dists[0]);
        EXPECT_EQ(0, indices[1]);
        EXPECT_FLOAT_EQ(1.0f, dists[1]);

        flann_free_index(index, &p);
}

int main(int argc, char **argv) {
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
