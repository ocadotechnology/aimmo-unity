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

// UnityEngine.DebugLogHandler
struct DebugLogHandler_t865810509;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t1021602117;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LogType1559732862.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"

// System.Void UnityEngine.DebugLogHandler::.ctor()
extern "C"  void DebugLogHandler__ctor_m3134219506 (DebugLogHandler_t865810509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::Internal_Log(UnityEngine.LogType,System.String,UnityEngine.Object)
extern "C"  void DebugLogHandler_Internal_Log_m3491540823 (Il2CppObject * __this /* static, unused */, int32_t ___level0, String_t* ___msg1, Object_t1021602117 * ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
extern "C"  void DebugLogHandler_LogFormat_m177245518 (DebugLogHandler_t865810509 * __this, int32_t ___logType0, Object_t1021602117 * ___context1, String_t* ___format2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
