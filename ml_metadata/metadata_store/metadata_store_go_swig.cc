/* Copyright 2019 Google LLC

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    https://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.4
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

// source: blaze-out/k8-fastbuild/genfiles/third_party/ml_metadata/metadata_store/metadata_store_go.swig

#define SWIGMODULE third__party_ml__metadata_metadata__store_metadata__store__go__wrap
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

/* attribute recognised by some compilers to force inlining a function */
#ifndef SWIGALWAYSINLINE
# if __GNUC__ >= 4  /* 4.0 is the oldest version tested. */
#   define SWIGALWAYSINLINE __attribute__ ((__always_inline__))
# else
#   define SWIGALWAYSINLINE
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



#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) SWIGALWAYSINLINE : ptr(p) { }
    ~SwigMovePointer() SWIGALWAYSINLINE { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) SWIGALWAYSINLINE { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() SWIGALWAYSINLINE : pointer(0) { }
  /* always_inline works around a false ODR violation with -Os. */
  ~SwigValueWrapper() SWIGALWAYSINLINE { }
  SwigValueWrapper& operator=(const T& t) SWIGALWAYSINLINE { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const SWIGALWAYSINLINE { return *pointer.ptr; }
  T *operator&() SWIGALWAYSINLINE { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>



typedef long long intgo;
typedef unsigned long long uintgo;



typedef struct { char *p; intgo n; } _gostring_;
typedef struct { void* array; intgo len; intgo cap; } _goslice_;




#define swiggo_size_assert_eq(x, y, name) typedef char name[(x-y)*(x-y)*-2+1];
#define swiggo_size_assert(t, n) swiggo_size_assert_eq(sizeof(t), n, swiggo_sizeof_##t##_is_not_##n)

swiggo_size_assert(char, 1)
swiggo_size_assert(short, 2)
swiggo_size_assert(int, 4)
typedef long long swiggo_long_long;
swiggo_size_assert(swiggo_long_long, 8)
swiggo_size_assert(float, 4)
swiggo_size_assert(double, 8)

#ifdef __cplusplus
extern "C" {
#endif
extern void crosscall2(void (*fn)(void *, int), void *, int);
extern char* _cgo_topofstack(void) __attribute__ ((weak));
extern void _cgo_allocate(void *, int);
extern void _cgo_panic(void *, int);
#ifdef __cplusplus
}
#endif

static char *_swig_topofstack() {
  if (_cgo_topofstack) {
    return _cgo_topofstack();
  } else {
    return 0;
  }
}

/* This function does not work with Go 1.5 or later
   
static void *_swig_goallocate(size_t len) {
  struct {
    size_t len;
    void *ret;
  } a;
  a.len = len;
  crosscall2(_cgo_allocate, &a, (int) sizeof a);
  return a.ret;
}
*/

static void _swig_gopanic(const char *p) {
  struct {
    const char *p;
  } a;
  a.p = p;
  crosscall2(_cgo_panic, &a, (int) sizeof a);
}




/* This function does not work with Go 1.5 or later
   
static _gostring_ _swig_makegostring(const char *p, size_t l) {
  _gostring_ ret;
  ret.p = (char*)_swig_goallocate(l + 1);
  memcpy(ret.p, p, l);
  ret.n = l;
  return ret;
}
*/

static char *_swig_makecstring(_gostring_ s, void **tofree) {
  char *ret;
  /* Go strings are not necessarily zero-terminated.
     If tofree != NULL, then the caller will call free(*tofree),
     otherwise the caller will call free(ret).  */
  if ((s.p == NULL || s.p[0] == 0) && tofree != NULL) {
    *tofree = NULL;
    return "";
  }
  ret = (char*)malloc(s.n + 1);
  memcpy(ret, s.p, s.n);
  ret[s.n] = 0;
  if (tofree)
    *tofree = ret;
  return ret;
}

#define SWIG_contract_assert(expr, msg) \
  if (!(expr)) { _swig_gopanic(msg); } else


static _gostring_ Swig_AllocateString(const char *p, size_t l) {
  _gostring_ ret;
  ret.p = (char*)malloc(l);
  memcpy(ret.p, p, l);
  ret.n = l;
  return ret;
}


static void Swig_free(void* p) {
  free(p);
}

static void* Swig_malloc(int c) {
  return malloc(c);
}


#include <string>


#include "ml_metadata/metadata_store/metadata_store.h"
#include "ml_metadata/metadata_store/metadata_store_factory.h"
#include "tensorflow/core/lib/core/errors.h"

template <typename ProtoType>
tensorflow::Status ParseProto(const string& input, ProtoType* proto) {
  if (proto->ParseFromString(input)) {
    return tensorflow::Status::OK();
  }
  return tensorflow::errors::InvalidArgument("Could not parse proto");
}

ml_metadata::MetadataStore* CreateMetadataStore(const string& connection_config,
                                                tensorflow::Status* status) {
  ml_metadata::ConnectionConfig proto_connection_config;
  *status = ParseProto(string(connection_config), &proto_connection_config);
  if (!status->ok()) {
    return nullptr;
  }

  std::unique_ptr<ml_metadata::MetadataStore> metadata_store;
  *status = ml_metadata::CreateMetadataStore(proto_connection_config,
                                             &metadata_store);
  // If the status fails, this will be a nullptr.
  return metadata_store.release();
}

void DestroyMetadataStore(ml_metadata::MetadataStore* metadata_store) {
  if (metadata_store != nullptr) {
    delete metadata_store;
  }
}

// Given a method for MetadataStore of the form:
// tensorflow::Status my_method(const InputProto& input, OutputProto* output);
// this method will deserialize the request to an object of type InputProto,
// and serialize the result to a python string object. If there is an error,
// out_status will be set.
template <typename InputProto, typename OutputProto>
string AccessMetadataStore(
    ml_metadata::MetadataStore* metadata_store,
    tensorflow::Status (ml_metadata::MetadataStore::*method)(const InputProto&,
                                                             OutputProto*),
    const string& request, tensorflow::Status* status) {
  InputProto proto_request;
  *status = ParseProto(request, &proto_request);
  if (!status->ok()) return "";

  OutputProto proto_response;
  *status = ((*metadata_store).*method)(proto_request, &proto_response);
  if (!status->ok()) return "";

  string response;
  proto_response.SerializeToString(&response);
  return response;
}

string PutArtifactType(ml_metadata::MetadataStore* metadata_store,
                       const string& request, tensorflow::Status* status) {
  return AccessMetadataStore(metadata_store,
                             &ml_metadata::MetadataStore::PutArtifactType,
                             request, status);
}

string GetArtifactType(ml_metadata::MetadataStore* metadata_store,
                       const string& request, tensorflow::Status* status) {
  return AccessMetadataStore(metadata_store,
                             &ml_metadata::MetadataStore::GetArtifactType,
                             request, status);
}

string PutExecutionType(ml_metadata::MetadataStore* metadata_store,
                        const string& request, tensorflow::Status* status) {
  return AccessMetadataStore(metadata_store,
                             &ml_metadata::MetadataStore::PutExecutionType,
                             request, status);
}

string GetExecutionType(ml_metadata::MetadataStore* metadata_store,
                        const string& request, tensorflow::Status* status) {
  return AccessMetadataStore(metadata_store,
                             &ml_metadata::MetadataStore::GetExecutionType,
                             request, status);
}

string PutArtifacts(ml_metadata::MetadataStore* metadata_store,
                    const string& request, tensorflow::Status* status) {
  return AccessMetadataStore(metadata_store,
                             &ml_metadata::MetadataStore::PutArtifacts, request,
                             status);
}

string PutExecutions(ml_metadata::MetadataStore* metadata_store,
                     const string& request, tensorflow::Status* status) {
  return AccessMetadataStore(metadata_store,
                             &ml_metadata::MetadataStore::PutExecutions,
                             request, status);
}

string GetArtifactsByID(ml_metadata::MetadataStore* metadata_store,
                        const string& request, tensorflow::Status* status) {
  return AccessMetadataStore(metadata_store,
                             &ml_metadata::MetadataStore::GetArtifactsByID,
                             request, status);
}

string GetExecutionsByID(ml_metadata::MetadataStore* metadata_store,
                         const string& request, tensorflow::Status* status) {
  return AccessMetadataStore(metadata_store,
                             &ml_metadata::MetadataStore::GetExecutionsByID,
                             request, status);
}

string PutEvents(ml_metadata::MetadataStore* metadata_store,
                 const string& request, tensorflow::Status* status) {
  return AccessMetadataStore(
      metadata_store, &ml_metadata::MetadataStore::PutEvents, request, status);
}

string GetEventsByArtifactIDs(ml_metadata::MetadataStore* metadata_store,
                              const string& request,
                              tensorflow::Status* status) {
  return AccessMetadataStore(
      metadata_store, &ml_metadata::MetadataStore::GetEventsByArtifactIDs,
      request, status);
}

string GetEventsByExecutionIDs(ml_metadata::MetadataStore* metadata_store,
                               const string& request,
                               tensorflow::Status* status) {
  return AccessMetadataStore(
      metadata_store, &ml_metadata::MetadataStore::GetEventsByExecutionIDs,
      request, status);
}

string GetArtifacts(ml_metadata::MetadataStore* metadata_store,
                    const string& request, tensorflow::Status* status) {
  return AccessMetadataStore(metadata_store,
                             &ml_metadata::MetadataStore::GetArtifacts, request,
                             status);
}

string GetExecutions(ml_metadata::MetadataStore* metadata_store,
                     const string& request, tensorflow::Status* status) {
  return AccessMetadataStore(metadata_store,
                             &ml_metadata::MetadataStore::GetExecutions,
                             request, status);
}


#ifdef __cplusplus
extern "C" {
#endif

void _wrap_Swig_free_metadata_store_go_wrap_4a8698f620a9e7ba(void *_swig_go_0) {
  void *arg1 = (void *) 0 ;
  
  arg1 = *(void **)&_swig_go_0; 
  
  Swig_free(arg1);
  
}


void *_wrap_Swig_malloc_metadata_store_go_wrap_4a8698f620a9e7ba(intgo _swig_go_0) {
  int arg1 ;
  void *result = 0 ;
  void *_swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  
  result = (void *)Swig_malloc(arg1);
  *(void **)&_swig_go_result = (void *)result; 
  return _swig_go_result;
}


ml_metadata::MetadataStore *_wrap_CreateMetadataStore_metadata_store_go_wrap_4a8698f620a9e7ba(_gostring_ _swig_go_0, tensorflow::Status *_swig_go_1) {
  string *arg1 = 0 ;
  tensorflow::Status *arg2 = (tensorflow::Status *) 0 ;
  ml_metadata::MetadataStore *result = 0 ;
  ml_metadata::MetadataStore *_swig_go_result;
  
  
  string arg1_str(_swig_go_0.p, _swig_go_0.n);
  arg1 = &arg1_str;
  
  arg2 = *(tensorflow::Status **)&_swig_go_1; 
  
  result = (ml_metadata::MetadataStore *)CreateMetadataStore((string const &)*arg1,arg2);
  *(ml_metadata::MetadataStore **)&_swig_go_result = (ml_metadata::MetadataStore *)result; 
  return _swig_go_result;
}


void _wrap_DestroyMetadataStore_metadata_store_go_wrap_4a8698f620a9e7ba(ml_metadata::MetadataStore *_swig_go_0) {
  ml_metadata::MetadataStore *arg1 = (ml_metadata::MetadataStore *) 0 ;
  
  arg1 = *(ml_metadata::MetadataStore **)&_swig_go_0; 
  
  DestroyMetadataStore(arg1);
  
}


_gostring_ _wrap_PutArtifactType_metadata_store_go_wrap_4a8698f620a9e7ba(ml_metadata::MetadataStore *_swig_go_0, _gostring_ _swig_go_1, tensorflow::Status *_swig_go_2) {
  ml_metadata::MetadataStore *arg1 = (ml_metadata::MetadataStore *) 0 ;
  string *arg2 = 0 ;
  tensorflow::Status *arg3 = (tensorflow::Status *) 0 ;
  string result;
  _gostring_ _swig_go_result;
  
  arg1 = *(ml_metadata::MetadataStore **)&_swig_go_0; 
  
  string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  arg3 = *(tensorflow::Status **)&_swig_go_2; 
  
  result = PutArtifactType(arg1,(string const &)*arg2,arg3);
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


_gostring_ _wrap_GetArtifactType_metadata_store_go_wrap_4a8698f620a9e7ba(ml_metadata::MetadataStore *_swig_go_0, _gostring_ _swig_go_1, tensorflow::Status *_swig_go_2) {
  ml_metadata::MetadataStore *arg1 = (ml_metadata::MetadataStore *) 0 ;
  string *arg2 = 0 ;
  tensorflow::Status *arg3 = (tensorflow::Status *) 0 ;
  string result;
  _gostring_ _swig_go_result;
  
  arg1 = *(ml_metadata::MetadataStore **)&_swig_go_0; 
  
  string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  arg3 = *(tensorflow::Status **)&_swig_go_2; 
  
  result = GetArtifactType(arg1,(string const &)*arg2,arg3);
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


_gostring_ _wrap_PutExecutionType_metadata_store_go_wrap_4a8698f620a9e7ba(ml_metadata::MetadataStore *_swig_go_0, _gostring_ _swig_go_1, tensorflow::Status *_swig_go_2) {
  ml_metadata::MetadataStore *arg1 = (ml_metadata::MetadataStore *) 0 ;
  string *arg2 = 0 ;
  tensorflow::Status *arg3 = (tensorflow::Status *) 0 ;
  string result;
  _gostring_ _swig_go_result;
  
  arg1 = *(ml_metadata::MetadataStore **)&_swig_go_0; 
  
  string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  arg3 = *(tensorflow::Status **)&_swig_go_2; 
  
  result = PutExecutionType(arg1,(string const &)*arg2,arg3);
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


_gostring_ _wrap_GetExecutionType_metadata_store_go_wrap_4a8698f620a9e7ba(ml_metadata::MetadataStore *_swig_go_0, _gostring_ _swig_go_1, tensorflow::Status *_swig_go_2) {
  ml_metadata::MetadataStore *arg1 = (ml_metadata::MetadataStore *) 0 ;
  string *arg2 = 0 ;
  tensorflow::Status *arg3 = (tensorflow::Status *) 0 ;
  string result;
  _gostring_ _swig_go_result;
  
  arg1 = *(ml_metadata::MetadataStore **)&_swig_go_0; 
  
  string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  arg3 = *(tensorflow::Status **)&_swig_go_2; 
  
  result = GetExecutionType(arg1,(string const &)*arg2,arg3);
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


_gostring_ _wrap_PutArtifacts_metadata_store_go_wrap_4a8698f620a9e7ba(ml_metadata::MetadataStore *_swig_go_0, _gostring_ _swig_go_1, tensorflow::Status *_swig_go_2) {
  ml_metadata::MetadataStore *arg1 = (ml_metadata::MetadataStore *) 0 ;
  string *arg2 = 0 ;
  tensorflow::Status *arg3 = (tensorflow::Status *) 0 ;
  string result;
  _gostring_ _swig_go_result;
  
  arg1 = *(ml_metadata::MetadataStore **)&_swig_go_0; 
  
  string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  arg3 = *(tensorflow::Status **)&_swig_go_2; 
  
  result = PutArtifacts(arg1,(string const &)*arg2,arg3);
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


_gostring_ _wrap_PutExecutions_metadata_store_go_wrap_4a8698f620a9e7ba(ml_metadata::MetadataStore *_swig_go_0, _gostring_ _swig_go_1, tensorflow::Status *_swig_go_2) {
  ml_metadata::MetadataStore *arg1 = (ml_metadata::MetadataStore *) 0 ;
  string *arg2 = 0 ;
  tensorflow::Status *arg3 = (tensorflow::Status *) 0 ;
  string result;
  _gostring_ _swig_go_result;
  
  arg1 = *(ml_metadata::MetadataStore **)&_swig_go_0; 
  
  string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  arg3 = *(tensorflow::Status **)&_swig_go_2; 
  
  result = PutExecutions(arg1,(string const &)*arg2,arg3);
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


_gostring_ _wrap_GetArtifactsByID_metadata_store_go_wrap_4a8698f620a9e7ba(ml_metadata::MetadataStore *_swig_go_0, _gostring_ _swig_go_1, tensorflow::Status *_swig_go_2) {
  ml_metadata::MetadataStore *arg1 = (ml_metadata::MetadataStore *) 0 ;
  string *arg2 = 0 ;
  tensorflow::Status *arg3 = (tensorflow::Status *) 0 ;
  string result;
  _gostring_ _swig_go_result;
  
  arg1 = *(ml_metadata::MetadataStore **)&_swig_go_0; 
  
  string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  arg3 = *(tensorflow::Status **)&_swig_go_2; 
  
  result = GetArtifactsByID(arg1,(string const &)*arg2,arg3);
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


_gostring_ _wrap_GetExecutionsByID_metadata_store_go_wrap_4a8698f620a9e7ba(ml_metadata::MetadataStore *_swig_go_0, _gostring_ _swig_go_1, tensorflow::Status *_swig_go_2) {
  ml_metadata::MetadataStore *arg1 = (ml_metadata::MetadataStore *) 0 ;
  string *arg2 = 0 ;
  tensorflow::Status *arg3 = (tensorflow::Status *) 0 ;
  string result;
  _gostring_ _swig_go_result;
  
  arg1 = *(ml_metadata::MetadataStore **)&_swig_go_0; 
  
  string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  arg3 = *(tensorflow::Status **)&_swig_go_2; 
  
  result = GetExecutionsByID(arg1,(string const &)*arg2,arg3);
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


_gostring_ _wrap_PutEvents_metadata_store_go_wrap_4a8698f620a9e7ba(ml_metadata::MetadataStore *_swig_go_0, _gostring_ _swig_go_1, tensorflow::Status *_swig_go_2) {
  ml_metadata::MetadataStore *arg1 = (ml_metadata::MetadataStore *) 0 ;
  string *arg2 = 0 ;
  tensorflow::Status *arg3 = (tensorflow::Status *) 0 ;
  string result;
  _gostring_ _swig_go_result;
  
  arg1 = *(ml_metadata::MetadataStore **)&_swig_go_0; 
  
  string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  arg3 = *(tensorflow::Status **)&_swig_go_2; 
  
  result = PutEvents(arg1,(string const &)*arg2,arg3);
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


_gostring_ _wrap_GetEventsByArtifactIDs_metadata_store_go_wrap_4a8698f620a9e7ba(ml_metadata::MetadataStore *_swig_go_0, _gostring_ _swig_go_1, tensorflow::Status *_swig_go_2) {
  ml_metadata::MetadataStore *arg1 = (ml_metadata::MetadataStore *) 0 ;
  string *arg2 = 0 ;
  tensorflow::Status *arg3 = (tensorflow::Status *) 0 ;
  string result;
  _gostring_ _swig_go_result;
  
  arg1 = *(ml_metadata::MetadataStore **)&_swig_go_0; 
  
  string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  arg3 = *(tensorflow::Status **)&_swig_go_2; 
  
  result = GetEventsByArtifactIDs(arg1,(string const &)*arg2,arg3);
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


_gostring_ _wrap_GetEventsByExecutionIDs_metadata_store_go_wrap_4a8698f620a9e7ba(ml_metadata::MetadataStore *_swig_go_0, _gostring_ _swig_go_1, tensorflow::Status *_swig_go_2) {
  ml_metadata::MetadataStore *arg1 = (ml_metadata::MetadataStore *) 0 ;
  string *arg2 = 0 ;
  tensorflow::Status *arg3 = (tensorflow::Status *) 0 ;
  string result;
  _gostring_ _swig_go_result;
  
  arg1 = *(ml_metadata::MetadataStore **)&_swig_go_0; 
  
  string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  arg3 = *(tensorflow::Status **)&_swig_go_2; 
  
  result = GetEventsByExecutionIDs(arg1,(string const &)*arg2,arg3);
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


_gostring_ _wrap_GetArtifacts_metadata_store_go_wrap_4a8698f620a9e7ba(ml_metadata::MetadataStore *_swig_go_0, _gostring_ _swig_go_1, tensorflow::Status *_swig_go_2) {
  ml_metadata::MetadataStore *arg1 = (ml_metadata::MetadataStore *) 0 ;
  string *arg2 = 0 ;
  tensorflow::Status *arg3 = (tensorflow::Status *) 0 ;
  string result;
  _gostring_ _swig_go_result;
  
  arg1 = *(ml_metadata::MetadataStore **)&_swig_go_0; 
  
  string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  arg3 = *(tensorflow::Status **)&_swig_go_2; 
  
  result = GetArtifacts(arg1,(string const &)*arg2,arg3);
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


_gostring_ _wrap_GetExecutions_metadata_store_go_wrap_4a8698f620a9e7ba(ml_metadata::MetadataStore *_swig_go_0, _gostring_ _swig_go_1, tensorflow::Status *_swig_go_2) {
  ml_metadata::MetadataStore *arg1 = (ml_metadata::MetadataStore *) 0 ;
  string *arg2 = 0 ;
  tensorflow::Status *arg3 = (tensorflow::Status *) 0 ;
  string result;
  _gostring_ _swig_go_result;
  
  arg1 = *(ml_metadata::MetadataStore **)&_swig_go_0; 
  
  string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  arg3 = *(tensorflow::Status **)&_swig_go_2; 
  
  result = GetExecutions(arg1,(string const &)*arg2,arg3);
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


tensorflow::Status *_wrap_new_Status__SWIG_0_metadata_store_go_wrap_4a8698f620a9e7ba() {
  tensorflow::Status *result = 0 ;
  tensorflow::Status *_swig_go_result;
  
  
  result = (tensorflow::Status *)new tensorflow::Status();
  *(tensorflow::Status **)&_swig_go_result = (tensorflow::Status *)result; 
  return _swig_go_result;
}


tensorflow::Status *_wrap_new_Status__SWIG_1_metadata_store_go_wrap_4a8698f620a9e7ba(tensorflow::error::Code *_swig_go_0, tensorflow::StringPiece *_swig_go_1) {
  tensorflow::error::Code arg1 ;
  tensorflow::StringPiece arg2 ;
  tensorflow::error::Code *argp1 ;
  tensorflow::StringPiece *argp2 ;
  tensorflow::Status *result = 0 ;
  tensorflow::Status *_swig_go_result;
  
  
  argp1 = (tensorflow::error::Code *)_swig_go_0;
  if (argp1 == NULL) {
    _swig_gopanic("Attempt to dereference null tensorflow::error::Code");
  }
  arg1 = (tensorflow::error::Code)*argp1;
  
  
  argp2 = (tensorflow::StringPiece *)_swig_go_1;
  if (argp2 == NULL) {
    _swig_gopanic("Attempt to dereference null tensorflow::StringPiece");
  }
  arg2 = (tensorflow::StringPiece)*argp2;
  
  
  result = (tensorflow::Status *)new tensorflow::Status(arg1,arg2);
  *(tensorflow::Status **)&_swig_go_result = (tensorflow::Status *)result; 
  return _swig_go_result;
}


tensorflow::Status *_wrap_new_Status__SWIG_2_metadata_store_go_wrap_4a8698f620a9e7ba(tensorflow::Status *_swig_go_0) {
  tensorflow::Status *arg1 = 0 ;
  tensorflow::Status *result = 0 ;
  tensorflow::Status *_swig_go_result;
  
  arg1 = *(tensorflow::Status **)&_swig_go_0; 
  
  result = (tensorflow::Status *)new tensorflow::Status((tensorflow::Status const &)*arg1);
  *(tensorflow::Status **)&_swig_go_result = (tensorflow::Status *)result; 
  return _swig_go_result;
}


bool _wrap_Status_ok_metadata_store_go_wrap_4a8698f620a9e7ba(tensorflow::Status *_swig_go_0) {
  tensorflow::Status *arg1 = (tensorflow::Status *) 0 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(tensorflow::Status **)&_swig_go_0; 
  
  result = (bool)((tensorflow::Status const *)arg1)->ok();
  _swig_go_result = result; 
  return _swig_go_result;
}


tensorflow::error::Code *_wrap_Status_code_metadata_store_go_wrap_4a8698f620a9e7ba(tensorflow::Status *_swig_go_0) {
  tensorflow::Status *arg1 = (tensorflow::Status *) 0 ;
  tensorflow::error::Code result;
  tensorflow::error::Code *_swig_go_result;
  
  arg1 = *(tensorflow::Status **)&_swig_go_0; 
  
  result = ((tensorflow::Status const *)arg1)->code();
  *(tensorflow::error::Code **)&_swig_go_result = new tensorflow::error::Code(result); 
  return _swig_go_result;
}


_gostring_ _wrap_Status_error_message_metadata_store_go_wrap_4a8698f620a9e7ba(tensorflow::Status *_swig_go_0) {
  tensorflow::Status *arg1 = (tensorflow::Status *) 0 ;
  string *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(tensorflow::Status **)&_swig_go_0; 
  
  result = (string *) &((tensorflow::Status const *)arg1)->error_message();
  _swig_go_result = Swig_AllocateString((*result).data(), (*result).length()); 
  return _swig_go_result;
}


void _wrap_delete_Status_metadata_store_go_wrap_4a8698f620a9e7ba(tensorflow::Status *_swig_go_0) {
  tensorflow::Status *arg1 = (tensorflow::Status *) 0 ;
  
  arg1 = *(tensorflow::Status **)&_swig_go_0; 
  
  delete arg1;
  
}


#ifdef __cplusplus
}
#endif
