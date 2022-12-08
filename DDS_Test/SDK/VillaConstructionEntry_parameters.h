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

// Function VillaConstructionEntry.VillaConstructionEntry_C.Get_txtPrice_Text_1
struct UVillaConstructionEntry_C_Get_txtPrice_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VillaConstructionEntry.VillaConstructionEntry_C.CloseFrontWidget
struct UVillaConstructionEntry_C_CloseFrontWidget_Params
{
	bool                                               CanClose;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VillaConstructionEntry.VillaConstructionEntry_C.GetText_1
struct UVillaConstructionEntry_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VillaConstructionEntry.VillaConstructionEntry_C.Get_btnConstruct_bIsEnabled_1
struct UVillaConstructionEntry_C_Get_btnConstruct_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VillaConstructionEntry.VillaConstructionEntry_C.Get_btnInstall_Visibility_1
struct UVillaConstructionEntry_C_Get_btnInstall_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VillaConstructionEntry.VillaConstructionEntry_C.Get_btnConstruct_Visibility_1
struct UVillaConstructionEntry_C_Get_btnConstruct_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VillaConstructionEntry.VillaConstructionEntry_C.BndEvt__btnConstruct_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UVillaConstructionEntry_C_BndEvt__btnConstruct_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function VillaConstructionEntry.VillaConstructionEntry_C.UpdateState
struct UVillaConstructionEntry_C_UpdateState_Params
{
	bool                                               Available;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ready;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Built;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaConstructionEntry.VillaConstructionEntry_C.Tick
struct UVillaConstructionEntry_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaConstructionEntry.VillaConstructionEntry_C.Construct
struct UVillaConstructionEntry_C_Construct_Params
{
};

// Function VillaConstructionEntry.VillaConstructionEntry_C.BndEvt__btnInstall_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UVillaConstructionEntry_C_BndEvt__btnInstall_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function VillaConstructionEntry.VillaConstructionEntry_C.ExecuteUbergraph_VillaConstructionEntry
struct UVillaConstructionEntry_C_ExecuteUbergraph_VillaConstructionEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaConstructionEntry.VillaConstructionEntry_C.ClickedInstall__DelegateSignature
struct UVillaConstructionEntry_C_ClickedInstall__DelegateSignature_Params
{
};

// Function VillaConstructionEntry.VillaConstructionEntry_C.ClickedConstruct__DelegateSignature
struct UVillaConstructionEntry_C_ClickedConstruct__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
