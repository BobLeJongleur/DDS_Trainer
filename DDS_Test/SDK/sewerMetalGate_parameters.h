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

// Function sewerMetalGate.sewerMetalGate_C.DoorCanInteract
struct AsewerMetalGate_C_DoorCanInteract_Params
{
	bool                                               CanInteract;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       FailReason;                                               // (Parm, OutParm)
};

// Function sewerMetalGate.sewerMetalGate_C.UserConstructionScript
struct AsewerMetalGate_C_UserConstructionScript_Params
{
};

// Function sewerMetalGate.sewerMetalGate_C.ReceiveBeginPlay
struct AsewerMetalGate_C_ReceiveBeginPlay_Params
{
};

// Function sewerMetalGate.sewerMetalGate_C.ReceiveTick
struct AsewerMetalGate_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function sewerMetalGate.sewerMetalGate_C.ExecuteUbergraph_sewerMetalGate
struct AsewerMetalGate_C_ExecuteUbergraph_sewerMetalGate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
