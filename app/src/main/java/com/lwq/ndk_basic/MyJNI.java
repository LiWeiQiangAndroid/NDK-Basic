package com.lwq.ndk_basic;

/**
 * Created by： liwq.
 * Created Time: 2020/4/18
 * Description：
 */
public class MyJNI {
    static {
        System.loadLibrary("native-lib");
    }

    public static native String sayHello();
}
