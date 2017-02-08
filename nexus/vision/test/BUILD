test_suite(
    name = "unit-tests",
    tests = [
          "image-pyr-test",
          "fast-detector-test",
          "svd-test",
          "homography-test",
          "opencv-util-test",
    ],
)

cc_test(
    name = "image-pyr-test",
    srcs = ["tests_image_pyr.cc","tests_main.cc"],
    data = ["data/lena.ppm"],
    deps = [
        "//third_party/googletest:gtest",
        "//nexus/vision:nexus-vision"
    ],
    size = "small",
)

cc_test(
    name = "fast-detector-test",
    srcs = ["tests_fast_detector.cc","tests_main.cc"],
    data = ["data/lena.ppm"],
    deps = [
        "//third_party/googletest:gtest",
        "//nexus/vision:nexus-vision"
    ],
    size = "small",
)

cc_test(
    name = "svd-test",
    srcs = ["tests_svd.cc","tests_main.cc"],
    deps = [
        "//third_party/googletest:gtest",
        "//nexus/vision:nexus-vision"
    ],
    size = "small",
)

cc_test(
    name = "homography-test",
    srcs = ["tests_homography.cc","tests_main.cc"],
    deps = [
        "//third_party/googletest:gtest",
        "//nexus/vision:nexus-vision"
    ],
    size = "small",
)

cc_test(
    name = "opencv-util-test",
    srcs = ["tests_opencv_util.cc","tests_main.cc"],
    deps = [
        "//third_party/googletest:gtest",
        "//nexus/vision:nexus-vision",
        "//third_party/opencv3:opencv3"
    ],
    size = "small",
)

