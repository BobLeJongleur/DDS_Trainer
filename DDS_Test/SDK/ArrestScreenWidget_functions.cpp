
#include "pch.h"

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ArrestScreenWidget.ArrestScreenWidget_C.RenderArrestedList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UArrestScreenWidget_C::RenderArrestedList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArrestScreenWidget.ArrestScreenWidget_C.RenderArrestedList");

	UArrestScreenWidget_C_RenderArrestedList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArrestScreenWidget.ArrestScreenWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UArrestScreenWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArrestScreenWidget.ArrestScreenWidget_C.Construct");

	UArrestScreenWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArrestScreenWidget.ArrestScreenWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AsalesManager_C*         salesManager                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UshadyCommInterface_C*   ParentShady                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UArrestScreenWidget_C::setup(class AsalesManager_C* salesManager, class UshadyCommInterface_C* ParentShady)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArrestScreenWidget.ArrestScreenWidget_C.setup");

	UArrestScreenWidget_C_setup_Params params;
	params.salesManager = salesManager;
	params.ParentShady = ParentShady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArrestScreenWidget.ArrestScreenWidget_C.BndEvt__btnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UArrestScreenWidget_C::BndEvt__btnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArrestScreenWidget.ArrestScreenWidget_C.BndEvt__btnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UArrestScreenWidget_C_BndEvt__btnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArrestScreenWidget.ArrestScreenWidget_C.ExecuteUbergraph_ArrestScreenWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UArrestScreenWidget_C::ExecuteUbergraph_ArrestScreenWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArrestScreenWidget.ArrestScreenWidget_C.ExecuteUbergraph_ArrestScreenWidget");

	UArrestScreenWidget_C_ExecuteUbergraph_ArrestScreenWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
