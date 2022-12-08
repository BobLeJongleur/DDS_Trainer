#pragma once

#include "pch.h"

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function worldMapMarker.worldMapMarker_C.UserConstructionScript
struct AworldMapMarker_C_UserConstructionScript_Params
{
};

// Function worldMapMarker.worldMapMarker_C.ReceiveBeginPlay
struct AworldMapMarker_C_ReceiveBeginPlay_Params
{
};

// Function worldMapMarker.worldMapMarker_C.setup
struct AworldMapMarker_C_setup_Params
{
	TEnumAsByte<EmapMarkerCategories>                  Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ToolTip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               dealer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                taskID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldMapMarker.worldMapMarker_C.checkTaskEnded
struct AworldMapMarker_C_checkTaskEnded_Params
{
};

// Function worldMapMarker.worldMapMarker_C.reInitialise
struct AworldMapMarker_C_reInitialise_Params
{
};

// Function worldMapMarker.worldMapMarker_C.recalcWaitTime
struct AworldMapMarker_C_recalcWaitTime_Params
{
};

// Function worldMapMarker.worldMapMarker_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
struct AworldMapMarker_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
{
	class URamaSaveComponent*                          RamaSaveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LevelPackageName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function worldMapMarker.worldMapMarker_C.ExecuteUbergraph_worldMapMarker
struct AworldMapMarker_C_ExecuteUbergraph_worldMapMarker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
