#!/bin/bash

curl -# -J -L https://github.com/opencv/opencv/archive/3.2.0.tar.gz | tar -xz
curl -# -J -L https://github.com/opencv/opencv_contrib/archive/3.2.0.tar.gz | tar -xz

cd opencv-3.2.0
mkdir build
cd build/
cmake -L -DOPENCV_EXTRA_MODULES_PATH=../../opencv_contrib-3.2.0/modules -DWITH_MATLAB=OFF -DBUILD_PERF_TESTS=OFF -DBUILD_TESTS=OFF -DWITH_CUDA=OFF -DWITH_OPENCL=OFF -DWITH_QT=ON -DOPENCV_ENABLE_NONFREE=ON -DENABLE_SSE41=ON -DENABLE_SSE42=ON -DENABLE_AVX=ON -DENABLE_POPCNT=ON -DENABLE_AVX2=ON .. -DCMAKE_INSTALL_PREFIX=../../usr
make -j 2 && make install
