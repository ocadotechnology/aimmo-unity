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

// UnitySocketIO.IO.Parser
struct Parser_t3968527057;
// UnitySocketIO.Events.SocketIOEvent
struct SocketIOEvent_t1596924219;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnitySocketIO.IO.Parser::.ctor()
extern "C"  void Parser__ctor_m3879615564 (Parser_t3968527057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnitySocketIO.Events.SocketIOEvent UnitySocketIO.IO.Parser::Parse(System.String)
extern "C"  SocketIOEvent_t1596924219 * Parser_Parse_m2850035600 (Parser_t3968527057 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnitySocketIO.IO.Parser::ParseData(System.String)
extern "C"  String_t* Parser_ParseData_m3862348512 (Parser_t3968527057 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
