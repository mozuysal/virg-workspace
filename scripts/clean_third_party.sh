#!/bin/bash

find . -iname "*~" | xargs rm -f --
for module in googletest gflags glog protobuf eigen sfmt flann opencv3; \
    do \
        echo "cleaning ${module}" && cd third_party/${module} && ./clean_${module}.sh && cd ../..
done
bazel clean --expunge
