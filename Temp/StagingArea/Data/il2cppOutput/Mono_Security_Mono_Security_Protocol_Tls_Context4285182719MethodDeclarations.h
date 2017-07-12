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

// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t403340211;
// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t2311449551;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t2431504453;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t4089752859;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t3166895267;
// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t2290372928;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityPr155967584.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityC3722381418.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2540099417.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake1820731088.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSui2431504453.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RecordPro3166895267.h"

// System.Void Mono.Security.Protocol.Tls.Context::.ctor(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C"  void Context__ctor_m3963941463 (Context_t4285182719 * __this, int32_t ___securityProtocolType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_AbbreviatedHandshake()
extern "C"  bool Context_get_AbbreviatedHandshake_m2972837690 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_AbbreviatedHandshake(System.Boolean)
extern "C"  void Context_set_AbbreviatedHandshake_m4080371327 (Context_t4285182719 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ProtocolNegotiated()
extern "C"  bool Context_get_ProtocolNegotiated_m624488778 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ProtocolNegotiated(System.Boolean)
extern "C"  void Context_set_ProtocolNegotiated_m1177527245 (Context_t4285182719 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocol()
extern "C"  int32_t Context_get_SecurityProtocol_m1600902905 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SecurityProtocol(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C"  void Context_set_SecurityProtocol_m4153223312 (Context_t4285182719 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocolFlags()
extern "C"  int32_t Context_get_SecurityProtocolFlags_m3295551796 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.Context::get_Protocol()
extern "C"  int16_t Context_get_Protocol_m1537476188 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_SessionId()
extern "C"  ByteU5BU5D_t3397334013* Context_get_SessionId_m1296338025 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SessionId(System.Byte[])
extern "C"  void Context_set_SessionId_m1229908268 (Context_t4285182719 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Context::get_CompressionMethod()
extern "C"  int32_t Context_get_CompressionMethod_m1938328556 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_CompressionMethod(Mono.Security.Protocol.Tls.SecurityCompressionType)
extern "C"  void Context_set_CompressionMethod_m2848483559 (Context_t4285182719 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsServerSettings Mono.Security.Protocol.Tls.Context::get_ServerSettings()
extern "C"  TlsServerSettings_t403340211 * Context_get_ServerSettings_m225713600 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsClientSettings Mono.Security.Protocol.Tls.Context::get_ClientSettings()
extern "C"  TlsClientSettings_t2311449551 * Context_get_ClientSettings_m1185615112 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Context::get_LastHandshakeMsg()
extern "C"  uint8_t Context_get_LastHandshakeMsg_m873777031 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_LastHandshakeMsg(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  void Context_set_LastHandshakeMsg_m3162558586 (Context_t4285182719 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HandshakeState Mono.Security.Protocol.Tls.Context::get_HandshakeState()
extern "C"  int32_t Context_get_HandshakeState_m3443153737 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_HandshakeState(Mono.Security.Protocol.Tls.HandshakeState)
extern "C"  void Context_set_HandshakeState_m1586089840 (Context_t4285182719 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ReceivedConnectionEnd()
extern "C"  bool Context_get_ReceivedConnectionEnd_m3369356276 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReceivedConnectionEnd(System.Boolean)
extern "C"  void Context_set_ReceivedConnectionEnd_m213831275 (Context_t4285182719 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_SentConnectionEnd()
extern "C"  bool Context_get_SentConnectionEnd_m3114190867 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SentConnectionEnd(System.Boolean)
extern "C"  void Context_set_SentConnectionEnd_m2641458842 (Context_t4285182719 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.Context::get_SupportedCiphers()
extern "C"  CipherSuiteCollection_t2431504453 * Context_get_SupportedCiphers_m2172827298 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SupportedCiphers(Mono.Security.Protocol.Tls.CipherSuiteCollection)
extern "C"  void Context_set_SupportedCiphers_m3994965527 (Context_t4285182719 * __this, CipherSuiteCollection_t2431504453 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsStream Mono.Security.Protocol.Tls.Context::get_HandshakeMessages()
extern "C"  TlsStream_t4089752859 * Context_get_HandshakeMessages_m2765912589 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_WriteSequenceNumber()
extern "C"  uint64_t Context_get_WriteSequenceNumber_m243492531 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_WriteSequenceNumber(System.UInt64)
extern "C"  void Context_set_WriteSequenceNumber_m3356252710 (Context_t4285182719 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_ReadSequenceNumber()
extern "C"  uint64_t Context_get_ReadSequenceNumber_m2586681610 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReadSequenceNumber(System.UInt64)
extern "C"  void Context_set_ReadSequenceNumber_m3303454459 (Context_t4285182719 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientRandom()
extern "C"  ByteU5BU5D_t3397334013* Context_get_ClientRandom_m697914474 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientRandom(System.Byte[])
extern "C"  void Context_set_ClientRandom_m631392719 (Context_t4285182719 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerRandom()
extern "C"  ByteU5BU5D_t3397334013* Context_get_ServerRandom_m3526559022 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerRandom(System.Byte[])
extern "C"  void Context_set_ServerRandom_m173601139 (Context_t4285182719 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomCS()
extern "C"  ByteU5BU5D_t3397334013* Context_get_RandomCS_m3946020109 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomCS(System.Byte[])
extern "C"  void Context_set_RandomCS_m2334825038 (Context_t4285182719 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomSC()
extern "C"  ByteU5BU5D_t3397334013* Context_get_RandomSC_m1687420621 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomSC(System.Byte[])
extern "C"  void Context_set_RandomSC_m2057392782 (Context_t4285182719 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_MasterSecret()
extern "C"  ByteU5BU5D_t3397334013* Context_get_MasterSecret_m231851308 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_MasterSecret(System.Byte[])
extern "C"  void Context_set_MasterSecret_m1422386411 (Context_t4285182719 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteKey()
extern "C"  ByteU5BU5D_t3397334013* Context_get_ClientWriteKey_m2235605337 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteKey(System.Byte[])
extern "C"  void Context_set_ClientWriteKey_m1137238126 (Context_t4285182719 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteKey()
extern "C"  ByteU5BU5D_t3397334013* Context_get_ServerWriteKey_m1780148437 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteKey(System.Byte[])
extern "C"  void Context_set_ServerWriteKey_m2317745418 (Context_t4285182719 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteIV()
extern "C"  ByteU5BU5D_t3397334013* Context_get_ClientWriteIV_m2171757117 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteIV(System.Byte[])
extern "C"  void Context_set_ClientWriteIV_m70615452 (Context_t4285182719 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteIV()
extern "C"  ByteU5BU5D_t3397334013* Context_get_ServerWriteIV_m2960700649 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteIV(System.Byte[])
extern "C"  void Context_set_ServerWriteIV_m3391477120 (Context_t4285182719 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.Context::get_RecordProtocol()
extern "C"  RecordProtocol_t3166895267 * Context_get_RecordProtocol_m1527823481 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RecordProtocol(Mono.Security.Protocol.Tls.RecordProtocol)
extern "C"  void Context_set_RecordProtocol_m1968834768 (Context_t4285182719 * __this, RecordProtocol_t3166895267 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.Context::GetUnixTime()
extern "C"  int32_t Context_GetUnixTime_m3777795180 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::GetSecureRandomBytes(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Context_GetSecureRandomBytes_m1065353673 (Context_t4285182719 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::Clear()
extern "C"  void Context_Clear_m4000337070 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ClearKeyInfo()
extern "C"  void Context_ClearKeyInfo_m205678623 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::DecodeProtocolCode(System.Int16)
extern "C"  int32_t Context_DecodeProtocolCode_m4051353560 (Context_t4285182719 * __this, int16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ChangeProtocol(System.Int16)
extern "C"  void Context_ChangeProtocol_m46663628 (Context_t4285182719 * __this, int16_t ___protocol0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Current()
extern "C"  SecurityParameters_t2290372928 * Context_get_Current_m2717045324 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Negotiating()
extern "C"  SecurityParameters_t2290372928 * Context_get_Negotiating_m3946476110 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Read()
extern "C"  SecurityParameters_t2290372928 * Context_get_Read_m171585211 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Write()
extern "C"  SecurityParameters_t2290372928 * Context_get_Write_m2299361626 (Context_t4285182719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::StartSwitchingSecurityParameters(System.Boolean)
extern "C"  void Context_StartSwitchingSecurityParameters_m373522596 (Context_t4285182719 * __this, bool ___client0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::EndSwitchingSecurityParameters(System.Boolean)
extern "C"  void Context_EndSwitchingSecurityParameters_m1613076777 (Context_t4285182719 * __this, bool ___client0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
