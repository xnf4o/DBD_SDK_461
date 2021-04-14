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
// Classes
//---------------------------------------------------------------------------

// Class GraphicsExtensions.GMAdaptiveShadowMapAtlas
// 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
class UGMAdaptiveShadowMapAtlas : public UObject
{
public:
	unsigned char                                      UnknownData_WXPB[0xB0];                                    // 0x0030(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapAtlas");
		return ptr;
	}



};

// Class GraphicsExtensions.GMAdaptiveShadowMapController
// 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
class UGMAdaptiveShadowMapController : public UObject
{
public:
	unsigned char                                      UnknownData_3BR2[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGMAdaptiveShadowMapAtlas*                   _atlas;                                                    // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UGMAdaptiveShadowMapSource*>          _shadowMapSourceList;                                      // 0x0040(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UGMAdaptiveShadowMapSource*>          _shadowMapSourceAttachedList;                              // 0x0050(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GLYO[0x60];                                    // 0x0060(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapController");
		return ptr;
	}



};

// Class GraphicsExtensions.GMAdaptiveShadowMapControllerComponent
// 0x00A0 (FullSize[0x02B0] - InheritedSize[0x0210])
class UGMAdaptiveShadowMapControllerComponent : public USceneComponent
{
public:
	int                                                TileSize;                                                  // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileCountX;                                                // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileCountY;                                                // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   GridSize;                                                  // 0x021C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GeneratedTilesPerFrame;                                    // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSupportsDirectionalLights;                                // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSupportsSpotLights;                                       // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GIFW[0x2];                                     // 0x022A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CullShadowIfPixelSizeLessThan;                             // 0x022C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreviewOnly;                                              // 0x0230(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8L1X[0x17];                                    // 0x0231(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGMAdaptiveShadowMapAtlas*                   _atlas;                                                    // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGMAdaptiveShadowMapController*              _controller;                                               // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UGMAdaptiveShadowMapSourceComponent*, class UGMAdaptiveShadowMapSource*> _shadowMapSources;                                         // 0x0258(0x0050) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_78XV[0x8];                                     // 0x02A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapControllerComponent");
		return ptr;
	}



	void RebuildAtlas();
	int GetTileSize();
	int GetTileCountY();
	int GetTileCountX();
	void DumpDebugInfo();
};

// Class GraphicsExtensions.GMAdaptiveShadowMapSource
// 0x0170 (FullSize[0x01A0] - InheritedSize[0x0030])
class UGMAdaptiveShadowMapSource : public UObject
{
public:
	unsigned char                                      UnknownData_UQ52[0x170];                                   // 0x0030(0x0170) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapSource");
		return ptr;
	}



};

// Class GraphicsExtensions.GMAdaptiveShadowMapSourceComponent
// 0x0030 (FullSize[0x0240] - InheritedSize[0x0210])
class UGMAdaptiveShadowMapSourceComponent : public USceneComponent
{
public:
	bool                                               bUseAutoRadius;                                            // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_74WM[0x3];                                     // 0x0211(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              radius;                                                    // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthMin;                                                  // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthMax;                                                  // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Levels;                                                    // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreGeneratedLevels;                                        // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ForcedMeshLOD;                                             // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OTRV[0x4];                                     // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UmaterialInterface*                          LightFunctionMaterial;                                     // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R4V9[0x8];                                     // 0x0238(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapSourceComponent");
		return ptr;
	}



	void SetLightRadiusWithBounds(const struct Fvector& BoundingSphereCenter, float BoundingSphereRadius);
};

// Class GraphicsExtensions.GMAdaptiveShadowMapSourceComponentSpawner
// 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
class UGMAdaptiveShadowMapSourceComponentSpawner : public Uactor
{
public:
	class UmaterialInterface*                          AdaptiveShadowMapMaterial;                                 // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreateASMSourceComponentOnBeginPlay;                      // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveCastForCinematicOnlyFlagOnLights;                   // 0x0239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveLightFunctionMaterialOnLights;                      // 0x023A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_94RN[0x1];                                     // 0x023B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumLevelPerSource;                                         // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPreGeneratedLevelPerSource;                             // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreviewOnly;                                              // 0x0244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FZU1[0x3];                                     // 0x0245(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapSourceComponentSpawner");
		return ptr;
	}



};

// Class GraphicsExtensions.GMAdaptiveShadowMapSourceDirectional
// 0x0060 (FullSize[0x0200] - InheritedSize[0x01A0])
class UGMAdaptiveShadowMapSourceDirectional : public UGMAdaptiveShadowMapSource
{
public:
	unsigned char                                      UnknownData_OSAW[0x60];                                    // 0x01A0(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapSourceDirectional");
		return ptr;
	}



};

// Class GraphicsExtensions.GMAdaptiveShadowMapSourceSpot
// 0x0060 (FullSize[0x0200] - InheritedSize[0x01A0])
class UGMAdaptiveShadowMapSourceSpot : public UGMAdaptiveShadowMapSource
{
public:
	unsigned char                                      UnknownData_HP6G[0x60];                                    // 0x01A0(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapSourceSpot");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
