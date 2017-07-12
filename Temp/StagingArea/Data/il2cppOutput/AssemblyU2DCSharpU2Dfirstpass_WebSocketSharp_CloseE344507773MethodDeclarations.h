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

// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t344507773;
// WebSocketSharp.PayloadData
struct PayloadData_t3839327312;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Close2945181741.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Paylo3839327312.h"
#include "mscorlib_System_String2029220233.h"

// System.Void WebSocketSharp.CloseEventArgs::.ctor()
extern "C"  void CloseEventArgs__ctor_m750184803 (CloseEventArgs_t344507773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.CloseEventArgs::.ctor(System.UInt16)
extern "C"  void CloseEventArgs__ctor_m192449909 (CloseEventArgs_t344507773 * __this, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.CloseEventArgs::.ctor(WebSocketSharp.CloseStatusCode)
extern "C"  void CloseEventArgs__ctor_m2776602647 (CloseEventArgs_t344507773 * __this, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.CloseEventArgs::.ctor(WebSocketSharp.PayloadData)
extern "C"  void CloseEventArgs__ctor_m2077165434 (CloseEventArgs_t344507773 * __this, PayloadData_t3839327312 * ___payloadData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.CloseEventArgs::.ctor(System.UInt16,System.String)
extern "C"  void CloseEventArgs__ctor_m1313653675 (CloseEventArgs_t344507773 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.CloseEventArgs::.ctor(WebSocketSharp.CloseStatusCode,System.String)
extern "C"  void CloseEventArgs__ctor_m3505681753 (CloseEventArgs_t344507773 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.PayloadData WebSocketSharp.CloseEventArgs::get_PayloadData()
extern "C"  PayloadData_t3839327312 * CloseEventArgs_get_PayloadData_m1505524620 (CloseEventArgs_t344507773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 WebSocketSharp.CloseEventArgs::get_Code()
extern "C"  uint16_t CloseEventArgs_get_Code_m3625670960 (CloseEventArgs_t344507773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.CloseEventArgs::get_Reason()
extern "C"  String_t* CloseEventArgs_get_Reason_m720696643 (CloseEventArgs_t344507773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.CloseEventArgs::get_WasClean()
extern "C"  bool CloseEventArgs_get_WasClean_m3166601152 (CloseEventArgs_t344507773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.CloseEventArgs::set_WasClean(System.Boolean)
extern "C"  void CloseEventArgs_set_WasClean_m2324941609 (CloseEventArgs_t344507773 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
