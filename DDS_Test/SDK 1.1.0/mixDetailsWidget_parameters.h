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

// Function mixDetailsWidget.mixDetailsWidget_C.Construct
struct UmixDetailsWidget_C_Construct_Params
{
};

// Function mixDetailsWidget.mixDetailsWidget_C.Tick
struct UmixDetailsWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mixDetailsWidget.mixDetailsWidget_C.Setup
struct UmixDetailsWidget_C_Setup_Params
{
	class AworkStationMixerBase_C*                     Mixer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mixDetailsWidget.mixDetailsWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UmixDetailsWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function mixDetailsWidget.mixDetailsWidget_C.killMe
struct UmixDetailsWidget_C_killMe_Params
{
};

// Function mixDetailsWidget.mixDetailsWidget_C.ExecuteUbergraph_mixDetailsWidget
struct UmixDetailsWidget_C_ExecuteUbergraph_mixDetailsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
