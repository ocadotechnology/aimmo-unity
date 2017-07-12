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

// WebSocketSharp.WebSocketFrame
struct WebSocketFrame_t764750278;
// WebSocketSharp.PayloadData
struct PayloadData_t3839327312;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t3255436806;
// System.Action`1<WebSocketSharp.WebSocketFrame>
struct Action_1_t566549660;
// System.Action`1<System.Exception>
struct Action_1_t1729240069;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t1158628263;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Opcod2313788840.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Paylo3839327312.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Fin2752139063.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Mask1111889066.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Rsv1058189029.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_WebSoc764750278.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void WebSocketSharp.WebSocketFrame::.cctor()
extern "C"  void WebSocketFrame__cctor_m218763889 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::.ctor()
extern "C"  void WebSocketFrame__ctor_m2230605986 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Opcode,WebSocketSharp.PayloadData,System.Boolean)
extern "C"  void WebSocketFrame__ctor_m2134668109 (WebSocketFrame_t764750278 * __this, uint8_t ___opcode0, PayloadData_t3839327312 * ___payloadData1, bool ___mask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Fin,WebSocketSharp.Opcode,System.Byte[],System.Boolean,System.Boolean)
extern "C"  void WebSocketFrame__ctor_m3662806910 (WebSocketFrame_t764750278 * __this, uint8_t ___fin0, uint8_t ___opcode1, ByteU5BU5D_t3397334013* ___data2, bool ___compressed3, bool ___mask4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Fin,WebSocketSharp.Opcode,WebSocketSharp.PayloadData,System.Boolean,System.Boolean)
extern "C"  void WebSocketFrame__ctor_m504648868 (WebSocketFrame_t764750278 * __this, uint8_t ___fin0, uint8_t ___opcode1, PayloadData_t3839327312 * ___payloadData2, bool ___compressed3, bool ___mask4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.WebSocketFrame::get_ExtendedPayloadLengthCount()
extern "C"  int32_t WebSocketFrame_get_ExtendedPayloadLengthCount_m2965360263 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 WebSocketSharp.WebSocketFrame::get_FullPayloadLength()
extern "C"  uint64_t WebSocketFrame_get_FullPayloadLength_m420277124 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.WebSocketFrame::get_ExtendedPayloadLength()
extern "C"  ByteU5BU5D_t3397334013* WebSocketFrame_get_ExtendedPayloadLength_m4088141680 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Fin WebSocketSharp.WebSocketFrame::get_Fin()
extern "C"  uint8_t WebSocketFrame_get_Fin_m1387271771 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsBinary()
extern "C"  bool WebSocketFrame_get_IsBinary_m3270530210 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsClose()
extern "C"  bool WebSocketFrame_get_IsClose_m4107685055 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsCompressed()
extern "C"  bool WebSocketFrame_get_IsCompressed_m3450626514 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsContinuation()
extern "C"  bool WebSocketFrame_get_IsContinuation_m2678308964 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsControl()
extern "C"  bool WebSocketFrame_get_IsControl_m3964591986 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsData()
extern "C"  bool WebSocketFrame_get_IsData_m2458948765 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsFinal()
extern "C"  bool WebSocketFrame_get_IsFinal_m704658101 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsFragment()
extern "C"  bool WebSocketFrame_get_IsFragment_m573658653 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsMasked()
extern "C"  bool WebSocketFrame_get_IsMasked_m4261125726 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsPing()
extern "C"  bool WebSocketFrame_get_IsPing_m2287331425 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsPong()
extern "C"  bool WebSocketFrame_get_IsPong_m911979071 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsText()
extern "C"  bool WebSocketFrame_get_IsText_m2282753620 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 WebSocketSharp.WebSocketFrame::get_Length()
extern "C"  uint64_t WebSocketFrame_get_Length_m1428611059 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Mask WebSocketSharp.WebSocketFrame::get_Mask()
extern "C"  uint8_t WebSocketFrame_get_Mask_m3897922471 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.WebSocketFrame::get_MaskingKey()
extern "C"  ByteU5BU5D_t3397334013* WebSocketFrame_get_MaskingKey_m1885597058 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Opcode WebSocketSharp.WebSocketFrame::get_Opcode()
extern "C"  uint8_t WebSocketFrame_get_Opcode_m371196455 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.PayloadData WebSocketSharp.WebSocketFrame::get_PayloadData()
extern "C"  PayloadData_t3839327312 * WebSocketFrame_get_PayloadData_m2423162815 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte WebSocketSharp.WebSocketFrame::get_PayloadLength()
extern "C"  uint8_t WebSocketFrame_get_PayloadLength_m4290902987 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::get_Rsv1()
extern "C"  uint8_t WebSocketFrame_get_Rsv1_m1862649642 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::get_Rsv2()
extern "C"  uint8_t WebSocketFrame_get_Rsv2_m3126205605 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::get_Rsv3()
extern "C"  uint8_t WebSocketFrame_get_Rsv3_m1580324640 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.WebSocketFrame::createMaskingKey()
extern "C"  ByteU5BU5D_t3397334013* WebSocketFrame_createMaskingKey_m2299285409 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocketFrame::dump(WebSocketSharp.WebSocketFrame)
extern "C"  String_t* WebSocketFrame_dump_m1889696358 (Il2CppObject * __this /* static, unused */, WebSocketFrame_t764750278 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocketFrame::print(WebSocketSharp.WebSocketFrame)
extern "C"  String_t* WebSocketFrame_print_m2405873941 (Il2CppObject * __this /* static, unused */, WebSocketFrame_t764750278 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::processHeader(System.Byte[])
extern "C"  WebSocketFrame_t764750278 * WebSocketFrame_processHeader_m546770133 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::readExtendedPayloadLength(System.IO.Stream,WebSocketSharp.WebSocketFrame)
extern "C"  WebSocketFrame_t764750278 * WebSocketFrame_readExtendedPayloadLength_m1335580385 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, WebSocketFrame_t764750278 * ___frame1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::readExtendedPayloadLengthAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
extern "C"  void WebSocketFrame_readExtendedPayloadLengthAsync_m3809788612 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, WebSocketFrame_t764750278 * ___frame1, Action_1_t566549660 * ___completed2, Action_1_t1729240069 * ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::readHeader(System.IO.Stream)
extern "C"  WebSocketFrame_t764750278 * WebSocketFrame_readHeader_m3088393836 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::readHeaderAsync(System.IO.Stream,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
extern "C"  void WebSocketFrame_readHeaderAsync_m1921883229 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, Action_1_t566549660 * ___completed1, Action_1_t1729240069 * ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::readMaskingKey(System.IO.Stream,WebSocketSharp.WebSocketFrame)
extern "C"  WebSocketFrame_t764750278 * WebSocketFrame_readMaskingKey_m3467254827 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, WebSocketFrame_t764750278 * ___frame1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::readMaskingKeyAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
extern "C"  void WebSocketFrame_readMaskingKeyAsync_m3741103916 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, WebSocketFrame_t764750278 * ___frame1, Action_1_t566549660 * ___completed2, Action_1_t1729240069 * ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::readPayloadData(System.IO.Stream,WebSocketSharp.WebSocketFrame)
extern "C"  WebSocketFrame_t764750278 * WebSocketFrame_readPayloadData_m4125370454 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, WebSocketFrame_t764750278 * ___frame1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::readPayloadDataAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
extern "C"  void WebSocketFrame_readPayloadDataAsync_m488042859 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, WebSocketFrame_t764750278 * ___frame1, Action_1_t566549660 * ___completed2, Action_1_t1729240069 * ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::CreateCloseFrame(WebSocketSharp.PayloadData,System.Boolean)
extern "C"  WebSocketFrame_t764750278 * WebSocketFrame_CreateCloseFrame_m2074470315 (Il2CppObject * __this /* static, unused */, PayloadData_t3839327312 * ___payloadData0, bool ___mask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::CreatePingFrame(System.Boolean)
extern "C"  WebSocketFrame_t764750278 * WebSocketFrame_CreatePingFrame_m3305713196 (Il2CppObject * __this /* static, unused */, bool ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::CreatePingFrame(System.Byte[],System.Boolean)
extern "C"  WebSocketFrame_t764750278 * WebSocketFrame_CreatePingFrame_m1427309519 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, bool ___mask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::ReadFrame(System.IO.Stream,System.Boolean)
extern "C"  WebSocketFrame_t764750278 * WebSocketFrame_ReadFrame_m4159096645 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, bool ___unmask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::ReadFrameAsync(System.IO.Stream,System.Boolean,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
extern "C"  void WebSocketFrame_ReadFrameAsync_m1631297688 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, bool ___unmask1, Action_1_t566549660 * ___completed2, Action_1_t1729240069 * ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::Unmask()
extern "C"  void WebSocketFrame_Unmask_m1391052517 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Byte> WebSocketSharp.WebSocketFrame::GetEnumerator()
extern "C"  Il2CppObject* WebSocketFrame_GetEnumerator_m1177635999 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::Print(System.Boolean)
extern "C"  void WebSocketFrame_Print_m3415747392 (WebSocketFrame_t764750278 * __this, bool ___dumped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocketFrame::PrintToString(System.Boolean)
extern "C"  String_t* WebSocketFrame_PrintToString_m1599519539 (WebSocketFrame_t764750278 * __this, bool ___dumped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.WebSocketFrame::ToArray()
extern "C"  ByteU5BU5D_t3397334013* WebSocketFrame_ToArray_m1666312052 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocketFrame::ToString()
extern "C"  String_t* WebSocketFrame_ToString_m40491557 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WebSocketSharp.WebSocketFrame::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * WebSocketFrame_System_Collections_IEnumerable_GetEnumerator_m3259213259 (WebSocketFrame_t764750278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
