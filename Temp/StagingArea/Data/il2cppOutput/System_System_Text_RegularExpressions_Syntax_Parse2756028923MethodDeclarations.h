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

// System.Text.RegularExpressions.Syntax.Parser
struct Parser_t2756028923;
// System.String
struct String_t;
// System.Text.RegularExpressions.Syntax.RegularExpression
struct RegularExpression_t3083097024;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Text.RegularExpressions.Syntax.Group
struct Group_t2558408851;
// System.Text.RegularExpressions.Syntax.Assertion
struct Assertion_t1490870658;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t368137076;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t3255443744;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.ArgumentException
struct ArgumentException_t3259014390;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Text_RegularExpressions_RegexOptions2418259727.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "System_System_Text_RegularExpressions_Syntax_Group2558408851.h"
#include "System_System_Text_RegularExpressions_Syntax_Asser1490870658.h"
#include "System_System_Text_RegularExpressions_Syntax_Expre3255443744.h"
#include "System_System_Text_RegularExpressions_Category1984577050.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"

// System.Void System.Text.RegularExpressions.Syntax.Parser::.ctor()
extern "C"  void Parser__ctor_m1719025083 (Parser_t2756028923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDecimal(System.String,System.Int32&)
extern "C"  int32_t Parser_ParseDecimal_m4127410766 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___ptr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseOctal(System.String,System.Int32&)
extern "C"  int32_t Parser_ParseOctal_m27031258 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___ptr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseHex(System.String,System.Int32&,System.Int32)
extern "C"  int32_t Parser_ParseHex_m4098274221 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___ptr1, int32_t ___digits2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.String,System.Int32&,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Parser_ParseNumber_m1329136463 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___ptr1, int32_t ___b2, int32_t ___min3, int32_t ___max4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName(System.String,System.Int32&)
extern "C"  String_t* Parser_ParseName_m4004917341 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___ptr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.RegularExpression System.Text.RegularExpressions.Syntax.Parser::ParseRegularExpression(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C"  RegularExpression_t3083097024 * Parser_ParseRegularExpression_m2390577313 (Parser_t2756028923 * __this, String_t* ___pattern0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::GetMapping(System.Collections.Hashtable)
extern "C"  int32_t Parser_GetMapping_m2879066771 (Parser_t2756028923 * __this, Hashtable_t909839986 * ___mapping0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseGroup(System.Text.RegularExpressions.Syntax.Group,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.Syntax.Assertion)
extern "C"  void Parser_ParseGroup_m1951444306 (Parser_t2756028923 * __this, Group_t2558408851 * ___group0, int32_t ___options1, Assertion_t1490870658 * ___assertion2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseGroupingConstruct(System.Text.RegularExpressions.RegexOptions&)
extern "C"  Expression_t368137076 * Parser_ParseGroupingConstruct_m3191662777 (Parser_t2756028923 * __this, int32_t* ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseAssertionType(System.Text.RegularExpressions.Syntax.ExpressionAssertion)
extern "C"  bool Parser_ParseAssertionType_m3316669790 (Parser_t2756028923 * __this, ExpressionAssertion_t3255443744 * ___assertion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseOptions(System.Text.RegularExpressions.RegexOptions&,System.Boolean)
extern "C"  void Parser_ParseOptions_m3112064571 (Parser_t2756028923 * __this, int32_t* ___options0, bool ___negate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseCharacterClass(System.Text.RegularExpressions.RegexOptions)
extern "C"  Expression_t368137076 * Parser_ParseCharacterClass_m746361886 (Parser_t2756028923 * __this, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseRepetitionBounds(System.Int32&,System.Int32&,System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_ParseRepetitionBounds_m1147768566 (Parser_t2756028923 * __this, int32_t* ___min0, int32_t* ___max1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.Syntax.Parser::ParseUnicodeCategory()
extern "C"  uint16_t Parser_ParseUnicodeCategory_m1589482983 (Parser_t2756028923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseSpecial(System.Text.RegularExpressions.RegexOptions)
extern "C"  Expression_t368137076 * Parser_ParseSpecial_m294145572 (Parser_t2756028923 * __this, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseEscape()
extern "C"  int32_t Parser_ParseEscape_m2516946817 (Parser_t2756028923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName()
extern "C"  String_t* Parser_ParseName_m3760980906 (Parser_t2756028923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsNameChar(System.Char)
extern "C"  bool Parser_IsNameChar_m86667109 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Parser_ParseNumber_m3681061200 (Parser_t2756028923 * __this, int32_t ___b0, int32_t ___min1, int32_t ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDigit(System.Char,System.Int32,System.Int32)
extern "C"  int32_t Parser_ParseDigit_m214846592 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, int32_t ___b1, int32_t ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ConsumeWhitespace(System.Boolean)
extern "C"  void Parser_ConsumeWhitespace_m3778057611 (Parser_t2756028923 * __this, bool ___ignore0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ResolveReferences()
extern "C"  void Parser_ResolveReferences_m3206053039 (Parser_t2756028923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::HandleExplicitNumericGroups(System.Collections.ArrayList)
extern "C"  void Parser_HandleExplicitNumericGroups_m2506648603 (Parser_t2756028923 * __this, ArrayList_t4252133567 * ___explicit_numeric_groups0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnoreCase(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsIgnoreCase_m4155598997 (Il2CppObject * __this /* static, unused */, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsMultiline(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsMultiline_m3805434012 (Il2CppObject * __this /* static, unused */, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsExplicitCapture(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsExplicitCapture_m4221197515 (Il2CppObject * __this /* static, unused */, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsSingleline(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsSingleline_m4142527289 (Il2CppObject * __this /* static, unused */, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnorePatternWhitespace(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsIgnorePatternWhitespace_m2555790826 (Il2CppObject * __this /* static, unused */, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsECMAScript(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsECMAScript_m926812226 (Il2CppObject * __this /* static, unused */, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArgumentException System.Text.RegularExpressions.Syntax.Parser::NewParseException(System.String)
extern "C"  ArgumentException_t3259014390 * Parser_NewParseException_m3909819299 (Parser_t2756028923 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
