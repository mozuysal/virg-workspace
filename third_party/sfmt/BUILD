licenses(["notice"])
package(default_visibility = ["//visibility:public"])

cc_library(
    name="sfmt",
    srcs=["SFMT-src-1.5/SFMT.c","SFMT-src-1.5/SFMT-params.h","SFMT-src-1.5/SFMT-common.h","SFMT-src-1.5/SFMT-sse2.h","SFMT-src-1.5/SFMT-params19937.h"],
    hdrs=["SFMT-src-1.5/SFMT.h"],
    includes=["SFMT-src-1.5"],
    copts=["-std=c99", "-msse2", "-DHAVE_SSE2", "-Wmissing-prototypes", "-Wall", "-O3", "-finline-functions", "-fomit-frame-pointer", "-DNDEBUG", "-fno-strict-aliasing"],
)