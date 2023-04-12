#!/bin/bash -e
dir="basic_electronic math"
for i in $dir;do
(cd $i && chmod +x build.sh && ./build.sh)
done
