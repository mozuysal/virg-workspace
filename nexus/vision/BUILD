cc_library(
    name="nexus-vision",
    srcs=["src/nx_vector_gen.inc"] + glob(["src/*.c"]),
    hdrs=glob(["include/virg/nexus/nx_*.h"]),
    includes=["include"],
    deps=["fast", "//nexus/core:nexus-core","//nexus/image:nexus-image"],
    copts=["-Isrc"],
    linkopts=["-lcblas -llapack"],
    visibility=["//visibility:public"],
)

cc_library(
    name="fast",
    srcs=["include/virg/nexus/nx_keypoint.h"] + glob(["src/fast/*.c"],exclude=["src/fast/LICENSE_FAST"]),
    includes=["include"],
    deps=["//nexus/core:nexus-core"],
    licenses=["notice"],
    copts=["-Isrc/fast"],
)
