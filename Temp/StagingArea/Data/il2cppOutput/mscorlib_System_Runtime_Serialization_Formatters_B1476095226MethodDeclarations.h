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

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct ObjectReader_t1476095226;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t1866979105;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2408360458;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
struct TypeMetadata_t3000156221;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Array
struct Il2CppArray;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B1866979105.h"
#include "mscorlib_System_IO_BinaryReader2491843768.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B2209278355.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B3000156221.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Bi141209596.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::.ctor(System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  void ObjectReader__ctor_m1523640331 (ObjectReader_t1476095226 * __this, BinaryFormatter_t1866979105 * ___formatter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
extern "C"  void ObjectReader_ReadObjectGraph_m1994105549 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, bool ___readHeaders1, Il2CppObject ** ___result2, HeaderU5BU5D_t2408360458** ___headers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
extern "C"  void ObjectReader_ReadObjectGraph_m4290798209 (ObjectReader_t1476095226 * __this, uint8_t ___elem0, BinaryReader_t2491843768 * ___reader1, bool ___readHeaders2, Il2CppObject ** ___result3, HeaderU5BU5D_t2408360458** ___headers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader)
extern "C"  bool ObjectReader_ReadNextObject_m557383702 (ObjectReader_t1476095226 * __this, uint8_t ___element0, BinaryReader_t2491843768 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.IO.BinaryReader)
extern "C"  bool ObjectReader_ReadNextObject_m4289310022 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::get_CurrentObject()
extern "C"  Il2CppObject * ObjectReader_get_CurrentObject_m1756329993 (ObjectReader_t1476095226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C"  void ObjectReader_ReadObject_m397855326 (ObjectReader_t1476095226 * __this, uint8_t ___element0, BinaryReader_t2491843768 * ___reader1, int64_t* ___objectId2, Il2CppObject ** ___value3, SerializationInfo_t228987430 ** ___info4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadAssembly(System.IO.BinaryReader)
extern "C"  void ObjectReader_ReadAssembly_m869834280 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectInstance(System.IO.BinaryReader,System.Boolean,System.Boolean,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C"  void ObjectReader_ReadObjectInstance_m571922473 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, bool ___isRuntimeObject1, bool ___hasTypeInfo2, int64_t* ___objectId3, Il2CppObject ** ___value4, SerializationInfo_t228987430 ** ___info5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadRefTypeObjectInstance(System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C"  void ObjectReader_ReadRefTypeObjectInstance_m93072950 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, int64_t* ___objectId1, Il2CppObject ** ___value2, SerializationInfo_t228987430 ** ___info3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectContent(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata,System.Int64,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C"  void ObjectReader_ReadObjectContent_m3949770110 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, TypeMetadata_t3000156221 * ___metadata1, int64_t ___objectId2, Il2CppObject ** ___objectInstance3, SerializationInfo_t228987430 ** ___info4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RegisterObject(System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern "C"  void ObjectReader_RegisterObject_m3488493505 (ObjectReader_t1476095226 * __this, int64_t ___objectId0, Il2CppObject * ___objectInstance1, SerializationInfo_t228987430 * ___info2, int64_t ___parentObjectId3, MemberInfo_t * ___parentObjectMemeber4, Int32U5BU5D_t3030399641* ___indices5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadStringIntance(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadStringIntance_m1612331365 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, int64_t* ___objectId1, Il2CppObject ** ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadGenericArray(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadGenericArray_m788836286 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, int64_t* ___objectId1, Il2CppObject ** ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadBoxedPrimitiveTypeValue(System.IO.BinaryReader)
extern "C"  Il2CppObject * ObjectReader_ReadBoxedPrimitiveTypeValue_m3547708985 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfPrimitiveType(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadArrayOfPrimitiveType_m1935116283 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, int64_t* ___objectId1, Il2CppObject ** ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::BlockRead(System.IO.BinaryReader,System.Array,System.Int32)
extern "C"  void ObjectReader_BlockRead_m2374879830 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, Il2CppArray * ___array1, int32_t ___dataSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfObject(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadArrayOfObject_m1364473895 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, int64_t* ___objectId1, Il2CppObject ** ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfString(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadArrayOfString_m3752210963 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, int64_t* ___objectId1, Il2CppObject ** ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadSimpleArray(System.IO.BinaryReader,System.Type,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadSimpleArray_m2638638620 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, Type_t * ___elementType1, int64_t* ___objectId2, Il2CppObject ** ___val3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadTypeMetadata(System.IO.BinaryReader,System.Boolean,System.Boolean)
extern "C"  TypeMetadata_t3000156221 * ObjectReader_ReadTypeMetadata_m2043102507 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, bool ___isRuntimeObject1, bool ___hasTypeInfo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadValue(System.IO.BinaryReader,System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Type,System.String,System.Reflection.MemberInfo,System.Int32[])
extern "C"  void ObjectReader_ReadValue_m2069333484 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, Il2CppObject * ___parentObject1, int64_t ___parentObjectId2, SerializationInfo_t228987430 * ___info3, Type_t * ___valueType4, String_t* ___fieldName5, MemberInfo_t * ___memberInfo6, Int32U5BU5D_t3030399641* ___indices7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::SetObjectValue(System.Object,System.String,System.Reflection.MemberInfo,System.Runtime.Serialization.SerializationInfo,System.Object,System.Type,System.Int32[])
extern "C"  void ObjectReader_SetObjectValue_m3292926810 (ObjectReader_t1476095226 * __this, Il2CppObject * ___parentObject0, String_t* ___fieldName1, MemberInfo_t * ___memberInfo2, SerializationInfo_t228987430 * ___info3, Il2CppObject * ___value4, Type_t * ___valueType5, Int32U5BU5D_t3030399641* ___indices6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RecordFixup(System.Int64,System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.String,System.Reflection.MemberInfo,System.Int32[])
extern "C"  void ObjectReader_RecordFixup_m1893348030 (ObjectReader_t1476095226 * __this, int64_t ___parentObjectId0, int64_t ___childObjectId1, Il2CppObject * ___parentObject2, SerializationInfo_t228987430 * ___info3, String_t* ___fieldName4, MemberInfo_t * ___memberInfo5, Int32U5BU5D_t3030399641* ___indices6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::GetDeserializationType(System.Int64,System.String)
extern "C"  Type_t * ObjectReader_GetDeserializationType_m1383413950 (ObjectReader_t1476095226 * __this, int64_t ___assemblyId0, String_t* ___className1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadType(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.TypeTag)
extern "C"  Type_t * ObjectReader_ReadType_m997247161 (ObjectReader_t1476095226 * __this, BinaryReader_t2491843768 * ___reader0, uint8_t ___code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadPrimitiveTypeValue(System.IO.BinaryReader,System.Type)
extern "C"  Il2CppObject * ObjectReader_ReadPrimitiveTypeValue_m3808038676 (Il2CppObject * __this /* static, unused */, BinaryReader_t2491843768 * ___reader0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
