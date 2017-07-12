#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1416559589;
// System.Net.WebRequest
struct WebRequest_t1365124353;
// System.Uri
struct Uri_t19570940;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C"  void HttpRequestCreator__ctor_m2513916021 (HttpRequestCreator_t1416559589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C"  WebRequest_t1365124353 * HttpRequestCreator_Create_m3607509610 (HttpRequestCreator_t1416559589 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
