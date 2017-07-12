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

// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t3067050131;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.UnhandledExceptionEventArgs::.ctor(System.Object,System.Boolean)
extern "C"  void UnhandledExceptionEventArgs__ctor_m550503747 (UnhandledExceptionEventArgs_t3067050131 * __this, Il2CppObject * ___exception0, bool ___isTerminating1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
extern "C"  Il2CppObject * UnhandledExceptionEventArgs_get_ExceptionObject_m2339769046 (UnhandledExceptionEventArgs_t3067050131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UnhandledExceptionEventArgs::get_IsTerminating()
extern "C"  bool UnhandledExceptionEventArgs_get_IsTerminating_m2266550949 (UnhandledExceptionEventArgs_t3067050131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
