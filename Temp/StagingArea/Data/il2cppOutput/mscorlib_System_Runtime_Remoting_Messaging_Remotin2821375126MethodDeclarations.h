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

// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
struct RemotingSurrogateSelector_t2821375126;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t1282780357;
// System.Type
struct Type_t;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1912587528;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
extern "C"  void RemotingSurrogateSelector__ctor_m88962884 (RemotingSurrogateSelector_t2821375126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
extern "C"  void RemotingSurrogateSelector__cctor_m1175279223 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
extern "C"  Il2CppObject * RemotingSurrogateSelector_GetSurrogate_m3879132231 (RemotingSurrogateSelector_t2821375126 * __this, Type_t * ___type0, StreamingContext_t1417235061  ___context1, Il2CppObject ** ___ssout2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
