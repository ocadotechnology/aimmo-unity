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

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.IO.Stream
struct Stream_t3255436806;
// System.Action
struct Action_t3226471752;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t2223360553;
// System.Action`1<System.Exception>
struct Action_1_t1729240069;
// System.Action`1<System.Int32>
struct Action_1_t1873676830;
// System.Uri
struct Uri_t19570940;
// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext
struct TcpListenerWebSocketContext_t1695227117;
// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t204724213;
// WebSocketSharp.Logger
struct Logger_t2598199114;
// System.Action`1<System.Byte[]>
struct Action_1_t3199133395;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Net.IPAddress
struct IPAddress_t1399971723;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.EventHandler
struct EventHandler_t277755526;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t3289624707;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t4248997468;
// WebSocketSharp.Net.HttpListenerRequest
struct HttpListenerRequest_t2316381291;
// System.Action`1<System.Int64>
struct Action_1_t710877419;
// System.Action`1<System.UInt32>
struct Action_1_t1951481403;
// System.Action`1<System.UInt64>
struct Action_1_t2710996296;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Serve3054640078.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_WebSo2935910988.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H2223360553.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H2661820989.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Compr4066553457.h"
#include "System_System_Uri19570940.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Close2945181741.h"
#include "System_System_Net_Sockets_TcpClient408947970.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_Se204724213.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Logge2598199114.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_ByteOr469806806.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Opcod2313788840.h"
#include "System_System_Collections_Specialized_NameValueCol3047564564.h"
#include "mscorlib_System_EventHandler277755526.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_EventArgs3289624707.h"
#include "System_System_Net_IPAddress1399971723.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Net_H2316381291.h"

// System.Byte[] WebSocketSharp.Ext::compress(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* Ext_compress_m1508856676 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MemoryStream WebSocketSharp.Ext::compress(System.IO.Stream)
extern "C"  MemoryStream_t743994179 * Ext_compress_m740090851 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::compressToArray(System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* Ext_compressToArray_m2442033848 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::decompress(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* Ext_decompress_m3145259279 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MemoryStream WebSocketSharp.Ext::decompress(System.IO.Stream)
extern "C"  MemoryStream_t743994179 * Ext_decompress_m2273480916 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::decompressToArray(System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* Ext_decompressToArray_m3665474285 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::times(System.UInt64,System.Action)
extern "C"  void Ext_times_m4194176735 (Il2CppObject * __this /* static, unused */, uint64_t ___n0, Action_t3226471752 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::Append(System.UInt16,System.String)
extern "C"  ByteU5BU5D_t3397334013* Ext_Append_m1444843273 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfAvailable(WebSocketSharp.Server.ServerState,System.Boolean,System.Boolean,System.Boolean)
extern "C"  String_t* Ext_CheckIfAvailable_m2121787939 (Il2CppObject * __this /* static, unused */, int32_t ___state0, bool ___ready1, bool ___start2, bool ___shutting3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfAvailable(WebSocketSharp.WebSocketState,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  String_t* Ext_CheckIfAvailable_m1388053315 (Il2CppObject * __this /* static, unused */, uint16_t ___state0, bool ___connecting1, bool ___open2, bool ___closing3, bool ___closed4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfValidProtocols(System.String[])
extern "C"  String_t* Ext_CheckIfValidProtocols_m2156914408 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___protocols0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfValidServicePath(System.String)
extern "C"  String_t* Ext_CheckIfValidServicePath_m1919465663 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfValidSessionID(System.String)
extern "C"  String_t* Ext_CheckIfValidSessionID_m3794563084 (Il2CppObject * __this /* static, unused */, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfValidWaitTime(System.TimeSpan)
extern "C"  String_t* Ext_CheckIfValidWaitTime_m2676762953 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::CheckWaitTime(System.TimeSpan,System.String&)
extern "C"  bool Ext_CheckWaitTime_m1387532529 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___time0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Close(WebSocketSharp.Net.HttpListenerResponse,WebSocketSharp.Net.HttpStatusCode)
extern "C"  void Ext_Close_m1429983589 (Il2CppObject * __this /* static, unused */, HttpListenerResponse_t2223360553 * ___response0, int32_t ___code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::CloseWithAuthChallenge(WebSocketSharp.Net.HttpListenerResponse,System.String)
extern "C"  void Ext_CloseWithAuthChallenge_m330076481 (Il2CppObject * __this /* static, unused */, HttpListenerResponse_t2223360553 * ___response0, String_t* ___challenge1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::Compress(System.Byte[],WebSocketSharp.CompressionMethod)
extern "C"  ByteU5BU5D_t3397334013* Ext_Compress_m1351261138 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream WebSocketSharp.Ext::Compress(System.IO.Stream,WebSocketSharp.CompressionMethod)
extern "C"  Stream_t3255436806 * Ext_Compress_m1420207648 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::CompressToArray(System.IO.Stream,WebSocketSharp.CompressionMethod)
extern "C"  ByteU5BU5D_t3397334013* Ext_CompressToArray_m257184090 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::ContainsTwice(System.String[])
extern "C"  bool Ext_ContainsTwice_m2551967866 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::CopyTo(System.IO.Stream,System.IO.Stream,System.Int32)
extern "C"  void Ext_CopyTo_m1598549978 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, Stream_t3255436806 * ___destination1, int32_t ___bufferLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::CopyToAsync(System.IO.Stream,System.IO.Stream,System.Int32,System.Action,System.Action`1<System.Exception>)
extern "C"  void Ext_CopyToAsync_m3026119593 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, Stream_t3255436806 * ___destination1, int32_t ___bufferLength2, Action_t3226471752 * ___completed3, Action_1_t1729240069 * ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::Decompress(System.Byte[],WebSocketSharp.CompressionMethod)
extern "C"  ByteU5BU5D_t3397334013* Ext_Decompress_m3018469461 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream WebSocketSharp.Ext::Decompress(System.IO.Stream,WebSocketSharp.CompressionMethod)
extern "C"  Stream_t3255436806 * Ext_Decompress_m2354130473 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::DecompressToArray(System.IO.Stream,WebSocketSharp.CompressionMethod)
extern "C"  ByteU5BU5D_t3397334013* Ext_DecompressToArray_m3281630711 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::EqualsWith(System.Int32,System.Char,System.Action`1<System.Int32>)
extern "C"  bool Ext_EqualsWith_m248500191 (Il2CppObject * __this /* static, unused */, int32_t ___value0, Il2CppChar ___c1, Action_1_t1873676830 * ___action2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetAbsolutePath(System.Uri)
extern "C"  String_t* Ext_GetAbsolutePath_m3680984971 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetMessage(WebSocketSharp.CloseStatusCode)
extern "C"  String_t* Ext_GetMessage_m312134039 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetName(System.String,System.Char)
extern "C"  String_t* Ext_GetName_m3175539550 (Il2CppObject * __this /* static, unused */, String_t* ___nameAndValue0, Il2CppChar ___separator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetValue(System.String,System.Char)
extern "C"  String_t* Ext_GetValue_m4183838218 (Il2CppObject * __this /* static, unused */, String_t* ___nameAndValue0, Il2CppChar ___separator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetValue(System.String,System.Char,System.Boolean)
extern "C"  String_t* Ext_GetValue_m3678109353 (Il2CppObject * __this /* static, unused */, String_t* ___nameAndValue0, Il2CppChar ___separator1, bool ___unquote2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext WebSocketSharp.Ext::GetWebSocketContext(System.Net.Sockets.TcpClient,System.String,System.Boolean,WebSocketSharp.Net.ServerSslConfiguration,WebSocketSharp.Logger)
extern "C"  TcpListenerWebSocketContext_t1695227117 * Ext_GetWebSocketContext_m2190072326 (Il2CppObject * __this /* static, unused */, TcpClient_t408947970 * ___tcpClient0, String_t* ___protocol1, bool ___secure2, ServerSslConfiguration_t204724213 * ___sslConfig3, Logger_t2598199114 * ___logger4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::InternalToByteArray(System.UInt16,WebSocketSharp.ByteOrder)
extern "C"  ByteU5BU5D_t3397334013* Ext_InternalToByteArray_m3379090877 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, int32_t ___order1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::InternalToByteArray(System.UInt64,WebSocketSharp.ByteOrder)
extern "C"  ByteU5BU5D_t3397334013* Ext_InternalToByteArray_m3816870370 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, int32_t ___order1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsCompressionExtension(System.String,WebSocketSharp.CompressionMethod)
extern "C"  bool Ext_IsCompressionExtension_m4179638384 (Il2CppObject * __this /* static, unused */, String_t* ___value0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsControl(System.Byte)
extern "C"  bool Ext_IsControl_m1647575267 (Il2CppObject * __this /* static, unused */, uint8_t ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsControl(WebSocketSharp.Opcode)
extern "C"  bool Ext_IsControl_m1473559739 (Il2CppObject * __this /* static, unused */, uint8_t ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsData(System.Byte)
extern "C"  bool Ext_IsData_m2057691398 (Il2CppObject * __this /* static, unused */, uint8_t ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsData(WebSocketSharp.Opcode)
extern "C"  bool Ext_IsData_m1772550358 (Il2CppObject * __this /* static, unused */, uint8_t ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsPortNumber(System.Int32)
extern "C"  bool Ext_IsPortNumber_m1628029348 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsReserved(System.UInt16)
extern "C"  bool Ext_IsReserved_m757833551 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsReserved(WebSocketSharp.CloseStatusCode)
extern "C"  bool Ext_IsReserved_m1040310797 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsSupported(System.Byte)
extern "C"  bool Ext_IsSupported_m2320895632 (Il2CppObject * __this /* static, unused */, uint8_t ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsText(System.String)
extern "C"  bool Ext_IsText_m2155577278 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsToken(System.String)
extern "C"  bool Ext_IsToken_m1831488760 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::Quote(System.String)
extern "C"  String_t* Ext_Quote_m3385933936 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::ReadBytes(System.IO.Stream,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Ext_ReadBytes_m3948545436 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::ReadBytes(System.IO.Stream,System.Int64,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Ext_ReadBytes_m1281071532 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, int64_t ___length1, int32_t ___bufferLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::ReadBytesAsync(System.IO.Stream,System.Int32,System.Action`1<System.Byte[]>,System.Action`1<System.Exception>)
extern "C"  void Ext_ReadBytesAsync_m3841979495 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, int32_t ___length1, Action_1_t3199133395 * ___completed2, Action_1_t1729240069 * ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::ReadBytesAsync(System.IO.Stream,System.Int64,System.Int32,System.Action`1<System.Byte[]>,System.Action`1<System.Exception>)
extern "C"  void Ext_ReadBytesAsync_m384663941 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, int64_t ___length1, int32_t ___bufferLength2, Action_1_t3199133395 * ___completed3, Action_1_t1729240069 * ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::RemovePrefix(System.String,System.String[])
extern "C"  String_t* Ext_RemovePrefix_m37644786 (Il2CppObject * __this /* static, unused */, String_t* ___value0, StringU5BU5D_t1642385972* ___prefixes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Ext::SplitHeaderValue(System.String,System.Char[])
extern "C"  Il2CppObject* Ext_SplitHeaderValue_m4281780182 (Il2CppObject * __this /* static, unused */, String_t* ___value0, CharU5BU5D_t1328083999* ___separators1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::ToByteArray(System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* Ext_ToByteArray_m995718170 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.CompressionMethod WebSocketSharp.Ext::ToCompressionMethod(System.String)
extern "C"  uint8_t Ext_ToCompressionMethod_m3267425622 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::ToExtensionString(WebSocketSharp.CompressionMethod,System.String[])
extern "C"  String_t* Ext_ToExtensionString_m3396408543 (Il2CppObject * __this /* static, unused */, uint8_t ___method0, StringU5BU5D_t1642385972* ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress WebSocketSharp.Ext::ToIPAddress(System.String)
extern "C"  IPAddress_t1399971723 * Ext_ToIPAddress_m2366798559 (Il2CppObject * __this /* static, unused */, String_t* ___hostnameOrAddress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 WebSocketSharp.Ext::ToUInt16(System.Byte[],WebSocketSharp.ByteOrder)
extern "C"  uint16_t Ext_ToUInt16_m827441416 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___source0, int32_t ___sourceOrder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 WebSocketSharp.Ext::ToUInt64(System.Byte[],WebSocketSharp.ByteOrder)
extern "C"  uint64_t Ext_ToUInt64_m3363036542 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___source0, int32_t ___sourceOrder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::TrimEndSlash(System.String)
extern "C"  String_t* Ext_TrimEndSlash_m1896378320 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::TryCreateWebSocketUri(System.String,System.Uri&,System.String&)
extern "C"  bool Ext_TryCreateWebSocketUri_m155661426 (Il2CppObject * __this /* static, unused */, String_t* ___uriString0, Uri_t19570940 ** ___result1, String_t** ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::Unquote(System.String)
extern "C"  String_t* Ext_Unquote_m2572242601 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::UTF8Decode(System.Byte[])
extern "C"  String_t* Ext_UTF8Decode_m2910070144 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::UTF8Encode(System.String)
extern "C"  ByteU5BU5D_t3397334013* Ext_UTF8Encode_m1253170030 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::WriteBytes(System.IO.Stream,System.Byte[],System.Int32)
extern "C"  void Ext_WriteBytes_m2092950392 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, ByteU5BU5D_t3397334013* ___bytes1, int32_t ___bufferLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::WriteBytesAsync(System.IO.Stream,System.Byte[],System.Int32,System.Action,System.Action`1<System.Exception>)
extern "C"  void Ext_WriteBytesAsync_m4088742495 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, ByteU5BU5D_t3397334013* ___bytes1, int32_t ___bufferLength2, Action_t3226471752 * ___completed3, Action_1_t1729240069 * ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::Contains(System.String,System.Char[])
extern "C"  bool Ext_Contains_m4114176947 (Il2CppObject * __this /* static, unused */, String_t* ___value0, CharU5BU5D_t1328083999* ___chars1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::Contains(System.Collections.Specialized.NameValueCollection,System.String)
extern "C"  bool Ext_Contains_m1023559861 (Il2CppObject * __this /* static, unused */, NameValueCollection_t3047564564 * ___collection0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::Contains(System.Collections.Specialized.NameValueCollection,System.String,System.String)
extern "C"  bool Ext_Contains_m967912967 (Il2CppObject * __this /* static, unused */, NameValueCollection_t3047564564 * ___collection0, String_t* ___name1, String_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Emit(System.EventHandler,System.Object,System.EventArgs)
extern "C"  void Ext_Emit_m3721813243 (Il2CppObject * __this /* static, unused */, EventHandler_t277755526 * ___eventHandler0, Il2CppObject * ___sender1, EventArgs_t3289624707 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Ext::GetCookies(System.Collections.Specialized.NameValueCollection,System.Boolean)
extern "C"  CookieCollection_t4248997468 * Ext_GetCookies_m2912825717 (Il2CppObject * __this /* static, unused */, NameValueCollection_t3047564564 * ___headers0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetDescription(WebSocketSharp.Net.HttpStatusCode)
extern "C"  String_t* Ext_GetDescription_m542703913 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetStatusDescription(System.Int32)
extern "C"  String_t* Ext_GetStatusDescription_m1464306583 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsCloseStatusCode(System.UInt16)
extern "C"  bool Ext_IsCloseStatusCode_m3223948952 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsEnclosedIn(System.String,System.Char)
extern "C"  bool Ext_IsEnclosedIn_m3335044352 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppChar ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsHostOrder(WebSocketSharp.ByteOrder)
extern "C"  bool Ext_IsHostOrder_m383700898 (Il2CppObject * __this /* static, unused */, int32_t ___order0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsLocal(System.Net.IPAddress)
extern "C"  bool Ext_IsLocal_m1417774893 (Il2CppObject * __this /* static, unused */, IPAddress_t1399971723 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsNullOrEmpty(System.String)
extern "C"  bool Ext_IsNullOrEmpty_m53377888 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsPredefinedScheme(System.String)
extern "C"  bool Ext_IsPredefinedScheme_m3870658312 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsUpgradeTo(WebSocketSharp.Net.HttpListenerRequest,System.String)
extern "C"  bool Ext_IsUpgradeTo_m1659425513 (Il2CppObject * __this /* static, unused */, HttpListenerRequest_t2316381291 * ___request0, String_t* ___protocol1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::MaybeUri(System.String)
extern "C"  bool Ext_MaybeUri_m1055527933 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.Int32,System.Action)
extern "C"  void Ext_Times_m2480351381 (Il2CppObject * __this /* static, unused */, int32_t ___n0, Action_t3226471752 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.Int64,System.Action)
extern "C"  void Ext_Times_m3188431586 (Il2CppObject * __this /* static, unused */, int64_t ___n0, Action_t3226471752 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.UInt32,System.Action)
extern "C"  void Ext_Times_m668714738 (Il2CppObject * __this /* static, unused */, uint32_t ___n0, Action_t3226471752 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.UInt64,System.Action)
extern "C"  void Ext_Times_m1709899775 (Il2CppObject * __this /* static, unused */, uint64_t ___n0, Action_t3226471752 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.Int32,System.Action`1<System.Int32>)
extern "C"  void Ext_Times_m312082927 (Il2CppObject * __this /* static, unused */, int32_t ___n0, Action_1_t1873676830 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.Int64,System.Action`1<System.Int64>)
extern "C"  void Ext_Times_m4089876259 (Il2CppObject * __this /* static, unused */, int64_t ___n0, Action_1_t710877419 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.UInt32,System.Action`1<System.UInt32>)
extern "C"  void Ext_Times_m4157905171 (Il2CppObject * __this /* static, unused */, uint32_t ___n0, Action_1_t1951481403 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.UInt64,System.Action`1<System.UInt64>)
extern "C"  void Ext_Times_m4037456243 (Il2CppObject * __this /* static, unused */, uint64_t ___n0, Action_1_t2710996296 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::ToHostOrder(System.Byte[],WebSocketSharp.ByteOrder)
extern "C"  ByteU5BU5D_t3397334013* Ext_ToHostOrder_m3948371228 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___source0, int32_t ___sourceOrder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.Ext::ToUri(System.String)
extern "C"  Uri_t19570940 * Ext_ToUri_m463382998 (Il2CppObject * __this /* static, unused */, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::UrlDecode(System.String)
extern "C"  String_t* Ext_UrlDecode_m1843217531 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::UrlEncode(System.String)
extern "C"  String_t* Ext_UrlEncode_m846543165 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::WriteContent(WebSocketSharp.Net.HttpListenerResponse,System.Byte[])
extern "C"  void Ext_WriteContent_m3416727507 (Il2CppObject * __this /* static, unused */, HttpListenerResponse_t2223360553 * ___response0, ByteU5BU5D_t3397334013* ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::.cctor()
extern "C"  void Ext__cctor_m3318598420 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::<CheckIfValidProtocols>m__0(System.String)
extern "C"  bool Ext_U3CCheckIfValidProtocolsU3Em__0_m1251237492 (Il2CppObject * __this /* static, unused */, String_t* ___protocol0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
