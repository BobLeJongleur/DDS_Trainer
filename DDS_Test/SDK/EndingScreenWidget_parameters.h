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

// Function EndingScreenWidget.EndingScreenWidget_C.TeleportPlayer
struct UEndingScreenWidget_C_TeleportPlayer_Params
{
};

// Function EndingScreenWidget.EndingScreenWidget_C.FadeOutSound
struct UEndingScreenWidget_C_FadeOutSound_Params
{
};

// Function EndingScreenWidget.EndingScreenWidget_C.RestroreSound
struct UEndingScreenWidget_C_RestroreSound_Params
{
};

// Function EndingScreenWidget.EndingScreenWidget_C.Construct
struct UEndingScreenWidget_C_Construct_Params
{
};

// Function EndingScreenWidget.EndingScreenWidget_C.Tick
struct UEndingScreenWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndingScreenWidget.EndingScreenWidget_C.NarrEnded
struct UEndingScreenWidget_C_NarrEnded_Params
{
};

// Function EndingScreenWidget.EndingScreenWidget_C.SkipEndCredits
struct UEndingScreenWidget_C_SkipEndCredits_Params
{
};

// Function EndingScreenWidget.EndingScreenWidget_C.BndEvt__btnSkip_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UEndingScreenWidget_C_BndEvt__btnSkip_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function EndingScreenWidget.EndingScreenWidget_C.ForceSkipCredits
struct UEndingScreenWidget_C_ForceSkipCredits_Params
{
};

// Function EndingScreenWidget.EndingScreenWidget_C.ExecuteUbergraph_EndingScreenWidget
struct UEndingScreenWidget_C_ExecuteUbergraph_EndingScreenWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
