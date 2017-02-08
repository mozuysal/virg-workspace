test_suite(
    name = "unit-tests",
    tests = [
        "bit-ops-test",
        "mem-block-test",
        "string-test",
        "string-array-test",
        "options-test",
    ],
)

cc_test(
    name = "bit-ops-test",
    srcs = ["tests_bit_ops.cc","tests_main.cc"],
    deps = [
        "//third_party/googletest:gtest",
        "//nexus/core:nexus-core"
    ],
    size = "small",
)

cc_test(
    name = "mem-block-test",
    srcs = ["tests_mem_block.cc","tests_main.cc"],
    deps = [
        "//third_party/googletest:gtest",
        "//nexus/core:nexus-core"
    ],
    size = "small",
)

cc_test(
    name = "string-test",
    srcs = ["tests_string.cc","tests_main.cc"],
    deps = [
        "//third_party/googletest:gtest",
        "//nexus/core:nexus-core"
    ],
    size = "small",
)

cc_test(
    name = "string-array-test",
    srcs = ["tests_string_array.cc","tests_main.cc"],
    deps = [
        "//third_party/googletest:gtest",
        "//nexus/core:nexus-core"
    ],
    size = "small",
)

cc_test(
    name = "options-test",
    srcs = ["tests_options.cc","tests_main.cc"],
    deps = [
        "//third_party/googletest:gtest",
        "//nexus/core:nexus-core"
    ],
    size = "small",
)
