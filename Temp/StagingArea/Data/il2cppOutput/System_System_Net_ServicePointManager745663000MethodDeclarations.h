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

// System.Net.ICertificatePolicy
struct ICertificatePolicy_t1916536542;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;
// System.Net.ServicePoint
struct ServicePoint_t2765344313;
// System.Uri
struct Uri_t19570940;
// System.Net.IWebProxy
struct IWebProxy_t3916853445;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_SecurityProtocolType3099771628.h"
#include "System_System_Uri19570940.h"

// System.Void System.Net.ServicePointManager::.cctor()
extern "C"  void ServicePointManager__cctor_m2216295373 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICertificatePolicy System.Net.ServicePointManager::get_CertificatePolicy()
extern "C"  Il2CppObject * ServicePointManager_get_CertificatePolicy_m345233313 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
extern "C"  bool ServicePointManager_get_CheckCertificateRevocationList_m415857194 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
extern "C"  int32_t ServicePointManager_get_SecurityProtocol_m1763625218 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::get_ServerCertificateValidationCallback()
extern "C"  RemoteCertificateValidationCallback_t2756269959 * ServicePointManager_get_ServerCertificateValidationCallback_m1409951209 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
extern "C"  ServicePoint_t2765344313 * ServicePointManager_FindServicePoint_m3137356168 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___address0, Il2CppObject * ___proxy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::RecycleServicePoints()
extern "C"  void ServicePointManager_RecycleServicePoints_m2772618783 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
