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

// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t1417235061;
struct StreamingContext_t1417235061_marshaled_pinvoke;
struct StreamingContext_t1417235061_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon4264247603.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates)
extern "C"  void StreamingContext__ctor_m3756336578 (StreamingContext_t1417235061 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates,System.Object)
extern "C"  void StreamingContext__ctor_m3063421596 (StreamingContext_t1417235061 * __this, int32_t ___state0, Il2CppObject * ___additional1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::get_State()
extern "C"  int32_t StreamingContext_get_State_m4191542657 (StreamingContext_t1417235061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.StreamingContext::Equals(System.Object)
extern "C"  bool StreamingContext_Equals_m3075503931 (StreamingContext_t1417235061 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.StreamingContext::GetHashCode()
extern "C"  int32_t StreamingContext_GetHashCode_m3109182873 (StreamingContext_t1417235061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct StreamingContext_t1417235061;
struct StreamingContext_t1417235061_marshaled_pinvoke;

extern "C" void StreamingContext_t1417235061_marshal_pinvoke(const StreamingContext_t1417235061& unmarshaled, StreamingContext_t1417235061_marshaled_pinvoke& marshaled);
extern "C" void StreamingContext_t1417235061_marshal_pinvoke_back(const StreamingContext_t1417235061_marshaled_pinvoke& marshaled, StreamingContext_t1417235061& unmarshaled);
extern "C" void StreamingContext_t1417235061_marshal_pinvoke_cleanup(StreamingContext_t1417235061_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct StreamingContext_t1417235061;
struct StreamingContext_t1417235061_marshaled_com;

extern "C" void StreamingContext_t1417235061_marshal_com(const StreamingContext_t1417235061& unmarshaled, StreamingContext_t1417235061_marshaled_com& marshaled);
extern "C" void StreamingContext_t1417235061_marshal_com_back(const StreamingContext_t1417235061_marshaled_com& marshaled, StreamingContext_t1417235061& unmarshaled);
extern "C" void StreamingContext_t1417235061_marshal_com_cleanup(StreamingContext_t1417235061_marshaled_com& marshaled);
