# virg-workspace
Bazel workspace with bootstrap scripts for third-party libs.

# Installation

```
git clone git@github.com:mozuysal/virg-workspace.git
cd virg-workspace
scripts/install_third_party.sh
```
The installation downloads and locally installs all the libraries, so you need to be connected and have a cup of coffee.

Each library is configured and installed in its own subdirectory and a BUILD file wraps the installed static/dynamic library and headers. This is a hack, but it seems to work well until Bazel builds are available for large libs such as OpenCV.

The BUILD files assume the local setup we use for the lab computers (Ubuntu 16.04 LTS), so you might need to tweak things a little bit.

See issues for a list of things that may or may not be fixed in the future.

# Third-Party Libraries
- googletest: https://github.com/google/googletest/releases/tag/release-1.8.0
- gflags: https://github.com/gflags/gflags/releases/tag/v2.2.0
- glog: https://github.com/google/glog/releases/tag/v0.3.4
- Protocol Buffers 3: https://github.com/google/protobuf/releases/tag/v3.1.0
- Eigen 3: http://bitbucket.org/eigen/eigen/get/3.3.2.tar.gz
- OpenCV 3: https://github.com/opencv/opencv/releases/tag/3.2.0
- VIRG C Library for util, images, pyramids, affine warps, a CSV parser, an R-like DataFrame class, ... (TODO)
