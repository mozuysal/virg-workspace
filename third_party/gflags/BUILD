licenses(["notice"])
package(default_visibility = ["//visibility:public"])

cc_library(
    name = "gflags",
    srcs = ["usr/lib/libgflags.a"],
    hdrs = glob(["usr/include/gflags/**/*.h"]),
    includes = ["usr/include"],
    linkopts = ["-pthread"],
)

cc_library(
    name = "gflags_nothreads",
    srcs = ["usr/lib/libgflags_nothreads.a"],
    hdrs = glob(["usr/include/gflags/**/*.h"]),
    includes = ["usr/include"],
)