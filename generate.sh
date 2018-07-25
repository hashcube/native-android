#!/bin/sh

cd ../barista/
npm install
cd ../TeaLeaf/
../barista/bin/barista -e v8 -o AndroidSeed/tealeaf/src/main/jni/gen/ AndroidSeed/tealeaf/src/main/jni/core/templates/*.json

