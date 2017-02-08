test_suite(
    name = "unit-tests",
    tests = [
          "image-test",
    ],
)

cc_test(
    name = "image-test",
    srcs = ["tests_image.cc","tests_main.cc"],
    deps = [
        "//third_party/googletest:gtest",
        "//nexus/image:nexus-image"
    ],
    size = "small",
)

