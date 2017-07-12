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

// Mono.Xml.SecurityParser
struct SecurityParser_t30730985;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t3549787957;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t4064541270;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_Mono_Xml_SmallXmlParser3549787957.h"

// System.Void Mono.Xml.SecurityParser::.ctor()
extern "C"  void SecurityParser__ctor_m2477861623 (SecurityParser_t30730985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::LoadXml(System.String)
extern "C"  void SecurityParser_LoadXml_m3105973588 (SecurityParser_t30730985 * __this, String_t* ___xml0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement Mono.Xml.SecurityParser::ToXml()
extern "C"  SecurityElement_t2325568386 * SecurityParser_ToXml_m477609901 (SecurityParser_t30730985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C"  void SecurityParser_OnStartParsing_m2886731389 (SecurityParser_t30730985 * __this, SmallXmlParser_t3549787957 * ___parser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
extern "C"  void SecurityParser_OnProcessingInstruction_m3017426425 (SecurityParser_t30730985 * __this, String_t* ___name0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnIgnorableWhitespace(System.String)
extern "C"  void SecurityParser_OnIgnorableWhitespace_m3090891176 (SecurityParser_t30730985 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void SecurityParser_OnStartElement_m3097820862 (SecurityParser_t30730985 * __this, String_t* ___name0, Il2CppObject * ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndElement(System.String)
extern "C"  void SecurityParser_OnEndElement_m2909940377 (SecurityParser_t30730985 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnChars(System.String)
extern "C"  void SecurityParser_OnChars_m2351845751 (SecurityParser_t30730985 * __this, String_t* ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C"  void SecurityParser_OnEndParsing_m565346250 (SecurityParser_t30730985 * __this, SmallXmlParser_t3549787957 * ___parser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
