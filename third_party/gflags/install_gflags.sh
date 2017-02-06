#!/bin/bash

curl -# -J -L https://github.com/gflags/gflags/archive/v2.2.0.tar.gz | tar -xz
cd gflags-2.2.0
mkdir build
cd build/
cmake .. -DGFLAGS_NAMESPACE=google -DCMAKE_INSTALL_PREFIX=../../usr
make && make install
