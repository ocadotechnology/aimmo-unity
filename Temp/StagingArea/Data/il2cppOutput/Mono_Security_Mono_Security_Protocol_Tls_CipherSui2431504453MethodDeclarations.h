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

// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t2431504453;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t491456551;
// System.String
struct String_t;
// System.Array
struct Il2CppArray;
// Mono.Security.Protocol.Tls.TlsCipherSuite
struct TlsCipherSuite_t396038680;
// Mono.Security.Protocol.Tls.SslCipherSuite
struct SslCipherSuite_t1404755603;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityPr155967584.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuit491456551.h"
#include "mscorlib_System_Array3829468939.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlg4212518094.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgor1654661965.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAl954949548.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsCipherS396038680.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslCipher1404755603.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::.ctor(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C"  void CipherSuiteCollection__ctor_m2154226461 (CipherSuiteCollection_t2431504453 * __this, int32_t ___protocol0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * CipherSuiteCollection_System_Collections_IList_get_Item_m218755780 (CipherSuiteCollection_t2431504453 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void CipherSuiteCollection_System_Collections_IList_set_Item_m750275607 (CipherSuiteCollection_t2431504453 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * CipherSuiteCollection_System_Collections_ICollection_get_SyncRoot_m2818114049 (CipherSuiteCollection_t2431504453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * CipherSuiteCollection_System_Collections_IEnumerable_GetEnumerator_m1600967134 (CipherSuiteCollection_t2431504453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Contains(System.Object)
extern "C"  bool CipherSuiteCollection_System_Collections_IList_Contains_m3239163601 (CipherSuiteCollection_t2431504453 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t CipherSuiteCollection_System_Collections_IList_IndexOf_m540536407 (CipherSuiteCollection_t2431504453 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void CipherSuiteCollection_System_Collections_IList_Insert_m3923805048 (CipherSuiteCollection_t2431504453 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Remove(System.Object)
extern "C"  void CipherSuiteCollection_System_Collections_IList_Remove_m4022085178 (CipherSuiteCollection_t2431504453 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.RemoveAt(System.Int32)
extern "C"  void CipherSuiteCollection_System_Collections_IList_RemoveAt_m143866082 (CipherSuiteCollection_t2431504453 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Add(System.Object)
extern "C"  int32_t CipherSuiteCollection_System_Collections_IList_Add_m2644442861 (CipherSuiteCollection_t2431504453 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.String)
extern "C"  CipherSuite_t491456551 * CipherSuiteCollection_get_Item_m3667070847 (CipherSuiteCollection_t2431504453 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.Int32)
extern "C"  CipherSuite_t491456551 * CipherSuiteCollection_get_Item_m280627160 (CipherSuiteCollection_t2431504453 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::set_Item(System.Int32,Mono.Security.Protocol.Tls.CipherSuite)
extern "C"  void CipherSuiteCollection_set_Item_m1064755671 (CipherSuiteCollection_t2431504453 * __this, int32_t ___index0, CipherSuite_t491456551 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.Int16)
extern "C"  CipherSuite_t491456551 * CipherSuiteCollection_get_Item_m2606225922 (CipherSuiteCollection_t2431504453 * __this, int16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Count()
extern "C"  int32_t CipherSuiteCollection_get_Count_m1700100413 (CipherSuiteCollection_t2431504453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::CopyTo(System.Array,System.Int32)
extern "C"  void CipherSuiteCollection_CopyTo_m869893074 (CipherSuiteCollection_t2431504453 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::Clear()
extern "C"  void CipherSuiteCollection_Clear_m533808424 (CipherSuiteCollection_t2431504453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::IndexOf(System.String)
extern "C"  int32_t CipherSuiteCollection_IndexOf_m204129362 (CipherSuiteCollection_t2431504453 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::IndexOf(System.Int16)
extern "C"  int32_t CipherSuiteCollection_IndexOf_m4089218779 (CipherSuiteCollection_t2431504453 * __this, int16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::Add(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern "C"  CipherSuite_t491456551 * CipherSuiteCollection_Add_m3114709461 (CipherSuiteCollection_t2431504453 * __this, int16_t ___code0, String_t* ___name1, int32_t ___cipherType2, int32_t ___hashType3, int32_t ___exchangeType4, bool ___exportable5, bool ___blockMode6, uint8_t ___keyMaterialSize7, uint8_t ___expandedKeyMaterialSize8, int16_t ___effectiveKeyBytes9, uint8_t ___ivSize10, uint8_t ___blockSize11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsCipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::add(Mono.Security.Protocol.Tls.TlsCipherSuite)
extern "C"  TlsCipherSuite_t396038680 * CipherSuiteCollection_add_m2465397903 (CipherSuiteCollection_t2431504453 * __this, TlsCipherSuite_t396038680 * ___cipherSuite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SslCipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::add(Mono.Security.Protocol.Tls.SslCipherSuite)
extern "C"  SslCipherSuite_t1404755603 * CipherSuiteCollection_add_m513562767 (CipherSuiteCollection_t2431504453 * __this, SslCipherSuite_t1404755603 * ___cipherSuite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::cultureAwareCompare(System.String,System.String)
extern "C"  bool CipherSuiteCollection_cultureAwareCompare_m1825407448 (CipherSuiteCollection_t2431504453 * __this, String_t* ___strA0, String_t* ___strB1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
