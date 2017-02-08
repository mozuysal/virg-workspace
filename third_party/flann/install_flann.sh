#!/bin/bash

curl -# -J -L https://github.com/mariusmuja/flann/archive/1.9.1.tar.gz | tar -xz

cd flann-1.9.1/
mkdir build
cd build/
cmake .. -L -DBUILD_MATLAB_BINDINGS=OFF -DBUILD_EXAMPLES=OFF -DBUILD_TESTS=OFF -DBUILD_CUDA_LIB=OFF -DUSE_OPENMP=OFF -DBUILD_PYTHON_BINDINGS=OFF -DCMAKE_INSTALL_PREFIX=../../usr
make -j 2 && make install
