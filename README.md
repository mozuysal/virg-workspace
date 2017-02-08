# virg-workspace
Bazel workspace with a small C library for vision and bootstrap scripts for third-party libs.

# Third-Party Libraries
- googletest: https://github.com/google/googletest/releases/tag/release-1.8.0
- gflags: https://github.com/gflags/gflags/releases/tag/v2.2.0
- glog: https://github.com/google/glog/releases/tag/v0.3.4
- Protocol Buffers 3: https://github.com/google/protobuf/releases/tag/v3.1.0
- Eigen 3: http://bitbucket.org/eigen/eigen/get/3.3.2.tar.gz
- SFMT: http://www.math.sci.hiroshima-u.ac.jp/~m-mat/MT/SFMT/SFMT-src-1.5.tar.gz
- OpenCV 3: https://github.com/opencv/opencv/releases/tag/3.2.0

# Nexus
A small C library containing
- allocation macros
- logging utility (nx_message)
- command-line option parser
- string and string array utilities
- bit operations
- basic math
- random numbers
- images
- image I/O
- image pyramids
- json and csv I/O
- GNUPlot interface
- R like data frames
- SVD
- homography estimation

## Dependencies not in Third-Party Libraries
- libjpeg
- libpng
- libcblas
- liblapack

# Installation

```bash
git clone git@github.com:mozuysal/virg-workspace.git
cd virg-workspace
scripts/install_third_party.sh
```
The installation downloads and locally installs all the third-party libraries, so you need to be connected and have a cup of coffee.

Each library is configured and installed in its own subdirectory and a BUILD file wraps the installed static/dynamic library and headers. This is a hack, but it seems to work well until Bazel builds are available for large libs such as OpenCV.

The BUILD files assume the local setup we use for the lab computers (Ubuntu 16.04 LTS), so you might need to tweak things a little bit.

See issues for a list of things that may or may not be fixed in the future.

