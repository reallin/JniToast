#include<stdio.h>
#include<jni.h>
jstring Java_com_lxj_toc_MainActivity_helloWorldC(JNIEnv* env,jobject obj){
	//(*env)�൱��JNINItiveface
	//return *(*env).NewStringUTF(env,"hello");
	return (*env)->NewStringUTF(env,"hello");
}
