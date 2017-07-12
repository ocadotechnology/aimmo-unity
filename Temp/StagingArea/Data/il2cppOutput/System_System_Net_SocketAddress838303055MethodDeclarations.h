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

// System.Net.SocketAddress
struct SocketAddress_t838303055;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily303362630.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Net.SocketAddress::.ctor(System.Net.Sockets.AddressFamily,System.Int32)
extern "C"  void SocketAddress__ctor_m1919073130 (SocketAddress_t838303055 * __this, int32_t ___family0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.SocketAddress::get_Family()
extern "C"  int32_t SocketAddress_get_Family_m649255737 (SocketAddress_t838303055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.SocketAddress::get_Size()
extern "C"  int32_t SocketAddress_get_Size_m1668427513 (SocketAddress_t838303055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Net.SocketAddress::get_Item(System.Int32)
extern "C"  uint8_t SocketAddress_get_Item_m1814015890 (SocketAddress_t838303055 * __this, int32_t ___offset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.SocketAddress::set_Item(System.Int32,System.Byte)
extern "C"  void SocketAddress_set_Item_m3235625727 (SocketAddress_t838303055 * __this, int32_t ___offset0, uint8_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.SocketAddress::ToString()
extern "C"  String_t* SocketAddress_ToString_m1143970952 (SocketAddress_t838303055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.SocketAddress::Equals(System.Object)
extern "C"  bool SocketAddress_Equals_m4162536460 (SocketAddress_t838303055 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.SocketAddress::GetHashCode()
extern "C"  int32_t SocketAddress_GetHashCode_m862086304 (SocketAddress_t838303055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
