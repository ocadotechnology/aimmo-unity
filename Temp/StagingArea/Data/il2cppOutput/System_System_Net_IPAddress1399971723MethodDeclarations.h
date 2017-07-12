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

// System.Net.IPAddress
struct IPAddress_t1399971723;
// System.UInt16[]
struct UInt16U5BU5D_t2527266722;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_IPAddress1399971723.h"
#include "System_System_Net_Sockets_AddressFamily303362630.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Net.IPAddress::.ctor(System.Int64)
extern "C"  void IPAddress__ctor_m4294749317 (IPAddress_t1399971723 * __this, int64_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.ctor(System.UInt16[],System.Int64)
extern "C"  void IPAddress__ctor_m1927150601 (IPAddress_t1399971723 * __this, UInt16U5BU5D_t2527266722* ___address0, int64_t ___scopeId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.cctor()
extern "C"  void IPAddress__cctor_m3624830012 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::SwapShort(System.Int16)
extern "C"  int16_t IPAddress_SwapShort_m3285274063 (Il2CppObject * __this /* static, unused */, int16_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::HostToNetworkOrder(System.Int16)
extern "C"  int16_t IPAddress_HostToNetworkOrder_m1092199707 (Il2CppObject * __this /* static, unused */, int16_t ___host0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::NetworkToHostOrder(System.Int16)
extern "C"  int16_t IPAddress_NetworkToHostOrder_m862617551 (Il2CppObject * __this /* static, unused */, int16_t ___network0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
extern "C"  IPAddress_t1399971723 * IPAddress_Parse_m3374241274 (Il2CppObject * __this /* static, unused */, String_t* ___ipString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
extern "C"  bool IPAddress_TryParse_m2352368982 (Il2CppObject * __this /* static, unused */, String_t* ___ipString0, IPAddress_t1399971723 ** ___address1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV4(System.String)
extern "C"  IPAddress_t1399971723 * IPAddress_ParseIPV4_m1639470661 (Il2CppObject * __this /* static, unused */, String_t* ___ip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV6(System.String)
extern "C"  IPAddress_t1399971723 * IPAddress_ParseIPV6_m2209709575 (Il2CppObject * __this /* static, unused */, String_t* ___ip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_InternalIPv4Address()
extern "C"  int64_t IPAddress_get_InternalIPv4Address_m2113749881 (IPAddress_t1399971723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_ScopeId()
extern "C"  int64_t IPAddress_get_ScopeId_m133972856 (IPAddress_t1399971723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.IPAddress::GetAddressBytes()
extern "C"  ByteU5BU5D_t3397334013* IPAddress_GetAddressBytes_m3037024450 (IPAddress_t1399971723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
extern "C"  int32_t IPAddress_get_AddressFamily_m2727317531 (IPAddress_t1399971723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::IsLoopback(System.Net.IPAddress)
extern "C"  bool IPAddress_IsLoopback_m2800578891 (Il2CppObject * __this /* static, unused */, IPAddress_t1399971723 * ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString()
extern "C"  String_t* IPAddress_ToString_m1462985652 (IPAddress_t1399971723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString(System.Int64)
extern "C"  String_t* IPAddress_ToString_m267966740 (Il2CppObject * __this /* static, unused */, int64_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::Equals(System.Object)
extern "C"  bool IPAddress_Equals_m2372067720 (IPAddress_t1399971723 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::GetHashCode()
extern "C"  int32_t IPAddress_GetHashCode_m638502356 (IPAddress_t1399971723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::Hash(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t IPAddress_Hash_m1078373075 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___j1, int32_t ___k2, int32_t ___l3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
