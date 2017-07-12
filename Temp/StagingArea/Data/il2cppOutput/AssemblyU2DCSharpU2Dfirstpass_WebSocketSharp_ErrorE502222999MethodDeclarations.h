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

// WebSocketSharp.ErrorEventArgs
struct ErrorEventArgs_t502222999;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void WebSocketSharp.ErrorEventArgs::.ctor(System.String)
extern "C"  void ErrorEventArgs__ctor_m786222723 (ErrorEventArgs_t502222999 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.ErrorEventArgs::.ctor(System.String,System.Exception)
extern "C"  void ErrorEventArgs__ctor_m1907389795 (ErrorEventArgs_t502222999 * __this, String_t* ___message0, Exception_t1927440687 * ___exception1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception WebSocketSharp.ErrorEventArgs::get_Exception()
extern "C"  Exception_t1927440687 * ErrorEventArgs_get_Exception_m3129926156 (ErrorEventArgs_t502222999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.ErrorEventArgs::get_Message()
extern "C"  String_t* ErrorEventArgs_get_Message_m1096074502 (ErrorEventArgs_t502222999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
