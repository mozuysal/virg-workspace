#include "gtest/gtest.h"

#include "flann/flann.hpp"

using flann::Matrix;
using flann::Index;
using flann::LinearIndexParams;
using flann::L2;
using flann::SearchParams;

TEST(flann, linear_index) {
        int nn = 2;

        float data[4] = { 0.0f, 0.0f,
                          1.0, 0.5};
        Matrix<float> dataset(&data[0], 2, 2);
        Index<L2<float> > index(dataset, LinearIndexParams());
        index.buildIndex();

        float qdata[2] = { 1.0f, 0.0f };
        Matrix<float> query(&qdata[0], 1, 2);
        Matrix<int> indices(new int[query.rows*nn], query.rows, nn);
        Matrix<float> dists(new float[query.rows*nn], query.rows, nn);

        index.knnSearch(query, indices, dists, nn, SearchParams());

        EXPECT_EQ(1, indices.ptr()[0]);
        EXPECT_FLOAT_EQ(0.25f, dists.ptr()[0]);
        EXPECT_EQ(0, indices.ptr()[1]);
        EXPECT_FLOAT_EQ(1.0f, dists.ptr()[1]);

        delete [] indices.ptr();
        delete [] dists.ptr();
}

int main(int argc, char **argv) {
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
