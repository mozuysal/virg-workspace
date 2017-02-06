licenses(["notice"])
package(default_visibility = ["//visibility:public"])

cc_library(
    name = "gtest",
    srcs = ["usr/lib/libgtest.a"],
    hdrs = glob(["usr/include/gtest/**/*.h"]),
    includes = ["usr/include"],
    linkopts = ["-pthread"],
)