/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_cryptomator_jni_MacKeychainAccess */

#ifndef _Included_org_cryptomator_jni_MacKeychainAccess
#define _Included_org_cryptomator_jni_MacKeychainAccess
/*
 * Class:     org_cryptomator_jni_MacKeychainAccess
 * Method:    storePassword0
 * Signature: ([B[B)I
 */
JNIEXPORT jint JNICALL Java_org_cryptomator_jni_MacKeychainAccess_storePassword0(JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     org_cryptomator_jni_MacKeychainAccess
 * Method:    loadPassword0
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_cryptomator_jni_MacKeychainAccess_loadPassword0(JNIEnv *, jobject, jbyteArray);

/*
 * Class:     org_cryptomator_jni_MacKeychainAccess
 * Method:    deletePassword0
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_org_cryptomator_jni_MacKeychainAccess_deletePassword0(JNIEnv *, jobject, jbyteArray);

#endif
