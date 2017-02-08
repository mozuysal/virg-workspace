#!/bin/bash

curl -# -J -L http://www.math.sci.hiroshima-u.ac.jp/~m-mat/MT/SFMT/SFMT-src-1.5.tar.gz | tar -xz
cd SFMT-src-1.5
sed 's/#define SFMT_PARAMS_H/#define SFMT_PARAMS_H\n#define SFMT_MEXP 19937/1' SFMT-params.h > SFMT-params.h.out
mv -f SFMT-params.h.out SFMT-params.h
