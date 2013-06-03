
#include <stdio.h>
#include <windows.h>

#include "DBXCNativeInterface.h"

/**
 * Eh yeah we'll have to build this in MSVS because Cygwin's GCC doesn't do 64-bit...'
 */

JNIEXPORT void JNICALL
Java_com_dividebyxero_dbxcapture_jni_DBXCNativeInterface_debugDumpBuffer
(JNIEnv * env, jclass clazz) {

}

JNIEXPORT jstring JNICALL
Java_com_dividebyxero_dbxcapture_jni_DBXCNativeInterface_waitForScreenshotActionAndReturnPath
(JNIEnv * env, jclass clazz, jstring _CONTENTDIRECTORY, jint _TRIPCODE) {
    //TODO: MAKE SURE THIS IS IN QUOTES WHEN IT'S RETURNED
}
