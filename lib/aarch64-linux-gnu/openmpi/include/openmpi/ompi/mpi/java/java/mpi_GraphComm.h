/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class mpi_GraphComm */

#ifndef _Included_mpi_GraphComm
#define _Included_mpi_GraphComm
#ifdef __cplusplus
extern "C" {
#endif
#undef mpi_GraphComm_TYPE_SHARED
#define mpi_GraphComm_TYPE_SHARED 0L
#undef mpi_GraphComm_SELF
#define mpi_GraphComm_SELF 1L
#undef mpi_GraphComm_WORLD
#define mpi_GraphComm_WORLD 2L
/*
 * Class:     mpi_GraphComm
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_mpi_GraphComm_init
  (JNIEnv *, jclass);

/*
 * Class:     mpi_GraphComm
 * Method:    getDims
 * Signature: (J)Lmpi/GraphParms;
 */
JNIEXPORT jobject JNICALL Java_mpi_GraphComm_getDims
  (JNIEnv *, jobject, jlong);

/*
 * Class:     mpi_GraphComm
 * Method:    getNeighbors
 * Signature: (JI)[I
 */
JNIEXPORT jintArray JNICALL Java_mpi_GraphComm_getNeighbors
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     mpi_GraphComm
 * Method:    getDistGraphNeighbors
 * Signature: (J)Lmpi/DistGraphNeighbors;
 */
JNIEXPORT jobject JNICALL Java_mpi_GraphComm_getDistGraphNeighbors
  (JNIEnv *, jobject, jlong);

/*
 * Class:     mpi_GraphComm
 * Method:    map
 * Signature: (J[I[I)I
 */
JNIEXPORT jint JNICALL Java_mpi_GraphComm_map
  (JNIEnv *, jobject, jlong, jintArray, jintArray);

#ifdef __cplusplus
}
#endif
#endif
