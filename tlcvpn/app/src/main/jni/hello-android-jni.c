#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_tlc_n2n_1app_MainActivity_getMsgFromJni(JNIEnv *env, jobject instance) {

    // TODO

    return (*env)->NewStringUTF(env, "Hello From Jni");
}