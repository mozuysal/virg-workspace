#!/bin/bash

for module in googletest gflags glog protobuf eigen; \
    do \
        echo "installing ${module}" && cd third_party/${module} && ./install_${module}.sh && cd ../..
done
bazel clean --expunge
bazel test //test:workspace-tests
