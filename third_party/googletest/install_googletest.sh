#!/bin/bash

curl -# -J -L https://github.com/google/googletest/archive/release-1.8.0.tar.gz | tar -xz
cd googletest-release-1.8.0/
mkdir build
cd build/
cmake .. -DBUILD_GTEST=ON -DBUILD_GMOCK=ON -DBUILD_SHARED_LIBS=OFF -DCMAKE_INSTALL_PREFIX=../../usr
make && make install
