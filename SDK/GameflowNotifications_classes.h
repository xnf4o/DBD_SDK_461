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

// Class GameflowNotifications.PlayerflowEventsNotifier
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPlayerflowEventsNotifier : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameflowNotifications.PlayerflowEventsNotifier");
		return ptr;
	}



};

// Class GameflowNotifications.GameflowEventsNotifier
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGameflowEventsNotifier : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameflowNotifications.GameflowEventsNotifier");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif