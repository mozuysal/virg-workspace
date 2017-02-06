#!/bin/bash

curl -# -J -L https://github.com/google/glog/archive/v0.3.4.tar.gz | tar -xz
cd glog-0.3.4/
CPPFLAGS="-I../../gflags/usr/include -I../../googletest/usr/include" LDFLAGS="-L../../gflags/usr/lib -L../../googletest/usr/lib" ./configure --prefix=${PWD}/../usr --enable-shared=no
make && make install
