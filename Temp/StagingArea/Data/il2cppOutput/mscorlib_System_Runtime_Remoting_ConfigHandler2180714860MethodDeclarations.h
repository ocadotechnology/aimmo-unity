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

// System.Runtime.Remoting.ConfigHandler
struct ConfigHandler_t2180714860;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t3549787957;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t4064541270;
// System.Runtime.Remoting.ProviderData
struct ProviderData_t2518653487;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_Mono_Xml_SmallXmlParser3549787957.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.Void System.Runtime.Remoting.ConfigHandler::.ctor(System.Boolean)
extern "C"  void ConfigHandler__ctor_m3798700643 (ConfigHandler_t2180714860 * __this, bool ___onlyDelayedChannels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ValidatePath(System.String,System.String[])
extern "C"  void ConfigHandler_ValidatePath_m3188987489 (ConfigHandler_t2180714860 * __this, String_t* ___element0, StringU5BU5D_t1642385972* ___paths1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.ConfigHandler::CheckPath(System.String)
extern "C"  bool ConfigHandler_CheckPath_m2296459741 (ConfigHandler_t2180714860 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C"  void ConfigHandler_OnStartParsing_m2298792064 (ConfigHandler_t2180714860 * __this, SmallXmlParser_t3549787957 * ___parser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnProcessingInstruction(System.String,System.String)
extern "C"  void ConfigHandler_OnProcessingInstruction_m1977038436 (ConfigHandler_t2180714860 * __this, String_t* ___name0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnIgnorableWhitespace(System.String)
extern "C"  void ConfigHandler_OnIgnorableWhitespace_m1819705975 (ConfigHandler_t2180714860 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_OnStartElement_m2567023365 (ConfigHandler_t2180714860 * __this, String_t* ___name0, Il2CppObject * ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ParseElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ParseElement_m713051069 (ConfigHandler_t2180714860 * __this, String_t* ___name0, Il2CppObject * ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndElement(System.String)
extern "C"  void ConfigHandler_OnEndElement_m3200644118 (ConfigHandler_t2180714860 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadCustomProviderData(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadCustomProviderData_m784203316 (ConfigHandler_t2180714860 * __this, String_t* ___name0, Il2CppObject * ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadLifetine(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadLifetine_m4190202502 (ConfigHandler_t2180714860 * __this, Il2CppObject * ___attrs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.ConfigHandler::ParseTime(System.String)
extern "C"  TimeSpan_t3430258949  ConfigHandler_ParseTime_m1231083163 (ConfigHandler_t2180714860 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadChannel(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C"  void ConfigHandler_ReadChannel_m90614780 (ConfigHandler_t2180714860 * __this, Il2CppObject * ___attrs0, bool ___isTemplate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ProviderData System.Runtime.Remoting.ConfigHandler::ReadProvider(System.String,Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C"  ProviderData_t2518653487 * ConfigHandler_ReadProvider_m1441445958 (ConfigHandler_t2180714860 * __this, String_t* ___name0, Il2CppObject * ___attrs1, bool ___isTemplate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientActivated(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadClientActivated_m225401690 (ConfigHandler_t2180714860 * __this, Il2CppObject * ___attrs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceActivated(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadServiceActivated_m907987684 (ConfigHandler_t2180714860 * __this, Il2CppObject * ___attrs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadClientWellKnown_m4206953534 (ConfigHandler_t2180714860 * __this, Il2CppObject * ___attrs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadServiceWellKnown_m1495748104 (ConfigHandler_t2180714860 * __this, Il2CppObject * ___attrs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadInteropXml(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C"  void ConfigHandler_ReadInteropXml_m539906871 (ConfigHandler_t2180714860 * __this, Il2CppObject * ___attrs0, bool ___isElement1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadPreload(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadPreload_m455851711 (ConfigHandler_t2180714860 * __this, Il2CppObject * ___attrs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ConfigHandler::GetNotNull(Mono.Xml.SmallXmlParser/IAttrList,System.String)
extern "C"  String_t* ConfigHandler_GetNotNull_m2454680251 (ConfigHandler_t2180714860 * __this, Il2CppObject * ___attrs0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ConfigHandler::ExtractAssembly(System.String&)
extern "C"  String_t* ConfigHandler_ExtractAssembly_m2993776658 (ConfigHandler_t2180714860 * __this, String_t** ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnChars(System.String)
extern "C"  void ConfigHandler_OnChars_m2004226744 (ConfigHandler_t2180714860 * __this, String_t* ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C"  void ConfigHandler_OnEndParsing_m2528686941 (ConfigHandler_t2180714860 * __this, SmallXmlParser_t3549787957 * ___parser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
