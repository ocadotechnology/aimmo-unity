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

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Category1984577050.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Globalization_UnicodeCategory682236799.h"

// System.Text.RegularExpressions.Category System.Text.RegularExpressions.CategoryUtils::CategoryFromName(System.String)
extern "C"  uint16_t CategoryUtils_CategoryFromName_m226887453 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Text.RegularExpressions.Category,System.Char)
extern "C"  bool CategoryUtils_IsCategory_m1003669132 (Il2CppObject * __this /* static, unused */, uint16_t ___cat0, Il2CppChar ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Globalization.UnicodeCategory,System.Char)
extern "C"  bool CategoryUtils_IsCategory_m932215390 (Il2CppObject * __this /* static, unused */, int32_t ___uc0, Il2CppChar ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
