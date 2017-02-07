cc_library(
    name="nexus-core",
    srcs=glob(["src/*.c"]),
    hdrs=glob(["include/virg/nexus/nx_*.h"]),
    includes=["include"],
    deps=["sfmt"],
    visibility=["//visibility:public"],
)

cc_library(
    name="sfmt",
    srcs=glob(["src/SFMT/*"],exclude=["src/SFMT/SFMT_LICENSE.txt"]),
    licenses=["notice"],
    copts=["-Isrc/SFMT"],
)