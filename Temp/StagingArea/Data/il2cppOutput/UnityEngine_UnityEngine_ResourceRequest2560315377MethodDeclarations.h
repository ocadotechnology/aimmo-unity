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

// UnityEngine.ResourceRequest
struct ResourceRequest_t2560315377;
// UnityEngine.Object
struct Object_t1021602117;
struct ResourceRequest_t2560315377_marshaled_pinvoke;
struct ResourceRequest_t2560315377_marshaled_com;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.ResourceRequest::.ctor()
extern "C"  void ResourceRequest__ctor_m3340010930 (ResourceRequest_t2560315377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.ResourceRequest::get_asset()
extern "C"  Object_t1021602117 * ResourceRequest_get_asset_m3527928488 (ResourceRequest_t2560315377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ResourceRequest_t2560315377;
struct ResourceRequest_t2560315377_marshaled_pinvoke;

extern "C" void ResourceRequest_t2560315377_marshal_pinvoke(const ResourceRequest_t2560315377& unmarshaled, ResourceRequest_t2560315377_marshaled_pinvoke& marshaled);
extern "C" void ResourceRequest_t2560315377_marshal_pinvoke_back(const ResourceRequest_t2560315377_marshaled_pinvoke& marshaled, ResourceRequest_t2560315377& unmarshaled);
extern "C" void ResourceRequest_t2560315377_marshal_pinvoke_cleanup(ResourceRequest_t2560315377_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ResourceRequest_t2560315377;
struct ResourceRequest_t2560315377_marshaled_com;

extern "C" void ResourceRequest_t2560315377_marshal_com(const ResourceRequest_t2560315377& unmarshaled, ResourceRequest_t2560315377_marshaled_com& marshaled);
extern "C" void ResourceRequest_t2560315377_marshal_com_back(const ResourceRequest_t2560315377_marshaled_com& marshaled, ResourceRequest_t2560315377& unmarshaled);
extern "C" void ResourceRequest_t2560315377_marshal_com_cleanup(ResourceRequest_t2560315377_marshaled_com& marshaled);
