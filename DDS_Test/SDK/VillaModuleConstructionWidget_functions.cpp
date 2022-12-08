
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

// Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.CloseFrontWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanClose                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVillaModuleConstructionWidget_C::CloseFrontWidget(bool* CanClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.CloseFrontWidget");

	UVillaModuleConstructionWidget_C_CloseFrontWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanClose != nullptr)
		*CanClose = params.CanClose;
}


// Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.Get_txtBankMoney_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVillaModuleConstructionWidget_C::Get_txtBankMoney_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.Get_txtBankMoney_Text_1");

	UVillaModuleConstructionWidget_C_Get_txtBankMoney_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.GetColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UVillaModuleConstructionWidget_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.GetColorAndOpacity_1");

	UVillaModuleConstructionWidget_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVillaModuleConstructionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.Construct");

	UVillaModuleConstructionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AmainComputer_C*         Computer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AVillaModuleInstance_C*  Module                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVillaModuleConstructionWidget_C::setup(const struct FText& Name, float Price, class AmainComputer_C* Computer, class AVillaModuleInstance_C* Module)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.setup");

	UVillaModuleConstructionWidget_C_setup_Params params;
	params.Name = Name;
	params.Price = Price;
	params.Computer = Computer;
	params.Module = Module;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.BndEvt__btnInstall_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UVillaModuleConstructionWidget_C::BndEvt__btnInstall_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.BndEvt__btnInstall_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UVillaModuleConstructionWidget_C_BndEvt__btnInstall_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.ExecuteUbergraph_VillaModuleConstructionWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVillaModuleConstructionWidget_C::ExecuteUbergraph_VillaModuleConstructionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaModuleConstructionWidget.VillaModuleConstructionWidget_C.ExecuteUbergraph_VillaModuleConstructionWidget");

	UVillaModuleConstructionWidget_C_ExecuteUbergraph_VillaModuleConstructionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
