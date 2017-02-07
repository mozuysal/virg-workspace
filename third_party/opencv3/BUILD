licenses(["notice"])
package(default_visibility = ["//visibility:public"])

cc_library(
    name = "opencv3",
    srcs = glob(["usr/lib/lib*.so.3.2"]),
    hdrs = glob(["usr/include/**/*.h*"]),
    includes = ["usr/include"],
    linkopts = ["-L/usr/lib/x86_64-linux-gnu -lQt5Test -lQt5Concurrent -lpng -lz -ltiff -ljasper -ljpeg -lImath -lIlmImf -lIex -lHalf -lIlmThread -ldc1394 -lavcodec-ffmpeg -lavformat-ffmpeg -lavutil-ffmpeg -lswscale-ffmpeg -lgphoto2 -lgphoto2_port -lexif -lQt5Core -lQt5Gui -lQt5Widgets -ldl -lm -lpthread -lrt"],
)
