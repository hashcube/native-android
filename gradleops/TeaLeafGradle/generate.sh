#This file is not used and hence not debugged in gradle project path but path was changed
#!/bin/sh

cd ../barista/
npm install
cd ../TeaLeaf/
../barista/bin/barista -e v8 -o app/src/main/jni/gen/ jni/core/templates/*.json

