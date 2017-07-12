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

// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t688271106;
// System.Reflection.MethodBase
struct MethodBase_t904190842;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodBase904190842.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfo3252846202.h"

// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern "C"  void ArgInfo__ctor_m3787931268 (ArgInfo_t688271106 * __this, MethodBase_t904190842 * ___method0, uint8_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern "C"  ObjectU5BU5D_t3614634134* ArgInfo_GetInOutArgs_m3184132151 (ArgInfo_t688271106 * __this, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
