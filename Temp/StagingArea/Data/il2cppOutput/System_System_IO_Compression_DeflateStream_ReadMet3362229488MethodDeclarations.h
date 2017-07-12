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

// System.IO.Compression.DeflateStream/ReadMethod
struct ReadMethod_t3362229488;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.IO.Compression.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void ReadMethod__ctor_m626043682 (ReadMethod_t3362229488 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ReadMethod_Invoke_m278417217 (ReadMethod_t3362229488 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ReadMethod_BeginInvoke_m3639860050 (ReadMethod_t3362229488 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::EndInvoke(System.IAsyncResult)
extern "C"  int32_t ReadMethod_EndInvoke_m2107115960 (ReadMethod_t3362229488 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
