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

// System.Type
struct Type_t;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.MonoEnumInfo
struct MonoEnumInfo_t2335995564;
struct MonoEnumInfo_t2335995564_marshaled_pinvoke;
struct MonoEnumInfo_t2335995564_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_MonoEnumInfo2335995564.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.MonoEnumInfo::.ctor(System.MonoEnumInfo)
extern "C"  void MonoEnumInfo__ctor_m2316286598 (MonoEnumInfo_t2335995564 * __this, MonoEnumInfo_t2335995564  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::.cctor()
extern "C"  void MonoEnumInfo__cctor_m2473564606 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::get_enum_info(System.Type,System.MonoEnumInfo&)
extern "C"  void MonoEnumInfo_get_enum_info_m1382505982 (Il2CppObject * __this /* static, unused */, Type_t * ___enumType0, MonoEnumInfo_t2335995564 * ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.MonoEnumInfo::get_Cache()
extern "C"  Hashtable_t909839986 * MonoEnumInfo_get_Cache_m3551569711 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::GetInfo(System.Type,System.MonoEnumInfo&)
extern "C"  void MonoEnumInfo_GetInfo_m899954493 (Il2CppObject * __this /* static, unused */, Type_t * ___enumType0, MonoEnumInfo_t2335995564 * ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct MonoEnumInfo_t2335995564;
struct MonoEnumInfo_t2335995564_marshaled_pinvoke;

extern "C" void MonoEnumInfo_t2335995564_marshal_pinvoke(const MonoEnumInfo_t2335995564& unmarshaled, MonoEnumInfo_t2335995564_marshaled_pinvoke& marshaled);
extern "C" void MonoEnumInfo_t2335995564_marshal_pinvoke_back(const MonoEnumInfo_t2335995564_marshaled_pinvoke& marshaled, MonoEnumInfo_t2335995564& unmarshaled);
extern "C" void MonoEnumInfo_t2335995564_marshal_pinvoke_cleanup(MonoEnumInfo_t2335995564_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct MonoEnumInfo_t2335995564;
struct MonoEnumInfo_t2335995564_marshaled_com;

extern "C" void MonoEnumInfo_t2335995564_marshal_com(const MonoEnumInfo_t2335995564& unmarshaled, MonoEnumInfo_t2335995564_marshaled_com& marshaled);
extern "C" void MonoEnumInfo_t2335995564_marshal_com_back(const MonoEnumInfo_t2335995564_marshaled_com& marshaled, MonoEnumInfo_t2335995564& unmarshaled);
extern "C" void MonoEnumInfo_t2335995564_marshal_com_cleanup(MonoEnumInfo_t2335995564_marshaled_com& marshaled);
