//
// Created by 李维强 on 2020/4/19.
//

#include "com_lwq_ndk_basic_MyJNI.h"

extern "C" JNIEXPORT jstring JNICALL Java_com_lwq_ndk_1basic_MyJNI_sayHello
        (JNIEnv *env, jclass jobj){

    return env->NewStringUTF("HELLO ,这是来自Native层信息");
}