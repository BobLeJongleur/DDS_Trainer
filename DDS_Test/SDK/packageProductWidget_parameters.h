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

// Function packageProductWidget.packageProductWidget_C.choosePackageIcon
struct UpackageProductWidget_C_choosePackageIcon_Params
{
	TEnumAsByte<EdrugForm>                             Form;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  IconOut;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function packageProductWidget.packageProductWidget_C.addToPlayerInventory
struct UpackageProductWidget_C_addToPlayerInventory_Params
{
	bool                                               AllAdded;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function packageProductWidget.packageProductWidget_C.checkFitInventory
struct UpackageProductWidget_C_checkFitInventory_Params
{
};

// Function packageProductWidget.packageProductWidget_C.renderPackageList
struct UpackageProductWidget_C_renderPackageList_Params
{
};

// Function packageProductWidget.packageProductWidget_C.addPackage
struct UpackageProductWidget_C_addPackage_Params
{
	int                                                Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function packageProductWidget.packageProductWidget_C.generateDurgIcon
struct UpackageProductWidget_C_generateDurgIcon_Params
{
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EdrugForm>                             Form;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  IconOut;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function packageProductWidget.packageProductWidget_C.checkButtonActivity
struct UpackageProductWidget_C_checkButtonActivity_Params
{
};

// Function packageProductWidget.packageProductWidget_C.checkCanFitInventory
struct UpackageProductWidget_C_checkCanFitInventory_Params
{
	bool                                               canFit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function packageProductWidget.packageProductWidget_C.Construct
struct UpackageProductWidget_C_Construct_Params
{
};

// Function packageProductWidget.packageProductWidget_C.Tick
struct UpackageProductWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function packageProductWidget.packageProductWidget_C.setup
struct UpackageProductWidget_C_setup_Params
{
	class AworkStationEquipmentBase_C*                 EqRef;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DrugOverride;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMixProportionsStruct                       MixOverride;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Mass;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function packageProductWidget.packageProductWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UpackageProductWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function packageProductWidget.packageProductWidget_C.killMe
struct UpackageProductWidget_C_killMe_Params
{
};

// Function packageProductWidget.packageProductWidget_C.BndEvt__btnAddPackage_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UpackageProductWidget_C_BndEvt__btnAddPackage_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function packageProductWidget.packageProductWidget_C.BndEvt__btnAddInventory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UpackageProductWidget_C_BndEvt__btnAddInventory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function packageProductWidget.packageProductWidget_C.ExecuteUbergraph_packageProductWidget
struct UpackageProductWidget_C_ExecuteUbergraph_packageProductWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function packageProductWidget.packageProductWidget_C.TookMass__DelegateSignature
struct UpackageProductWidget_C_TookMass__DelegateSignature_Params
{
	float                                              Mass;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
