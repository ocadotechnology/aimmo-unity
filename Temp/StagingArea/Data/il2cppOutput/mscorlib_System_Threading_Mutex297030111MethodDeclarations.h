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

// System.Threading.Mutex
struct Mutex_t297030111;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Threading.Mutex::.ctor(System.Boolean)
extern "C"  void Mutex__ctor_m2649008317 (Mutex_t297030111 * __this, bool ___initiallyOwned0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Mutex::CreateMutex_internal(System.Boolean,System.String,System.Boolean&)
extern "C"  IntPtr_t Mutex_CreateMutex_internal_m2352956576 (Il2CppObject * __this /* static, unused */, bool ___initiallyOwned0, String_t* ___name1, bool* ___created2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Mutex::ReleaseMutex_internal(System.IntPtr)
extern "C"  bool Mutex_ReleaseMutex_internal_m919103208 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Mutex::ReleaseMutex()
extern "C"  void Mutex_ReleaseMutex_m2143813124 (Mutex_t297030111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
