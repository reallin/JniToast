LOCAL_PATH := $(call my-dir)

   include $(CLEAR_VARS)
#对应的打包成的函数库名字
   LOCAL_MODULE    := hello
   #对应的c代码文件
   LOCAL_SRC_FILES := hello.c

   include $(BUILD_SHARED_LIBRARY)
