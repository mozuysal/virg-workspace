licenses(["notice"])
package(default_visibility = ["//visibility:public"])

cc_library(
    name = "glog",
    srcs = ["usr/lib/libglog.a"],
    hdrs = glob(["usr/include/glog/**/*.h"]),
    includes = ["usr/include"],
    deps = ["//third_party/gflags:gflags"],
    linkopts = ["-pthread"],
)