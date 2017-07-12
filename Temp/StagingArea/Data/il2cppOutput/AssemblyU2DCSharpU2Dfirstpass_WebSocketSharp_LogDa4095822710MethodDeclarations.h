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

// WebSocketSharp.LogData
struct LogData_t4095822710;
// System.Diagnostics.StackFrame
struct StackFrame_t2050294881;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_LogLe2748531832.h"
#include "mscorlib_System_Diagnostics_StackFrame2050294881.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Void WebSocketSharp.LogData::.ctor(WebSocketSharp.LogLevel,System.Diagnostics.StackFrame,System.String)
extern "C"  void LogData__ctor_m1924696455 (LogData_t4095822710 * __this, int32_t ___level0, StackFrame_t2050294881 * ___caller1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame WebSocketSharp.LogData::get_Caller()
extern "C"  StackFrame_t2050294881 * LogData_get_Caller_m1245018911 (LogData_t4095822710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime WebSocketSharp.LogData::get_Date()
extern "C"  DateTime_t693205669  LogData_get_Date_m395462072 (LogData_t4095822710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.LogLevel WebSocketSharp.LogData::get_Level()
extern "C"  int32_t LogData_get_Level_m2555316579 (LogData_t4095822710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.LogData::get_Message()
extern "C"  String_t* LogData_get_Message_m236915257 (LogData_t4095822710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.LogData::ToString()
extern "C"  String_t* LogData_ToString_m581586909 (LogData_t4095822710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
