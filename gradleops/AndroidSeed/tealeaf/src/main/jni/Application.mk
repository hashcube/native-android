APP_ABI := armeabi-v7a #armeabi-v7a arm64-v8a
APP_PLATFORM := android-21 

APP_STL := c++_static
APP_CPPFLAGS += -std=c++14 # -fexceptions # -static-libstdc++
CMAKE_CXX_FLAGS +=  -frtti #for debug 
ifeq (${RELEASE}, 1)

else
CMAKE_CXX_FLAGS +=  -mapcs-frame 
endif

#LOCAL_C_INCLUDES += ${ANDROID_NDK}/sources/cxx-stl/llvm-libc++/include
APP_ALLOW_MISSING_DEPS=true