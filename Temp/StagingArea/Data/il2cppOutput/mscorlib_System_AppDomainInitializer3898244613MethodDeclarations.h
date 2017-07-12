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

// System.AppDomainInitializer
struct AppDomainInitializer_t3898244613;
// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern "C"  void AppDomainInitializer__ctor_m1669835818 (AppDomainInitializer_t3898244613 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern "C"  void AppDomainInitializer_Invoke_m3449211446 (AppDomainInitializer_t3898244613 * __this, StringU5BU5D_t1642385972* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AppDomainInitializer_BeginInvoke_m2446455399 (AppDomainInitializer_t3898244613 * __this, StringU5BU5D_t1642385972* ___args0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern "C"  void AppDomainInitializer_EndInvoke_m4003801172 (AppDomainInitializer_t3898244613 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
