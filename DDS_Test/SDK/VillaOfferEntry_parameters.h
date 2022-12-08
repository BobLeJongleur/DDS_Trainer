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

// Function VillaOfferEntry.VillaOfferEntry_C.VillaToSector
struct UVillaOfferEntry_C_VillaToSector_Params
{
	struct FName                                       VillaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       SectorNam;                                                // (Parm, OutParm)
};

// Function VillaOfferEntry.VillaOfferEntry_C.Get_txtPriceTotal_ToolTipWidget_1
struct UVillaOfferEntry_C_Get_txtPriceTotal_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VillaOfferEntry.VillaOfferEntry_C.Get_btnBuy_ToolTipWidget_1
struct UVillaOfferEntry_C_Get_btnBuy_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VillaOfferEntry.VillaOfferEntry_C.GetText_1
struct UVillaOfferEntry_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VillaOfferEntry.VillaOfferEntry_C.UserClickedCancel
struct UVillaOfferEntry_C_UserClickedCancel_Params
{
	struct FString                                     ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function VillaOfferEntry.VillaOfferEntry_C.Construct
struct UVillaOfferEntry_C_Construct_Params
{
};

// Function VillaOfferEntry.VillaOfferEntry_C.setup
struct UVillaOfferEntry_C_setup_Params
{
	struct FName                                       VillaID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UVillaOfferWidget_C*                         Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Bought;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AVillaPropertyInstance_C*                    Property;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaOfferEntry.VillaOfferEntry_C.BndEvt__btnBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UVillaOfferEntry_C_BndEvt__btnBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function VillaOfferEntry.VillaOfferEntry_C.OnMouseEnter
struct UVillaOfferEntry_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function VillaOfferEntry.VillaOfferEntry_C.OnMouseLeave
struct UVillaOfferEntry_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function VillaOfferEntry.VillaOfferEntry_C.UserClickedConfirm
struct UVillaOfferEntry_C_UserClickedConfirm_Params
{
	struct FString                                     ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function VillaOfferEntry.VillaOfferEntry_C.ExecuteUbergraph_VillaOfferEntry
struct UVillaOfferEntry_C_ExecuteUbergraph_VillaOfferEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
