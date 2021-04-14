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
// Classes
//---------------------------------------------------------------------------

// Class Qos.QosBeaconClient
// 0x0038 (FullSize[0x0300] - InheritedSize[0x02C8])
class UQosBeaconClient : public UOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData_XFLQ[0x38];                                    // 0x02C8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Qos.QosBeaconClient");
		return ptr;
	}



	void ServerQosRequest(const struct FString& InSessionId);
	void ClientQosResponse(Qos_EQosResponseType Response);
};

// Class Qos.QosBeaconHost
// 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
class UQosBeaconHost : public UOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData_BWGM[0x10];                                    // 0x0258(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Qos.QosBeaconHost");
		return ptr;
	}



};

// Class Qos.QosEvaluator
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UQosEvaluator : public UObject
{
public:
	unsigned char                                      UnknownData_0C5K[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bInProgress;                                               // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bCancelOperation;                                          // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K33C[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDatacenterQosInstance>              Datacenters;                                               // 0x0058(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_D71L[0x20];                                    // 0x0068(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Qos.QosEvaluator");
		return ptr;
	}



};

// Class Qos.QosRegionManager
// 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
class UQosRegionManager : public UObject
{
public:
	int                                                NumTestsPerRegion;                                         // 0x0030(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PingTimeout;                                               // 0x0034(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FQosRegionInfo>                      RegionDefinitions;                                         // 0x0038(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FQosDatacenterInfo>                  DatacenterDefinitions;                                     // 0x0048(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDateTime                                   LastCheckTimestamp;                                        // 0x0058(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UQosEvaluator*                               Evaluator;                                                 // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Qos_EQosCompletionResult                           QosEvalResult;                                             // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_I8FB[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRegionQosInstance>                  RegionOptions;                                             // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ForceRegionId;                                             // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bRegionForcedViaCommandline;                               // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CXMP[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SelectedRegionId;                                          // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_M2N7[0x20];                                    // 0x00A8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Qos.QosRegionManager");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
