
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

// Function VillaConstructionWidget.VillaConstructionWidget_C.CloseFrontWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanClose                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVillaConstructionWidget_C::CloseFrontWidget(bool* CanClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.CloseFrontWidget");

	UVillaConstructionWidget_C_CloseFrontWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanClose != nullptr)
		*CanClose = params.CanClose;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.Get_txtBankMoney_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVillaConstructionWidget_C::Get_txtBankMoney_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.Get_txtBankMoney_Text_1");

	UVillaConstructionWidget_C_Get_txtBankMoney_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.UpdateState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVillaConstructionWidget_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.UpdateState");

	UVillaConstructionWidget_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVillaConstructionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.Construct");

	UVillaConstructionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVillaPropertyInstance_C* VillaRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AVillaConstructionTable_C* ConstructionTable              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVillaConstructionWidget_C::setup(class AVillaPropertyInstance_C* VillaRef, class AVillaConstructionTable_C* ConstructionTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.setup");

	UVillaConstructionWidget_C_setup_Params params;
	params.VillaRef = VillaRef;
	params.ConstructionTable = ConstructionTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_K2Node_ComponentBoundEvent_1_ClickedConstruct__DelegateSignature
// (BlueprintEvent)

void UVillaConstructionWidget_C::BndEvt__VillaConstructionEntry_K2Node_ComponentBoundEvent_1_ClickedConstruct__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_K2Node_ComponentBoundEvent_1_ClickedConstruct__DelegateSignature");

	UVillaConstructionWidget_C_BndEvt__VillaConstructionEntry_K2Node_ComponentBoundEvent_1_ClickedConstruct__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_0_K2Node_ComponentBoundEvent_2_ClickedConstruct__DelegateSignature
// (BlueprintEvent)

void UVillaConstructionWidget_C::BndEvt__VillaConstructionEntry_0_K2Node_ComponentBoundEvent_2_ClickedConstruct__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_0_K2Node_ComponentBoundEvent_2_ClickedConstruct__DelegateSignature");

	UVillaConstructionWidget_C_BndEvt__VillaConstructionEntry_0_K2Node_ComponentBoundEvent_2_ClickedConstruct__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_1_K2Node_ComponentBoundEvent_3_ClickedConstruct__DelegateSignature
// (BlueprintEvent)

void UVillaConstructionWidget_C::BndEvt__VillaConstructionEntry_1_K2Node_ComponentBoundEvent_3_ClickedConstruct__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_1_K2Node_ComponentBoundEvent_3_ClickedConstruct__DelegateSignature");

	UVillaConstructionWidget_C_BndEvt__VillaConstructionEntry_1_K2Node_ComponentBoundEvent_3_ClickedConstruct__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_2_K2Node_ComponentBoundEvent_4_ClickedConstruct__DelegateSignature
// (BlueprintEvent)

void UVillaConstructionWidget_C::BndEvt__VillaConstructionEntry_2_K2Node_ComponentBoundEvent_4_ClickedConstruct__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_2_K2Node_ComponentBoundEvent_4_ClickedConstruct__DelegateSignature");

	UVillaConstructionWidget_C_BndEvt__VillaConstructionEntry_2_K2Node_ComponentBoundEvent_4_ClickedConstruct__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.killMe
// (BlueprintCallable, BlueprintEvent)

void UVillaConstructionWidget_C::killMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.killMe");

	UVillaConstructionWidget_C_killMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_C_0_K2Node_ComponentBoundEvent_5_ClickedConstruct__DelegateSignature
// (BlueprintEvent)

void UVillaConstructionWidget_C::BndEvt__VillaConstructionEntry_C_0_K2Node_ComponentBoundEvent_5_ClickedConstruct__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_C_0_K2Node_ComponentBoundEvent_5_ClickedConstruct__DelegateSignature");

	UVillaConstructionWidget_C_BndEvt__VillaConstructionEntry_C_0_K2Node_ComponentBoundEvent_5_ClickedConstruct__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_K2Node_ComponentBoundEvent_6_ClickedInstall__DelegateSignature
// (BlueprintEvent)

void UVillaConstructionWidget_C::BndEvt__VillaConstructionEntry_K2Node_ComponentBoundEvent_6_ClickedInstall__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_K2Node_ComponentBoundEvent_6_ClickedInstall__DelegateSignature");

	UVillaConstructionWidget_C_BndEvt__VillaConstructionEntry_K2Node_ComponentBoundEvent_6_ClickedInstall__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_0_K2Node_ComponentBoundEvent_7_ClickedInstall__DelegateSignature
// (BlueprintEvent)

void UVillaConstructionWidget_C::BndEvt__VillaConstructionEntry_0_K2Node_ComponentBoundEvent_7_ClickedInstall__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_0_K2Node_ComponentBoundEvent_7_ClickedInstall__DelegateSignature");

	UVillaConstructionWidget_C_BndEvt__VillaConstructionEntry_0_K2Node_ComponentBoundEvent_7_ClickedInstall__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_1_K2Node_ComponentBoundEvent_8_ClickedInstall__DelegateSignature
// (BlueprintEvent)

void UVillaConstructionWidget_C::BndEvt__VillaConstructionEntry_1_K2Node_ComponentBoundEvent_8_ClickedInstall__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_1_K2Node_ComponentBoundEvent_8_ClickedInstall__DelegateSignature");

	UVillaConstructionWidget_C_BndEvt__VillaConstructionEntry_1_K2Node_ComponentBoundEvent_8_ClickedInstall__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_2_K2Node_ComponentBoundEvent_9_ClickedInstall__DelegateSignature
// (BlueprintEvent)

void UVillaConstructionWidget_C::BndEvt__VillaConstructionEntry_2_K2Node_ComponentBoundEvent_9_ClickedInstall__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_2_K2Node_ComponentBoundEvent_9_ClickedInstall__DelegateSignature");

	UVillaConstructionWidget_C_BndEvt__VillaConstructionEntry_2_K2Node_ComponentBoundEvent_9_ClickedInstall__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_C_0_K2Node_ComponentBoundEvent_10_ClickedInstall__DelegateSignature
// (BlueprintEvent)

void UVillaConstructionWidget_C::BndEvt__VillaConstructionEntry_C_0_K2Node_ComponentBoundEvent_10_ClickedInstall__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__VillaConstructionEntry_C_0_K2Node_ComponentBoundEvent_10_ClickedInstall__DelegateSignature");

	UVillaConstructionWidget_C_BndEvt__VillaConstructionEntry_C_0_K2Node_ComponentBoundEvent_10_ClickedInstall__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.StageUpdate
// (BlueprintCallable, BlueprintEvent)

void UVillaConstructionWidget_C::StageUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.StageUpdate");

	UVillaConstructionWidget_C_StageUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UVillaConstructionWidget_C::BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UVillaConstructionWidget_C_BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionWidget.VillaConstructionWidget_C.ExecuteUbergraph_VillaConstructionWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVillaConstructionWidget_C::ExecuteUbergraph_VillaConstructionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionWidget.VillaConstructionWidget_C.ExecuteUbergraph_VillaConstructionWidget");

	UVillaConstructionWidget_C_ExecuteUbergraph_VillaConstructionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
