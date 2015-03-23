ifeq ($(TARGET_DEVICE),smdkv210)
LOCAL_PATH:= $(call my-dir)
###############################################################################
include $(CLEAR_VARS)
LOCAL_MODULE_TAGS := eng
LOCAL_MODULE := calibrate
LOCAL_SRC_FILES := $(LOCAL_MODULE)
LOCAL_MODULE_CLASS := EXECUTABLES
include $(BUILD_PREBUILT)
###############################################################################
include $(CLEAR_VARS)
LOCAL_MODULE_TAGS := eng
LOCAL_MODULE := calibrated
LOCAL_SRC_FILES := $(LOCAL_MODULE)
LOCAL_MODULE_CLASS := EXECUTABLES
include $(BUILD_PREBUILT)
###############################################################################
endif

