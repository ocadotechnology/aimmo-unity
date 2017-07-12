#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.Version
struct Version_t1755874712;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.HttpBase
struct  HttpBase_t4283398485  : public Il2CppObject
{
public:
	// System.Collections.Specialized.NameValueCollection WebSocketSharp.HttpBase::_headers
	NameValueCollection_t3047564564 * ____headers_0;
	// System.Version WebSocketSharp.HttpBase::_version
	Version_t1755874712 * ____version_2;
	// System.Byte[] WebSocketSharp.HttpBase::EntityBodyData
	ByteU5BU5D_t3397334013* ___EntityBodyData_3;

public:
	inline static int32_t get_offset_of__headers_0() { return static_cast<int32_t>(offsetof(HttpBase_t4283398485, ____headers_0)); }
	inline NameValueCollection_t3047564564 * get__headers_0() const { return ____headers_0; }
	inline NameValueCollection_t3047564564 ** get_address_of__headers_0() { return &____headers_0; }
	inline void set__headers_0(NameValueCollection_t3047564564 * value)
	{
		____headers_0 = value;
		Il2CppCodeGenWriteBarrier(&____headers_0, value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(HttpBase_t4283398485, ____version_2)); }
	inline Version_t1755874712 * get__version_2() const { return ____version_2; }
	inline Version_t1755874712 ** get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(Version_t1755874712 * value)
	{
		____version_2 = value;
		Il2CppCodeGenWriteBarrier(&____version_2, value);
	}

	inline static int32_t get_offset_of_EntityBodyData_3() { return static_cast<int32_t>(offsetof(HttpBase_t4283398485, ___EntityBodyData_3)); }
	inline ByteU5BU5D_t3397334013* get_EntityBodyData_3() const { return ___EntityBodyData_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_EntityBodyData_3() { return &___EntityBodyData_3; }
	inline void set_EntityBodyData_3(ByteU5BU5D_t3397334013* value)
	{
		___EntityBodyData_3 = value;
		Il2CppCodeGenWriteBarrier(&___EntityBodyData_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
