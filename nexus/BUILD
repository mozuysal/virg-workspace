cc_library(
    name="nexus",
    deps=["//nexus/core:nexus-core",
    "//nexus/io:nexus-io",
    "//nexus/image:nexus-image"],
    visibility=["//visibility:public"],
)

test_suite(
    name = "unit-tests",
    tests = [
       "//nexus/core/test:unit-tests",
       "//nexus/io/test:unit-tests",
       "//nexus/image/test:unit-tests",
       "//nexus/vision/test:unit-tests",
    ],
)
