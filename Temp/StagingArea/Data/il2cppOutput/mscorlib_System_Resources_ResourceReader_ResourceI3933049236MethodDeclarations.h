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

// System.String
struct String_t;
// System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t3933049236;
struct ResourceInfo_t3933049236_marshaled_pinvoke;
struct ResourceInfo_t3933049236_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceI3933049236.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Resources.ResourceReader/ResourceInfo::.ctor(System.String,System.Int64,System.Int32)
extern "C"  void ResourceInfo__ctor_m2401359321 (ResourceInfo_t3933049236 * __this, String_t* ___resourceName0, int64_t ___valuePosition1, int32_t ___type_index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ResourceInfo_t3933049236;
struct ResourceInfo_t3933049236_marshaled_pinvoke;

extern "C" void ResourceInfo_t3933049236_marshal_pinvoke(const ResourceInfo_t3933049236& unmarshaled, ResourceInfo_t3933049236_marshaled_pinvoke& marshaled);
extern "C" void ResourceInfo_t3933049236_marshal_pinvoke_back(const ResourceInfo_t3933049236_marshaled_pinvoke& marshaled, ResourceInfo_t3933049236& unmarshaled);
extern "C" void ResourceInfo_t3933049236_marshal_pinvoke_cleanup(ResourceInfo_t3933049236_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ResourceInfo_t3933049236;
struct ResourceInfo_t3933049236_marshaled_com;

extern "C" void ResourceInfo_t3933049236_marshal_com(const ResourceInfo_t3933049236& unmarshaled, ResourceInfo_t3933049236_marshaled_com& marshaled);
extern "C" void ResourceInfo_t3933049236_marshal_com_back(const ResourceInfo_t3933049236_marshaled_com& marshaled, ResourceInfo_t3933049236& unmarshaled);
extern "C" void ResourceInfo_t3933049236_marshal_com_cleanup(ResourceInfo_t3933049236_marshaled_com& marshaled);
