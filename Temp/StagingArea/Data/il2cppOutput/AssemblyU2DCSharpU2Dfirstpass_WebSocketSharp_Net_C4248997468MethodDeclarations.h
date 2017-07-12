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

// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t4248997468;
// System.Collections.Generic.IList`1<WebSocketSharp.Net.Cookie>
struct IList_1_t2367129061;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Net.Cookie>
struct IEnumerable_1_t2118315505;
// WebSocketSharp.Net.Cookie
struct Cookie_t1826188460;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Array
struct Il2CppArray;
// WebSocketSharp.Net.Cookie[]
struct CookieU5BU5D_t2763837221;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_C1826188460.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_C4248997468.h"
#include "mscorlib_System_Array3829468939.h"

// System.Void WebSocketSharp.Net.CookieCollection::.ctor()
extern "C"  void CookieCollection__ctor_m3539235969 (CookieCollection_t4248997468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<WebSocketSharp.Net.Cookie> WebSocketSharp.Net.CookieCollection::get_List()
extern "C"  Il2CppObject* CookieCollection_get_List_m2686319924 (CookieCollection_t4248997468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Net.Cookie> WebSocketSharp.Net.CookieCollection::get_Sorted()
extern "C"  Il2CppObject* CookieCollection_get_Sorted_m2783280449 (CookieCollection_t4248997468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.CookieCollection::get_Count()
extern "C"  int32_t CookieCollection_get_Count_m1364147349 (CookieCollection_t4248997468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.CookieCollection::get_IsReadOnly()
extern "C"  bool CookieCollection_get_IsReadOnly_m1098529812 (CookieCollection_t4248997468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.CookieCollection::get_IsSynchronized()
extern "C"  bool CookieCollection_get_IsSynchronized_m1072561672 (CookieCollection_t4248997468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.Cookie WebSocketSharp.Net.CookieCollection::get_Item(System.Int32)
extern "C"  Cookie_t1826188460 * CookieCollection_get_Item_m1894968633 (CookieCollection_t4248997468 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.Cookie WebSocketSharp.Net.CookieCollection::get_Item(System.String)
extern "C"  Cookie_t1826188460 * CookieCollection_get_Item_m376527542 (CookieCollection_t4248997468 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object WebSocketSharp.Net.CookieCollection::get_SyncRoot()
extern "C"  Il2CppObject * CookieCollection_get_SyncRoot_m3974785950 (CookieCollection_t4248997468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.CookieCollection::compareCookieWithinSort(WebSocketSharp.Net.Cookie,WebSocketSharp.Net.Cookie)
extern "C"  int32_t CookieCollection_compareCookieWithinSort_m1343977383 (Il2CppObject * __this /* static, unused */, Cookie_t1826188460 * ___x0, Cookie_t1826188460 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.CookieCollection::compareCookieWithinSorted(WebSocketSharp.Net.Cookie,WebSocketSharp.Net.Cookie)
extern "C"  int32_t CookieCollection_compareCookieWithinSorted_m1267194506 (Il2CppObject * __this /* static, unused */, Cookie_t1826188460 * ___x0, Cookie_t1826188460 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.CookieCollection::parseRequest(System.String)
extern "C"  CookieCollection_t4248997468 * CookieCollection_parseRequest_m3871886128 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.CookieCollection::parseResponse(System.String)
extern "C"  CookieCollection_t4248997468 * CookieCollection_parseResponse_m2332976906 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.CookieCollection::searchCookie(WebSocketSharp.Net.Cookie)
extern "C"  int32_t CookieCollection_searchCookie_m2446688207 (CookieCollection_t4248997468 * __this, Cookie_t1826188460 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.Net.CookieCollection::splitCookieHeaderValue(System.String)
extern "C"  StringU5BU5D_t1642385972* CookieCollection_splitCookieHeaderValue_m2293565188 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.CookieCollection::Parse(System.String,System.Boolean)
extern "C"  CookieCollection_t4248997468 * CookieCollection_Parse_m4142968874 (Il2CppObject * __this /* static, unused */, String_t* ___value0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::SetOrRemove(WebSocketSharp.Net.Cookie)
extern "C"  void CookieCollection_SetOrRemove_m2999930698 (CookieCollection_t4248997468 * __this, Cookie_t1826188460 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::SetOrRemove(WebSocketSharp.Net.CookieCollection)
extern "C"  void CookieCollection_SetOrRemove_m2832364830 (CookieCollection_t4248997468 * __this, CookieCollection_t4248997468 * ___cookies0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::Sort()
extern "C"  void CookieCollection_Sort_m2693309695 (CookieCollection_t4248997468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::Add(WebSocketSharp.Net.Cookie)
extern "C"  void CookieCollection_Add_m293800520 (CookieCollection_t4248997468 * __this, Cookie_t1826188460 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::Add(WebSocketSharp.Net.CookieCollection)
extern "C"  void CookieCollection_Add_m3425619732 (CookieCollection_t4248997468 * __this, CookieCollection_t4248997468 * ___cookies0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::CopyTo(System.Array,System.Int32)
extern "C"  void CookieCollection_CopyTo_m4206414158 (CookieCollection_t4248997468 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::CopyTo(WebSocketSharp.Net.Cookie[],System.Int32)
extern "C"  void CookieCollection_CopyTo_m2058731980 (CookieCollection_t4248997468 * __this, CookieU5BU5D_t2763837221* ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WebSocketSharp.Net.CookieCollection::GetEnumerator()
extern "C"  Il2CppObject * CookieCollection_GetEnumerator_m2501817397 (CookieCollection_t4248997468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
