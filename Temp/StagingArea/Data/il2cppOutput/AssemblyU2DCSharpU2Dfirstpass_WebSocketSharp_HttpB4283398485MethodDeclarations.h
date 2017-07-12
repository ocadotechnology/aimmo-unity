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

// WebSocketSharp.HttpBase
struct HttpBase_t4283398485;
// System.Version
struct Version_t1755874712;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Version1755874712.h"
#include "System_System_Collections_Specialized_NameValueCol3047564564.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_String2029220233.h"

// System.Void WebSocketSharp.HttpBase::.ctor(System.Version,System.Collections.Specialized.NameValueCollection)
extern "C"  void HttpBase__ctor_m3753555829 (HttpBase_t4283398485 * __this, Version_t1755874712 * ___version0, NameValueCollection_t3047564564 * ___headers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HttpBase::get_EntityBody()
extern "C"  String_t* HttpBase_get_EntityBody_m3173020212 (HttpBase_t4283398485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.HttpBase::get_Headers()
extern "C"  NameValueCollection_t3047564564 * HttpBase_get_Headers_m2404377998 (HttpBase_t4283398485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version WebSocketSharp.HttpBase::get_ProtocolVersion()
extern "C"  Version_t1755874712 * HttpBase_get_ProtocolVersion_m3197159884 (HttpBase_t4283398485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.HttpBase::readEntityBody(System.IO.Stream,System.String)
extern "C"  ByteU5BU5D_t3397334013* HttpBase_readEntityBody_m2443962703 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, String_t* ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.HttpBase::readHeaders(System.IO.Stream,System.Int32)
extern "C"  StringU5BU5D_t1642385972* HttpBase_readHeaders_m3570924868 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, int32_t ___maxLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.HttpBase::ToByteArray()
extern "C"  ByteU5BU5D_t3397334013* HttpBase_ToByteArray_m4238934399 (HttpBase_t4283398485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
