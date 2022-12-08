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

// Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.CloseFrontWidget
struct UVillaModuleConstructionWidget_C_CloseFrontWidget_Params
{
	bool                                               CanClose;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.Get_txtBankMoney_Text_1
struct UVillaModuleConstructionWidget_C_Get_txtBankMoney_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.GetColorAndOpacity_1
struct UVillaModuleConstructionWidget_C_GetColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.Construct
struct UVillaModuleConstructionWidget_C_Construct_Params
{
};

// Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.setup
struct UVillaModuleConstructionWidget_C_setup_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AmainComputer_C*                             Computer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AVillaModuleInstance_C*                      Module;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.BndEvt__btnInstall_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UVillaModuleConstructionWidget_C_BndEvt__btnInstall_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.ExecuteUbergraph_VillaModuleConstructionWidget
struct UVillaModuleConstructionWidget_C_ExecuteUbergraph_VillaModuleConstructionWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
