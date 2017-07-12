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

// UnityEngine.Logger
struct Logger_t3328995178;
// UnityEngine.ILogHandler
struct ILogHandler_t264057413;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Object
struct Object_t1021602117;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LogType1559732862.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Logger::.ctor(UnityEngine.ILogHandler)
extern "C"  void Logger__ctor_m3834134587 (Logger_t3328995178 * __this, Il2CppObject * ___logHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ILogHandler UnityEngine.Logger::get_logHandler()
extern "C"  Il2CppObject * Logger_get_logHandler_m4190583509 (Logger_t3328995178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::set_logHandler(UnityEngine.ILogHandler)
extern "C"  void Logger_set_logHandler_m2851576632 (Logger_t3328995178 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Logger::get_logEnabled()
extern "C"  bool Logger_get_logEnabled_m3807759477 (Logger_t3328995178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::set_logEnabled(System.Boolean)
extern "C"  void Logger_set_logEnabled_m3852234466 (Logger_t3328995178 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LogType UnityEngine.Logger::get_filterLogType()
extern "C"  int32_t Logger_get_filterLogType_m3672438698 (Logger_t3328995178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::set_filterLogType(UnityEngine.LogType)
extern "C"  void Logger_set_filterLogType_m1452353615 (Logger_t3328995178 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Logger::IsLogTypeAllowed(UnityEngine.LogType)
extern "C"  bool Logger_IsLogTypeAllowed_m1750132386 (Logger_t3328995178 * __this, int32_t ___logType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Logger::GetString(System.Object)
extern "C"  String_t* Logger_GetString_m4086587133 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::Log(UnityEngine.LogType,System.Object)
extern "C"  void Logger_Log_m3587255568 (Logger_t3328995178 * __this, int32_t ___logType0, Il2CppObject * ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::Log(UnityEngine.LogType,System.Object,UnityEngine.Object)
extern "C"  void Logger_Log_m4012064130 (Logger_t3328995178 * __this, int32_t ___logType0, Il2CppObject * ___message1, Object_t1021602117 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
extern "C"  void Logger_LogFormat_m193464629 (Logger_t3328995178 * __this, int32_t ___logType0, Object_t1021602117 * ___context1, String_t* ___format2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
