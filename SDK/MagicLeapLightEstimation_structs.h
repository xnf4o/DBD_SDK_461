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
// Enums
//---------------------------------------------------------------------------

// Enum MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
enum class MagicLeapLightEstimation_EMagicLeapLightEstimationCamera : uint8_t
{
	EMagicLeapLightEstimationCamera__Left = 0,
	EMagicLeapLightEstimationCamera__Right = 1,
	EMagicLeapLightEstimationCamera__FarLeft = 2,
	EMagicLeapLightEstimationCamera__FarRight = 3,
	EMagicLeapLightEstimationCamera__EMagicLeapLightEstimationCamera_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
// 0x0018
struct FMagicLeapLightEstimationAmbientGlobalState
{
	TArray<float>                                      AmbientIntensityNits;                                      // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                                   timestamp;                                                 // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
// 0x0020
struct FMagicLeapLightEstimationColorTemperatureState
{
	float                                              ColorTemperatureKelvin;                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                AmbientColor;                                              // 0x0004(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y6I5[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimespan                                   timestamp;                                                 // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
