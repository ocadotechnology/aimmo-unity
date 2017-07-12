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

// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_t2890051726;
// WebSocketSharp.WebSocketFrame
struct WebSocketFrame_t764750278;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_WebSoc764750278.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Opcod2313788840.h"

// System.Void WebSocketSharp.MessageEventArgs::.ctor(WebSocketSharp.WebSocketFrame)
extern "C"  void MessageEventArgs__ctor_m2267824553 (MessageEventArgs_t2890051726 * __this, WebSocketFrame_t764750278 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.MessageEventArgs::.ctor(WebSocketSharp.Opcode,System.Byte[])
extern "C"  void MessageEventArgs__ctor_m979597220 (MessageEventArgs_t2890051726 * __this, uint8_t ___opcode0, ByteU5BU5D_t3397334013* ___rawData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Opcode WebSocketSharp.MessageEventArgs::get_Opcode()
extern "C"  uint8_t MessageEventArgs_get_Opcode_m270573695 (MessageEventArgs_t2890051726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.MessageEventArgs::get_Data()
extern "C"  String_t* MessageEventArgs_get_Data_m2385183678 (MessageEventArgs_t2890051726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.MessageEventArgs::get_IsBinary()
extern "C"  bool MessageEventArgs_get_IsBinary_m1579492618 (MessageEventArgs_t2890051726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.MessageEventArgs::get_IsPing()
extern "C"  bool MessageEventArgs_get_IsPing_m3372339685 (MessageEventArgs_t2890051726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.MessageEventArgs::get_IsText()
extern "C"  bool MessageEventArgs_get_IsText_m339184664 (MessageEventArgs_t2890051726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.MessageEventArgs::get_RawData()
extern "C"  ByteU5BU5D_t3397334013* MessageEventArgs_get_RawData_m3294588291 (MessageEventArgs_t2890051726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.MessageEventArgs::setData()
extern "C"  void MessageEventArgs_setData_m3664861482 (MessageEventArgs_t2890051726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
