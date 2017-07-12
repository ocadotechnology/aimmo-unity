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

// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t3637935872;
// System.Security.Cryptography.CspParameters
struct CspParameters_t46065560;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_CspParameters46065560.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters)
extern "C"  void KeyPairPersistence__ctor_m2662458254 (KeyPairPersistence_t3637935872 * __this, CspParameters_t46065560 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters,System.String)
extern "C"  void KeyPairPersistence__ctor_m1817312194 (KeyPairPersistence_t3637935872 * __this, CspParameters_t46065560 * ___parameters0, String_t* ___keyPair1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.cctor()
extern "C"  void KeyPairPersistence__cctor_m3956774456 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_Filename()
extern "C"  String_t* KeyPairPersistence_get_Filename_m152060602 (KeyPairPersistence_t3637935872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_KeyValue()
extern "C"  String_t* KeyPairPersistence_get_KeyValue_m140512119 (KeyPairPersistence_t3637935872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::set_KeyValue(System.String)
extern "C"  void KeyPairPersistence_set_KeyValue_m243780262 (KeyPairPersistence_t3637935872 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::Load()
extern "C"  bool KeyPairPersistence_Load_m1355205585 (KeyPairPersistence_t3637935872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Save()
extern "C"  void KeyPairPersistence_Save_m471726936 (KeyPairPersistence_t3637935872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Remove()
extern "C"  void KeyPairPersistence_Remove_m3188674989 (KeyPairPersistence_t3637935872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_UserPath()
extern "C"  String_t* KeyPairPersistence_get_UserPath_m3433052783 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_MachinePath()
extern "C"  String_t* KeyPairPersistence_get_MachinePath_m552408523 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_CanSecure(System.String)
extern "C"  bool KeyPairPersistence__CanSecure_m1449153133 (Il2CppObject * __this /* static, unused */, String_t* ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectUser(System.String)
extern "C"  bool KeyPairPersistence__ProtectUser_m1131717336 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectMachine(System.String)
extern "C"  bool KeyPairPersistence__ProtectMachine_m318782442 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsUserProtected(System.String)
extern "C"  bool KeyPairPersistence__IsUserProtected_m3417764903 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsMachineProtected(System.String)
extern "C"  bool KeyPairPersistence__IsMachineProtected_m2586034415 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::CanSecure(System.String)
extern "C"  bool KeyPairPersistence_CanSecure_m2251009700 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectUser(System.String)
extern "C"  bool KeyPairPersistence_ProtectUser_m4103539639 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectMachine(System.String)
extern "C"  bool KeyPairPersistence_ProtectMachine_m2215143759 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsUserProtected(System.String)
extern "C"  bool KeyPairPersistence_IsUserProtected_m37342608 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsMachineProtected(System.String)
extern "C"  bool KeyPairPersistence_IsMachineProtected_m4095716302 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_CanChange()
extern "C"  bool KeyPairPersistence_get_CanChange_m471859120 (KeyPairPersistence_t3637935872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseDefaultKeyContainer()
extern "C"  bool KeyPairPersistence_get_UseDefaultKeyContainer_m1428226410 (KeyPairPersistence_t3637935872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseMachineKeyStore()
extern "C"  bool KeyPairPersistence_get_UseMachineKeyStore_m560802076 (KeyPairPersistence_t3637935872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_ContainerName()
extern "C"  String_t* KeyPairPersistence_get_ContainerName_m3502301303 (KeyPairPersistence_t3637935872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::Copy(System.Security.Cryptography.CspParameters)
extern "C"  CspParameters_t46065560 * KeyPairPersistence_Copy_m2609734593 (KeyPairPersistence_t3637935872 * __this, CspParameters_t46065560 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::FromXml(System.String)
extern "C"  void KeyPairPersistence_FromXml_m2310151202 (KeyPairPersistence_t3637935872 * __this, String_t* ___xml0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::ToXml()
extern "C"  String_t* KeyPairPersistence_ToXml_m207061510 (KeyPairPersistence_t3637935872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
