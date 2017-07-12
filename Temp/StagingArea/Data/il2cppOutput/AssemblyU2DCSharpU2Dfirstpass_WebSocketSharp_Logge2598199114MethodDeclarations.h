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

// WebSocketSharp.Logger
struct Logger_t2598199114;
// System.String
struct String_t;
// System.Action`2<WebSocketSharp.LogData,System.String>
struct Action_2_t502883108;
// WebSocketSharp.LogData
struct LogData_t4095822710;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_LogLe2748531832.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_LogDa4095822710.h"

// System.Void WebSocketSharp.Logger::.ctor()
extern "C"  void Logger__ctor_m4127946102 (Logger_t2598199114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::.ctor(WebSocketSharp.LogLevel)
extern "C"  void Logger__ctor_m11834603 (Logger_t2598199114 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::.ctor(WebSocketSharp.LogLevel,System.String,System.Action`2<WebSocketSharp.LogData,System.String>)
extern "C"  void Logger__ctor_m382073085 (Logger_t2598199114 * __this, int32_t ___level0, String_t* ___file1, Action_2_t502883108 * ___output2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Logger::get_File()
extern "C"  String_t* Logger_get_File_m3449554620 (Logger_t2598199114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::set_File(System.String)
extern "C"  void Logger_set_File_m1773587295 (Logger_t2598199114 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.LogLevel WebSocketSharp.Logger::get_Level()
extern "C"  int32_t Logger_get_Level_m2336899039 (Logger_t2598199114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::set_Level(WebSocketSharp.LogLevel)
extern "C"  void Logger_set_Level_m3471681832 (Logger_t2598199114 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`2<WebSocketSharp.LogData,System.String> WebSocketSharp.Logger::get_Output()
extern "C"  Action_2_t502883108 * Logger_get_Output_m988256279 (Logger_t2598199114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::set_Output(System.Action`2<WebSocketSharp.LogData,System.String>)
extern "C"  void Logger_set_Output_m1251887738 (Logger_t2598199114 * __this, Action_2_t502883108 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::defaultOutput(WebSocketSharp.LogData,System.String)
extern "C"  void Logger_defaultOutput_m2211340839 (Il2CppObject * __this /* static, unused */, LogData_t4095822710 * ___data0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::output(System.String,WebSocketSharp.LogLevel)
extern "C"  void Logger_output_m2740018174 (Logger_t2598199114 * __this, String_t* ___message0, int32_t ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::writeToFile(System.String,System.String)
extern "C"  void Logger_writeToFile_m82022948 (Il2CppObject * __this /* static, unused */, String_t* ___value0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Debug(System.String)
extern "C"  void Logger_Debug_m711482081 (Logger_t2598199114 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Error(System.String)
extern "C"  void Logger_Error_m3642165258 (Logger_t2598199114 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Fatal(System.String)
extern "C"  void Logger_Fatal_m1106226018 (Logger_t2598199114 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Info(System.String)
extern "C"  void Logger_Info_m840490946 (Logger_t2598199114 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Trace(System.String)
extern "C"  void Logger_Trace_m74723021 (Logger_t2598199114 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Warn(System.String)
extern "C"  void Logger_Warn_m516676574 (Logger_t2598199114 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
