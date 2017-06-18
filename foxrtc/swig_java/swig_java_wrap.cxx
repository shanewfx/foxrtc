/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.6
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA
#define SWIG_DIRECTORS


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif 
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else

/* -----------------------------------------------------------------------------
 * director.swg
 *
 * This file contains support for director classes that proxy
 * method calls from C++ to Java extensions.
 * ----------------------------------------------------------------------------- */

#ifdef __cplusplus

#if defined(DEBUG_DIRECTOR_OWNED)
#include <iostream>
#endif

namespace Swig {
  /* Java object wrapper */
  class JObjectWrapper {
  public:
    JObjectWrapper() : jthis_(NULL), weak_global_(true) {
    }

    ~JObjectWrapper() {
      jthis_ = NULL;
      weak_global_ = true;
    }

    bool set(JNIEnv *jenv, jobject jobj, bool mem_own, bool weak_global) {
      if (!jthis_) {
        weak_global_ = weak_global;
        if (jobj)
          jthis_ = ((weak_global_ || !mem_own) ? jenv->NewWeakGlobalRef(jobj) : jenv->NewGlobalRef(jobj));
#if defined(DEBUG_DIRECTOR_OWNED)
        std::cout << "JObjectWrapper::set(" << jobj << ", " << (weak_global ? "weak_global" : "global_ref") << ") -> " << jthis_ << std::endl;
#endif
        return true;
      } else {
#if defined(DEBUG_DIRECTOR_OWNED)
        std::cout << "JObjectWrapper::set(" << jobj << ", " << (weak_global ? "weak_global" : "global_ref") << ") -> already set" << std::endl;
#endif
        return false;
      }
    }

    jobject get(JNIEnv *jenv) const {
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "JObjectWrapper::get(";
      if (jthis_)
        std::cout << jthis_;
      else
        std::cout << "null";
      std::cout << ") -> return new local ref" << std::endl;
#endif
      return (jthis_ ? jenv->NewLocalRef(jthis_) : jthis_);
    }

    void release(JNIEnv *jenv) {
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "JObjectWrapper::release(" << jthis_ << "): " << (weak_global_ ? "weak global ref" : "global ref") << std::endl;
#endif
      if (jthis_) {
        if (weak_global_) {
          if (jenv->IsSameObject(jthis_, NULL) == JNI_FALSE)
            jenv->DeleteWeakGlobalRef((jweak)jthis_);
        } else
          jenv->DeleteGlobalRef(jthis_);
      }

      jthis_ = NULL;
      weak_global_ = true;
    }

    jobject peek() {
      return jthis_;
    }

    /* Java proxy releases ownership of C++ object, C++ object is now
       responsible for destruction (creates NewGlobalRef to pin Java
       proxy) */
    void java_change_ownership(JNIEnv *jenv, jobject jself, bool take_or_release) {
      if (take_or_release) {  /* Java takes ownership of C++ object's lifetime. */
        if (!weak_global_) {
          jenv->DeleteGlobalRef(jthis_);
          jthis_ = jenv->NewWeakGlobalRef(jself);
          weak_global_ = true;
        }
      } else { /* Java releases ownership of C++ object's lifetime */
        if (weak_global_) {
          jenv->DeleteWeakGlobalRef((jweak)jthis_);
          jthis_ = jenv->NewGlobalRef(jself);
          weak_global_ = false;
        }
      }
    }

  private:
    /* pointer to Java object */
    jobject jthis_;
    /* Local or global reference flag */
    bool weak_global_;
  };

  /* director base class */
  class Director {
    /* pointer to Java virtual machine */
    JavaVM *swig_jvm_;

  protected:
#if defined (_MSC_VER) && (_MSC_VER<1300)
    class JNIEnvWrapper;
    friend class JNIEnvWrapper;
#endif
    /* Utility class for managing the JNI environment */
    class JNIEnvWrapper {
      const Director *director_;
      JNIEnv *jenv_;
      int env_status;
    public:
      JNIEnvWrapper(const Director *director) : director_(director), jenv_(0), env_status(0) {
#if defined(__ANDROID__)
        JNIEnv **jenv = &jenv_;
#else
        void **jenv = (void **)&jenv_;
#endif
        env_status = director_->swig_jvm_->GetEnv((void **)&jenv_, JNI_VERSION_1_2);
#if defined(SWIG_JAVA_ATTACH_CURRENT_THREAD_AS_DAEMON)
        // Attach a daemon thread to the JVM. Useful when the JVM should not wait for 
        // the thread to exit upon shutdown. Only for jdk-1.4 and later.
        director_->swig_jvm_->AttachCurrentThreadAsDaemon(jenv, NULL);
#else
        director_->swig_jvm_->AttachCurrentThread(jenv, NULL);
#endif
      }
      ~JNIEnvWrapper() {
#if !defined(SWIG_JAVA_NO_DETACH_CURRENT_THREAD)
        // Some JVMs, eg jdk-1.4.2 and lower on Solaris have a bug and crash with the DetachCurrentThread call.
        // However, without this call, the JVM hangs on exit when the thread was not created by the JVM and creates a memory leak.
        if (env_status == JNI_EDETACHED)
          director_->swig_jvm_->DetachCurrentThread();
#endif
      }
      JNIEnv *getJNIEnv() const {
        return jenv_;
      }
    };

    /* Java object wrapper */
    JObjectWrapper swig_self_;

    /* Disconnect director from Java object */
    void swig_disconnect_director_self(const char *disconn_method) {
      JNIEnvWrapper jnienv(this) ;
      JNIEnv *jenv = jnienv.getJNIEnv() ;
      jobject jobj = swig_self_.peek();
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "Swig::Director::disconnect_director_self(" << jobj << ")" << std::endl;
#endif
      if (jobj && jenv->IsSameObject(jobj, NULL) == JNI_FALSE) {
        jmethodID disconn_meth = jenv->GetMethodID(jenv->GetObjectClass(jobj), disconn_method, "()V");
        if (disconn_meth) {
#if defined(DEBUG_DIRECTOR_OWNED)
          std::cout << "Swig::Director::disconnect_director_self upcall to " << disconn_method << std::endl;
#endif
          jenv->CallVoidMethod(jobj, disconn_meth);
        }
      }
    }

  public:
    Director(JNIEnv *jenv) : swig_jvm_((JavaVM *) NULL), swig_self_() {
      /* Acquire the Java VM pointer */
      jenv->GetJavaVM(&swig_jvm_);
    }

    virtual ~Director() {
      JNIEnvWrapper jnienv(this) ;
      JNIEnv *jenv = jnienv.getJNIEnv() ;
      swig_self_.release(jenv);
    }

    bool swig_set_self(JNIEnv *jenv, jobject jself, bool mem_own, bool weak_global) {
      return swig_self_.set(jenv, jself, mem_own, weak_global);
    }

    jobject swig_get_self(JNIEnv *jenv) const {
      return swig_self_.get(jenv);
    }

    // Change C++ object's ownership, relative to Java
    void swig_java_change_ownership(JNIEnv *jenv, jobject jself, bool take_or_release) {
      swig_self_.java_change_ownership(jenv, jself, take_or_release);
    }
  };
}

#endif /* __cplusplus */



#include "../interface/foxrtc.h"


#include <stdexcept>


#include <vector>
#include <stdexcept>


#include <string>



/* ---------------------------------------------------
 * C++ director class methods
 * --------------------------------------------------- */

#include "swig_java_wrap.h"


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_new_1FoxrtcTransport(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  FoxrtcTransport *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (FoxrtcTransport *)new FoxrtcTransport();
  *(FoxrtcTransport **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_delete_1FoxrtcTransport(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  FoxrtcTransport *arg1 = (FoxrtcTransport *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(FoxrtcTransport **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_FoxrtcTransport_1SendRtp(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jint jarg3) {
  jint jresult = 0 ;
  FoxrtcTransport *arg1 = (FoxrtcTransport *) 0 ;
  char *arg2 = (char *) 0 ;
  int arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FoxrtcTransport **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  arg3 = (int)jarg3; 
  result = (int)(arg1)->SendRtp((char const *)arg2,arg3);
  jresult = (jint)result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_FoxrtcTransport_1SendRtcp(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jint jarg3) {
  jint jresult = 0 ;
  FoxrtcTransport *arg1 = (FoxrtcTransport *) 0 ;
  char *arg2 = (char *) 0 ;
  int arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FoxrtcTransport **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  arg3 = (int)jarg3; 
  result = (int)(arg1)->SendRtcp((char const *)arg2,arg3);
  jresult = (jint)result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_delete_1Foxrtc(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Foxrtc *arg1 = (Foxrtc *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Foxrtc **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_Foxrtc_1Instance(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Foxrtc *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Foxrtc *) &Foxrtc::Instance();
  *(Foxrtc **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_Foxrtc_1Init(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jint jresult = 0 ;
  Foxrtc *arg1 = (Foxrtc *) 0 ;
  FoxrtcTransport *arg2 = (FoxrtcTransport *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(Foxrtc **)&jarg1; 
  arg2 = *(FoxrtcTransport **)&jarg2; 
  result = (int)(arg1)->Init(arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_Foxrtc_1Uninit(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Foxrtc *arg1 = (Foxrtc *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foxrtc **)&jarg1; 
  result = (int)(arg1)->Uninit();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_Foxrtc_1GetDeviceInfo(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Foxrtc *arg1 = (Foxrtc *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foxrtc **)&jarg1; 
  result = (int)(arg1)->GetDeviceInfo();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_Foxrtc_1OpenCamera(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jint jresult = 0 ;
  Foxrtc *arg1 = (Foxrtc *) 0 ;
  int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foxrtc **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (int)(arg1)->OpenCamera(arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_Foxrtc_1CloseCamera(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Foxrtc *arg1 = (Foxrtc *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foxrtc **)&jarg1; 
  result = (int)(arg1)->CloseCamera();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_Foxrtc_1CreateLocalAudioStream(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  jint jresult = 0 ;
  Foxrtc *arg1 = (Foxrtc *) 0 ;
  unsigned int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foxrtc **)&jarg1; 
  arg2 = (unsigned int)jarg2; 
  result = (int)(arg1)->CreateLocalAudioStream(arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_Foxrtc_1DeleteLocalAudioStream(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Foxrtc *arg1 = (Foxrtc *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foxrtc **)&jarg1; 
  result = (int)(arg1)->DeleteLocalAudioStream();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_Foxrtc_1CreateRemoteAudioStream(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  jint jresult = 0 ;
  Foxrtc *arg1 = (Foxrtc *) 0 ;
  unsigned int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foxrtc **)&jarg1; 
  arg2 = (unsigned int)jarg2; 
  result = (int)(arg1)->CreateRemoteAudioStream(arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_Foxrtc_1DeleteRemoteAudioStream(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Foxrtc *arg1 = (Foxrtc *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foxrtc **)&jarg1; 
  result = (int)(arg1)->DeleteRemoteAudioStream();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_Foxrtc_1CreateLocalVideoStream(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jobject jarg3) {
  jint jresult = 0 ;
  Foxrtc *arg1 = (Foxrtc *) 0 ;
  int arg2 ;
  void *arg3 = (void *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foxrtc **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = *(void **)&jarg3; 
  result = (int)(arg1)->CreateLocalVideoStream(arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_Foxrtc_1DeleteLocalVideoStream(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Foxrtc *arg1 = (Foxrtc *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foxrtc **)&jarg1; 
  result = (int)(arg1)->DeleteLocalVideoStream();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_Foxrtc_1CreateRemoteVideoStream(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jobject jarg3) {
  jint jresult = 0 ;
  Foxrtc *arg1 = (Foxrtc *) 0 ;
  int arg2 ;
  void *arg3 = (void *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foxrtc **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = *(void **)&jarg3; 
  result = (int)(arg1)->CreateRemoteVideoStream(arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_Foxrtc_1DeleteRemoteVideoStream(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Foxrtc *arg1 = (Foxrtc *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foxrtc **)&jarg1; 
  result = (int)(arg1)->DeleteRemoteVideoStream();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_foxrtc_android_Foxrtc_1androidJNI_Foxrtc_1IncomingData(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jint jarg3) {
  jint jresult = 0 ;
  Foxrtc *arg1 = (Foxrtc *) 0 ;
  char *arg2 = (char *) 0 ;
  int arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foxrtc **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  arg3 = (int)jarg3; 
  result = (int)(arg1)->IncomingData((char const *)arg2,arg3);
  jresult = (jint)result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


#ifdef __cplusplus
}
#endif

