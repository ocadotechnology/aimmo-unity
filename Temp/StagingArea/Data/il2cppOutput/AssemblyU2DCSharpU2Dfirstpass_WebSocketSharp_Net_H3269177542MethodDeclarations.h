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

// WebSocketSharp.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_t3269177542;
// WebSocketSharp.Net.HttpListener
struct HttpListener_t4179429670;
// System.String
struct String_t;
// System.Array
struct Il2CppArray;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t3799711356;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H4179429670.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Array3829468939.h"

// System.Void WebSocketSharp.Net.HttpListenerPrefixCollection::.ctor(WebSocketSharp.Net.HttpListener)
extern "C"  void HttpListenerPrefixCollection__ctor_m2207887303 (HttpListenerPrefixCollection_t3269177542 * __this, HttpListener_t4179429670 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpListenerPrefixCollection::get_Count()
extern "C"  int32_t HttpListenerPrefixCollection_get_Count_m3276959459 (HttpListenerPrefixCollection_t3269177542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerPrefixCollection::get_IsReadOnly()
extern "C"  bool HttpListenerPrefixCollection_get_IsReadOnly_m2481247506 (HttpListenerPrefixCollection_t3269177542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerPrefixCollection::get_IsSynchronized()
extern "C"  bool HttpListenerPrefixCollection_get_IsSynchronized_m1380757850 (HttpListenerPrefixCollection_t3269177542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerPrefixCollection::Add(System.String)
extern "C"  void HttpListenerPrefixCollection_Add_m1302733298 (HttpListenerPrefixCollection_t3269177542 * __this, String_t* ___uriPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerPrefixCollection::Clear()
extern "C"  void HttpListenerPrefixCollection_Clear_m3053212870 (HttpListenerPrefixCollection_t3269177542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerPrefixCollection::Contains(System.String)
extern "C"  bool HttpListenerPrefixCollection_Contains_m4014365818 (HttpListenerPrefixCollection_t3269177542 * __this, String_t* ___uriPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerPrefixCollection::CopyTo(System.Array,System.Int32)
extern "C"  void HttpListenerPrefixCollection_CopyTo_m1064520692 (HttpListenerPrefixCollection_t3269177542 * __this, Il2CppArray * ___array0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerPrefixCollection::CopyTo(System.String[],System.Int32)
extern "C"  void HttpListenerPrefixCollection_CopyTo_m3404001558 (HttpListenerPrefixCollection_t3269177542 * __this, StringU5BU5D_t1642385972* ___array0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.String> WebSocketSharp.Net.HttpListenerPrefixCollection::GetEnumerator()
extern "C"  Il2CppObject* HttpListenerPrefixCollection_GetEnumerator_m547404201 (HttpListenerPrefixCollection_t3269177542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerPrefixCollection::Remove(System.String)
extern "C"  bool HttpListenerPrefixCollection_Remove_m3695960183 (HttpListenerPrefixCollection_t3269177542 * __this, String_t* ___uriPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WebSocketSharp.Net.HttpListenerPrefixCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * HttpListenerPrefixCollection_System_Collections_IEnumerable_GetEnumerator_m1242395302 (HttpListenerPrefixCollection_t3269177542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
