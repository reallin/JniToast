LOCAL_PATH := $(call my-dir)

   include $(CLEAR_VARS)
#��Ӧ�Ĵ���ɵĺ���������
   LOCAL_MODULE    := hello
   #��Ӧ��c�����ļ�
   LOCAL_SRC_FILES := hello.c

   include $(BUILD_SHARED_LIBRARY)
