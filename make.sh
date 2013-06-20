#!/bin/sh

kernel=/usr/src/kernels/2.6.32-358.el6.x86_64/
echo "using kernel from '$kernel'"

make -C $kernel modules M=$PWD
