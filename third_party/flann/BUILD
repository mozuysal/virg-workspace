licenses(["notice"])
package(default_visibility = ["//visibility:public"])

cc_library(
    name = "flann",
    srcs = ["usr/lib/libflann_cpp.so.1.9"],
    hdrs = glob(["usr/include/flann/**/*.h"]) + ["usr/include/flann/flann.hpp"],
    includes = ["usr/include"],
)

cc_library(
    name = "flann_static",
    srcs = ["usr/lib/libflann_cpp_s.a"],
    hdrs = glob(["usr/include/flann/**/*.h"]) + ["usr/include/flann/flann.hpp"],
    includes = ["usr/include"],
)

cc_library(
    name = "flann_c",
    srcs = ["usr/lib/libflann.so.1.9"],
    hdrs = glob(["usr/include/flann/**/*.h"]) + ["usr/include/flann/flann.hpp"],
    includes = ["usr/include"],
)

cc_library(
    name = "flann_c_static",
    srcs = ["usr/lib/libflann_s.a"],
    hdrs = glob(["usr/include/flann/**/*.h"]) + ["usr/include/flann/flann.hpp"],
    includes = ["usr/include"],
)

