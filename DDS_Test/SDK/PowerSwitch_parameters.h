#pragma once

#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function PowerSwitch.PowerSwitch_C.VerifyHasKey
struct APowerSwitch_C_VerifyHasKey_Params
{
	class AplayerCharacterBP_C*                        Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasKey;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PowerSwitch.PowerSwitch_C.DisablePower
struct APowerSwitch_C_DisablePower_Params
{
	class AplayerCharacterBP_C*                        Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerSwitch.PowerSwitch_C.HasPower
struct APowerSwitch_C_HasPower_Params
{
	bool                                               Power;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PowerSwitch.PowerSwitch_C.UserConstructionScript
struct APowerSwitch_C_UserConstructionScript_Params
{
};

// Function PowerSwitch.PowerSwitch_C.ReceiveTick
struct APowerSwitch_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerSwitch.PowerSwitch_C.InteractionActivate
struct APowerSwitch_C_InteractionActivate_Params
{
	class AplayerCharacterBP_C*                        PlayerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerSwitch.PowerSwitch_C.ExecuteUbergraph_PowerSwitch
struct APowerSwitch_C_ExecuteUbergraph_PowerSwitch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerSwitch.PowerSwitch_C.PowerStateChange__DelegateSignature
struct APowerSwitch_C_PowerStateChange__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
