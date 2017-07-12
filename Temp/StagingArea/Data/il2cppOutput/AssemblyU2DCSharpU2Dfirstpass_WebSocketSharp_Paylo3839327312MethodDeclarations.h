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

// WebSocketSharp.PayloadData
struct PayloadData_t3839327312;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t1158628263;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void WebSocketSharp.PayloadData::.cctor()
extern "C"  void PayloadData__cctor_m1337500739 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::.ctor()
extern "C"  void PayloadData__ctor_m1066072130 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::.ctor(System.Byte[])
extern "C"  void PayloadData__ctor_m3348784631 (PayloadData_t3839327312 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::.ctor(System.Byte[],System.Int64)
extern "C"  void PayloadData__ctor_m3555318257 (PayloadData_t3839327312 * __this, ByteU5BU5D_t3397334013* ___data0, int64_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::.ctor(System.UInt16,System.String)
extern "C"  void PayloadData__ctor_m2104298362 (PayloadData_t3839327312 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 WebSocketSharp.PayloadData::get_Code()
extern "C"  uint16_t PayloadData_get_Code_m668489357 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.PayloadData::get_ExtensionDataLength()
extern "C"  int64_t PayloadData_get_ExtensionDataLength_m2119645813 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::set_ExtensionDataLength(System.Int64)
extern "C"  void PayloadData_set_ExtensionDataLength_m4231616368 (PayloadData_t3839327312 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.PayloadData::get_HasReservedCode()
extern "C"  bool PayloadData_get_HasReservedCode_m89552818 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.PayloadData::get_Reason()
extern "C"  String_t* PayloadData_get_Reason_m691275184 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.PayloadData::get_ApplicationData()
extern "C"  ByteU5BU5D_t3397334013* PayloadData_get_ApplicationData_m2790311639 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.PayloadData::get_ExtensionData()
extern "C"  ByteU5BU5D_t3397334013* PayloadData_get_ExtensionData_m1064606152 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 WebSocketSharp.PayloadData::get_Length()
extern "C"  uint64_t PayloadData_get_Length_m1613582105 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::Mask(System.Byte[])
extern "C"  void PayloadData_Mask_m845982055 (PayloadData_t3839327312 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Byte> WebSocketSharp.PayloadData::GetEnumerator()
extern "C"  Il2CppObject* PayloadData_GetEnumerator_m3178293073 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.PayloadData::ToArray()
extern "C"  ByteU5BU5D_t3397334013* PayloadData_ToArray_m2105727616 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.PayloadData::ToString()
extern "C"  String_t* PayloadData_ToString_m1564231675 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WebSocketSharp.PayloadData::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * PayloadData_System_Collections_IEnumerable_GetEnumerator_m858754773 (PayloadData_t3839327312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
