cc_library(
    name="nexus-image",
    srcs=glob(["src/*.c"]),
    hdrs=glob(["include/virg/nexus/nx_*.h"]),
    includes=["include"],
    deps=["//nexus/core:nexus-core","//nexus/io:nexus-io"],
    linkopts=["-ljpeg -lpng"],
    visibility=["//visibility:public"],
)
