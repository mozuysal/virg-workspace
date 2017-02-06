# virg-workspace
Bazel workspace with bootstrap scripts for third-party libs

Each library is configured and installed in its own subdirectory and a BUILD file wraps the installed static library and headers. This is a hack, but it seems to work well until Bazel builds are available for large libs such as OpenCV.

# Third-Party Libraries
- googletest: https://github.com/google/googletest/releases/tag/release-1.8.0
- gflags: https://github.com/gflags/gflags/releases/tag/v2.2.0
- glog: https://github.com/google/glog/releases/tag/v0.3.4
- Protocol Buffers 3: https://github.com/google/protobuf/releases/tag/v3.1.0
- Eigen 3: http://bitbucket.org/eigen/eigen/get/3.3.2.tar.gz
- OpenCV (TODO)
- Own C Library for C util, Images, Pyramids, Affine Warps, CSV Parser, DataFrame class, ... (TODO)
