#pragma once

// Name: DeadByDaylight, Version: 4.6.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DataTableUtilities.DBDTableRowBase
// 0x0000 (0x0008 - 0x0008)
struct FDBDTableRowBase : public FTableRowBase
{

};

// ScriptStruct DataTableUtilities.DBDTunableRowBase
// 0x0000 (0x0008 - 0x0008)
struct FDBDTunableRowBase : public FDBDTableRowBase
{

};

// ScriptStruct DataTableUtilities.DataTableProxy
// 0x0040
struct FDataTableProxy
{
	unsigned char                                      AssetPtr[0x30];                                            // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	class UDataTable*                                  _dataTable;                                                // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HIS8[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct DataTableUtilities.DBDTableRowBaseWithId
// 0x0010 (0x0018 - 0x0008)
struct FDBDTableRowBaseWithId : public FDBDTableRowBase
{
	struct FName                                       Id;                                                        // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NO3I[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DataTableUtilities.DBDTunableRowHandle
// 0x0028
struct FDBDTunableRowHandle
{
	struct FDataTableRowHandle                         _dataTableRowHandle;                                       // 0x0000(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	float                                              _defaultValue;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YD1Y[0xC];                                     // 0x001C(0x000C) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
