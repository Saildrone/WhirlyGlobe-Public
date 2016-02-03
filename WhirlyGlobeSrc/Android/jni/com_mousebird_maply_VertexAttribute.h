/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mousebird_maply_VertexAttribute */

#ifndef _Included_com_mousebird_maply_VertexAttribute
#define _Included_com_mousebird_maply_VertexAttribute
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    templateCopy
 * Signature: ()Lcom/mousebird/maply/VertexAttribute;
 */
JNIEXPORT jobject JNICALL Java_com_mousebird_maply_VertexAttribute_templateCopy
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    getDataType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mousebird_maply_VertexAttribute_getDataType
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    setDefaultColor
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_setDefaultColor
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    setDefaultVector2f
 * Signature: (Lcom/mousebird/maply/Point2f;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_setDefaultVector2f
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    setDefaultVector3f
 * Signature: (Lcom/mousebird/maply/Point3f;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_setDefaultVector3f
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    setDefaultFloat
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_setDefaultFloat
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    addColor
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_addColor
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    addVector2f
 * Signature: (Lcom/mousebird/maply/Point2f;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_addVector2f
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    addVector3f
 * Signature: (Lcom/mousebird/maply/Point3f;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_addVector3f
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    addVector4f
 * Signature: (Lcom/mousebird/maply/Point4f;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_addVector4f
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    addFloat
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_addFloat
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    addInt
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_addInt
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    reserve
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_reserve
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    numElements
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mousebird_maply_VertexAttribute_numElements
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    clear
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_clear
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    addressForElement
 * Signature: (I)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_mousebird_maply_VertexAttribute_addressForElement
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    glEntryComponents
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mousebird_maply_VertexAttribute_glEntryComponents
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    glType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mousebird_maply_VertexAttribute_glType
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    glNormalize
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_mousebird_maply_VertexAttribute_glNormalize
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    glSetDefault
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_glSetDefault
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    setDataType
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_setDataType
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    setName
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_setName
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    getName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_mousebird_maply_VertexAttribute_getName
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_nativeInit
  (JNIEnv *, jclass);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    initialise
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_initialise__ILjava_lang_String_2
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    initialise
 * Signature: (Lcom/mousebird/maply/VertexAttribute;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_initialise__Lcom_mousebird_maply_VertexAttribute_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_VertexAttribute
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VertexAttribute_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
