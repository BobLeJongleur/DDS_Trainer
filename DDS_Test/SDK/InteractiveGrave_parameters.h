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

// Function InteractiveGrave.InteractiveGrave_C.SetActivity
struct AInteractiveGrave_C_SetActivity_Params
{
	bool                                               GraveActivity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractiveGrave.InteractiveGrave_C.UserConstructionScript
struct AInteractiveGrave_C_UserConstructionScript_Params
{
};

// Function InteractiveGrave.InteractiveGrave_C.InteractionActivate
struct AInteractiveGrave_C_InteractionActivate_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractiveGrave.InteractiveGrave_C.DetonateGrave
struct AInteractiveGrave_C_DetonateGrave_Params
{
};

// Function InteractiveGrave.InteractiveGrave_C.SetPostDetonated
struct AInteractiveGrave_C_SetPostDetonated_Params
{
};

// Function InteractiveGrave.InteractiveGrave_C.SetPreDetonated
struct AInteractiveGrave_C_SetPreDetonated_Params
{
};

// Function InteractiveGrave.InteractiveGrave_C.ExecuteUbergraph_InteractiveGrave
struct AInteractiveGrave_C_ExecuteUbergraph_InteractiveGrave_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
