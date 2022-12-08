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

// Function playerCharacterPC.playerCharacterPC_C.FrontWidgetDestroyed
struct AplayerCharacterPC_C_FrontWidgetDestroyed_Params
{
	class UUserWidget*                                 WidgetRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function playerCharacterPC.playerCharacterPC_C.HasFrontWidgets
struct AplayerCharacterPC_C_HasFrontWidgets_Params
{
	bool                                               HasWidgets;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterPC.playerCharacterPC_C.CloseFrontWidget
struct AplayerCharacterPC_C_CloseFrontWidget_Params
{
};

// Function playerCharacterPC.playerCharacterPC_C.RegisterFrontWidget
struct AplayerCharacterPC_C_RegisterFrontWidget_Params
{
	class UUserWidget*                                 NewItem;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function playerCharacterPC.playerCharacterPC_C.UserConstructionScript
struct AplayerCharacterPC_C_UserConstructionScript_Params
{
};

// Function playerCharacterPC.playerCharacterPC_C.ReceiveBeginPlay
struct AplayerCharacterPC_C_ReceiveBeginPlay_Params
{
};

// Function playerCharacterPC.playerCharacterPC_C.ExecuteUbergraph_playerCharacterPC
struct AplayerCharacterPC_C_ExecuteUbergraph_playerCharacterPC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
