﻿#pragma once

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

// Enum CinematicCamera.ECameraFocusMethod
enum class CinematicCamera_ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__DoNotOverride = 0,
	ECameraFocusMethod__Manual     = 1,
	ECameraFocusMethod__Tracking   = 2,
	ECameraFocusMethod__Disable    = 3,
	ECameraFocusMethod__MAX        = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// 0x0040
struct FCameraTrackingFocusSettings
{
	unsigned char                                      ActorToTrack[0x30];                                        // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	struct Fvector                                     RelativeOffset;                                            // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawDebugTrackingFocusPoint : 1;                          // 0x003C(0x0001) BIT_FIELD (Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HS5K[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct CinematicCamera.CameraFocusSettings
// 0x0060
struct FCameraFocusSettings
{
	CinematicCamera_ECameraFocusMethod                 FocusMethod;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H4WI[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ManualFocusDistance;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraTrackingFocusSettings                TrackingFocusSettings;                                     // 0x0008(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawDebugFocusPlane : 1;                                  // 0x0048(0x0001) BIT_FIELD (Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M71A[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fcolor                                      DebugFocusPlaneColor;                                      // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSmoothFocusChanges : 1;                                   // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0H41[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FocusSmoothingInterpSpeed;                                 // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FocusOffset;                                               // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LYMN[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct CinematicCamera.CameraLensSettings
// 0x0018
struct FCameraLensSettings
{
	float                                              MinFocalLength;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFocalLength;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinFStop;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFStop;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumFocusDistance;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DiaphragmBladeCount;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CinematicCamera.NamedLensPreset
// 0x0028
struct FNamedLensPreset
{
	struct FString                                     name;                                                      // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                         LensSettings;                                              // 0x0010(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// 0x0058
struct FCameraLookatTrackingSettings
{
	unsigned char                                      bEnableLookAtTracking : 1;                                 // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawDebugLookAtTrackingPosition : 1;                      // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LOY4[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LookAtTrackingInterpSpeed;                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N7N6[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ActorToTrack[0x30];                                        // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	struct Fvector                                     RelativeOffset;                                            // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowRoll : 1;                                            // 0x0054(0x0001) BIT_FIELD (Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DSSF[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// 0x000C
struct FCameraFilmbackSettings
{
	float                                              SensorWidth;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SensorHeight;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SensorAspectRatio;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CinematicCamera.NamedFilmbackPreset
// 0x0020
struct FNamedFilmbackPreset
{
	struct FString                                     name;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings                     FilmbackSettings;                                          // 0x0010(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P41A[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
