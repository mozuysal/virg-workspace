test_suite(
    name = "unit-tests",
    tests = [
          "lexer-test",
          "json-lexer-test",
          "data-frame-test",
    ],
)

cc_test(
    name = "lexer-test",
    srcs = ["tests_lexer.cc","tests_main.cc"],
    deps = [
        "//third_party/googletest:gtest",
        "//nexus/io:nexus-io"
    ],
    size = "small",
)

cc_test(
    name = "json-lexer-test",
    srcs = ["tests_json_lexer.cc","tests_main.cc"],
    deps = [
        "//third_party/googletest:gtest",
        "//nexus/io:nexus-io"
    ],
    size = "small",
)

cc_test(
    name = "data-frame-test",
    srcs = ["tests_data_frame.cc","tests_main.cc"],
    deps = [
        "//third_party/googletest:gtest",
        "//nexus/io:nexus-io"
    ],
    size = "small",
)
