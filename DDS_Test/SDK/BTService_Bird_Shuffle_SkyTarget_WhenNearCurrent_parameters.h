#pragma once

#include "pch.h"

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BTService_Bird_Shuffle_SkyTarget_WhenNearCurrent.BTService_Bird_Shuffle_SkyTarget_WhenNearCurrent_C.ReceiveTickAI
struct UBTService_Bird_Shuffle_SkyTarget_WhenNearCurrent_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_Bird_Shuffle_SkyTarget_WhenNearCurrent.BTService_Bird_Shuffle_SkyTarget_WhenNearCurrent_C.ExecuteUbergraph_BTService_Bird_Shuffle_SkyTarget_WhenNearCurrent
struct UBTService_Bird_Shuffle_SkyTarget_WhenNearCurrent_C_ExecuteUbergraph_BTService_Bird_Shuffle_SkyTarget_WhenNearCurrent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
