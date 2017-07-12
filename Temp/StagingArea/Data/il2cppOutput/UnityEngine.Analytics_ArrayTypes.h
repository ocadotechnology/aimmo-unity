#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// UnityEngine.Analytics.TrackableProperty/FieldWithTarget
struct FieldWithTarget_t2256174789;

#include "mscorlib_System_Array3829468939.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Tracka2256174789.h"

#pragma once
// UnityEngine.Analytics.TrackableProperty/FieldWithTarget[]
struct FieldWithTargetU5BU5D_t3882163336  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) FieldWithTarget_t2256174789 * m_Items[1];

public:
	inline FieldWithTarget_t2256174789 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldWithTarget_t2256174789 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldWithTarget_t2256174789 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline FieldWithTarget_t2256174789 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldWithTarget_t2256174789 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldWithTarget_t2256174789 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
