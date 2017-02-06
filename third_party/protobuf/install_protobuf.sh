#!/bin/bash

curl -# -J -L https://github.com/google/protobuf/archive/v3.1.0.tar.gz | tar -xz
ln -s protobuf-3.1.0/protobuf.bzl
