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

// WebSocketSharp.WebSocketException
struct WebSocketException_t1348391352;
// System.Exception
struct Exception_t1927440687;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocketSharp_Close2945181741.h"

// System.Void WebSocketSharp.WebSocketException::.ctor()
extern "C"  void WebSocketException__ctor_m3805427278 (WebSocketException_t1348391352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(System.Exception)
extern "C"  void WebSocketException__ctor_m529664028 (WebSocketException_t1348391352 * __this, Exception_t1927440687 * ___innerException0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(System.String)
extern "C"  void WebSocketException__ctor_m2194126484 (WebSocketException_t1348391352 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode)
extern "C"  void WebSocketException__ctor_m959962558 (WebSocketException_t1348391352 * __this, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(System.String,System.Exception)
extern "C"  void WebSocketException__ctor_m3481316084 (WebSocketException_t1348391352 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.Exception)
extern "C"  void WebSocketException__ctor_m638025342 (WebSocketException_t1348391352 * __this, uint16_t ___code0, Exception_t1927440687 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.String)
extern "C"  void WebSocketException__ctor_m1509249502 (WebSocketException_t1348391352 * __this, uint16_t ___code0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.String,System.Exception)
extern "C"  void WebSocketException__ctor_m911366910 (WebSocketException_t1348391352 * __this, uint16_t ___code0, String_t* ___message1, Exception_t1927440687 * ___innerException2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.CloseStatusCode WebSocketSharp.WebSocketException::get_Code()
extern "C"  uint16_t WebSocketException_get_Code_m2829599751 (WebSocketException_t1348391352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
