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

// System.Net.ServicePoint
struct ServicePoint_t2765344313;
// System.Uri
struct Uri_t19570940;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern "C"  void ServicePoint__ctor_m4262863078 (ServicePoint_t2765344313 * __this, Uri_t19570940 * ___uri0, int32_t ___connectionLimit1, int32_t ___maxIdleTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
extern "C"  Uri_t19570940 * ServicePoint_get_Address_m578153126 (ServicePoint_t2765344313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
extern "C"  int32_t ServicePoint_get_CurrentConnections_m2605637468 (ServicePoint_t2765344313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
extern "C"  DateTime_t693205669  ServicePoint_get_IdleSince_m1157936783 (ServicePoint_t2765344313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
extern "C"  void ServicePoint_set_IdleSince_m797014038 (ServicePoint_t2765344313 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern "C"  void ServicePoint_set_Expect100Continue_m426209852 (ServicePoint_t2765344313 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern "C"  void ServicePoint_set_UseNagleAlgorithm_m2618011464 (ServicePoint_t2765344313 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern "C"  void ServicePoint_set_SendContinue_m2270873616 (ServicePoint_t2765344313 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern "C"  void ServicePoint_set_UsesProxy_m654127651 (ServicePoint_t2765344313 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern "C"  void ServicePoint_set_UseConnect_m3091750992 (ServicePoint_t2765344313 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
extern "C"  bool ServicePoint_get_AvailableForRecycling_m1105513096 (ServicePoint_t2765344313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
