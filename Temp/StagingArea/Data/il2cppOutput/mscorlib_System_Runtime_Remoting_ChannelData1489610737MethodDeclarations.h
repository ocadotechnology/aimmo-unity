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

// System.Runtime.Remoting.ChannelData
struct ChannelData_t1489610737;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Collections.Hashtable
struct Hashtable_t909839986;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Remoting_ChannelData1489610737.h"

// System.Void System.Runtime.Remoting.ChannelData::.ctor()
extern "C"  void ChannelData__ctor_m2081039517 (ChannelData_t1489610737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ServerProviders()
extern "C"  ArrayList_t4252133567 * ChannelData_get_ServerProviders_m237896543 (ChannelData_t1489610737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ClientProviders()
extern "C"  ArrayList_t4252133567 * ChannelData_get_ClientProviders_m648877347 (ChannelData_t1489610737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::get_CustomProperties()
extern "C"  Hashtable_t909839986 * ChannelData_get_CustomProperties_m1470957369 (ChannelData_t1489610737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ChannelData::CopyFrom(System.Runtime.Remoting.ChannelData)
extern "C"  void ChannelData_CopyFrom_m4049054607 (ChannelData_t1489610737 * __this, ChannelData_t1489610737 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
