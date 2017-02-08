test_suite(
    name = "workspace-tests",
    tests = [
        "gtest-test",
        "gflags-test",
        "glog-test",
        "protobuf-test",
        "eigen-test",
        "sfmt-test",
        "flann-test",
        "flann-c-test",
        "opencv3-test",
    ],
)

cc_test(
    name = "gtest-test",
    srcs = ["test_gtest.cc"],
    deps = [
        "//third_party/googletest:gtest"
    ],
    size = "small",
)

cc_test(
    name = "gflags-test",
    srcs = ["test_gflags.cc"],
    args = ["--test_value=42"],
    deps = ["//third_party/googletest:gtest",
        "//third_party/gflags:gflags"
    ],
    size = "small",
)

cc_test(
    name = "glog-test",
    srcs = ["test_glog.cc"],
    deps = ["//third_party/googletest:gtest",
      "//third_party/glog:glog"
    ],
    size = "small",
)

load("//third_party/protobuf:protobuf.bzl", "cc_proto_library")

cc_proto_library(
    name = "cc_protobuf_test_protos",
    srcs = glob(["*.proto"]),
    default_runtime = "//third_party/protobuf:protobuf",
    protoc = "//third_party/protobuf:protoc",
)

cc_test(
    name = "protobuf-test",
    srcs = ["test_protobuf.cc"],
    deps = [
        "//third_party/googletest:gtest",
        ":cc_protobuf_test_protos"
    ],
    size = "small",
)

cc_test(
    name = "eigen-test",
    srcs = ["test_eigen.cc"],
    deps = ["//third_party/googletest:gtest",
      "//third_party/eigen:eigen"
    ],
    size = "small",
)

cc_test(
    name = "sfmt-test",
    srcs = ["test_sfmt.cc"],
    deps = ["//third_party/googletest:gtest",
      "//third_party/sfmt:sfmt"
    ],
    size = "small",
)

cc_test(
    name = "opencv3-test",
    srcs = ["test_opencv3.cc"],
    deps = ["//third_party/googletest:gtest",
      "//third_party/opencv3:opencv3"
    ],
    size = "small",
)

cc_test(
    name = "flann-test",
    srcs = ["test_flann.cc"],
    deps = ["//third_party/googletest:gtest",
      "//third_party/flann:flann"
    ],
    size = "small",
)

cc_test(
    name = "flann-c-test",
    srcs = ["test_flann_c.cc"],
    deps = ["//third_party/googletest:gtest",
      "//third_party/flann:flann_c"
    ],
    size = "small",
)
