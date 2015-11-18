#include<stdio.h>
#include<jni.h>
jstring Java_com_lxj_toc_MainActivity_helloWorldC(JNIEnv* env,jobject obj){
	//(*env)Ïàµ±ÓÚJNINItiveface
	//return *(*env).NewStringUTF(env,"hello");
	return (*env)->NewStringUTF(env,"hello");
}
