TARGET_thumb_release_CFLAGS := $(filter-out -ffunction-sections,$(TARGET_thumb_release_CFLAGS))
TARGET_thumb_release_CFLAGS := $(filter-out -fomit-frame-pointer,$(TARGET_thumb_release_CFLAGS))
TARGET_arm_release_CFLAGS := $(filter-out -ffunction-sections,$(TARGET_arm_release_CFLAGS))
TARGET_arm_release_CFLAGS := $(filter-out -fomit-frame-pointer,$(TARGET_arm_release_CFLAGS))
TARGET_CFLAGS := $(filter-out -ffunction-sections,$(TARGET_CFLAGS))

# include libandprof.a in the build
include $(CLEAR_VARS)
LOCAL_MODULE := andprof
# was LOCAL_SRC_FILES := profiler/$(TARGET_ARCH_ABI)/libandprof.a
LOCAL_SRC_FILES := profiler/libandprof.a
include $(PREBUILT_STATIC_LIBRARY)
