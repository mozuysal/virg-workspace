#include "gtest/gtest.h"

#include <google/protobuf/stubs/common.h>
#include "test/test_message.pb.h"

TEST(protobuf, expect_eq) {
        TestMessage m;
        m.set_id(42);
        EXPECT_EQ(42, m.id());
}

int main(int argc, char **argv) {
        ::testing::InitGoogleTest(&argc, argv);
        int r = RUN_ALL_TESTS();
        google::protobuf::ShutdownProtobufLibrary();
        return r;
}
