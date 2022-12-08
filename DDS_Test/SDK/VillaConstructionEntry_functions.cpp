
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

// Function VillaConstructionEntry.VillaConstructionEntry_C.Get_txtPrice_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVillaConstructionEntry_C::Get_txtPrice_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionEntry.VillaConstructionEntry_C.Get_txtPrice_Text_1");

	UVillaConstructionEntry_C_Get_txtPrice_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VillaConstructionEntry.VillaConstructionEntry_C.CloseFrontWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanClose                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVillaConstructionEntry_C::CloseFrontWidget(bool* CanClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionEntry.VillaConstructionEntry_C.CloseFrontWidget");

	UVillaConstructionEntry_C_CloseFrontWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanClose != nullptr)
		*CanClose = params.CanClose;
}


// Function VillaConstructionEntry.VillaConstructionEntry_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVillaConstructionEntry_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionEntry.VillaConstructionEntry_C.GetText_1");

	UVillaConstructionEntry_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VillaConstructionEntry.VillaConstructionEntry_C.Get_btnConstruct_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVillaConstructionEntry_C::Get_btnConstruct_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionEntry.VillaConstructionEntry_C.Get_btnConstruct_bIsEnabled_1");

	UVillaConstructionEntry_C_Get_btnConstruct_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VillaConstructionEntry.VillaConstructionEntry_C.Get_btnInstall_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UVillaConstructionEntry_C::Get_btnInstall_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionEntry.VillaConstructionEntry_C.Get_btnInstall_Visibility_1");

	UVillaConstructionEntry_C_Get_btnInstall_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VillaConstructionEntry.VillaConstructionEntry_C.Get_btnConstruct_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UVillaConstructionEntry_C::Get_btnConstruct_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionEntry.VillaConstructionEntry_C.Get_btnConstruct_Visibility_1");

	UVillaConstructionEntry_C_Get_btnConstruct_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VillaConstructionEntry.VillaConstructionEntry_C.BndEvt__btnConstruct_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UVillaConstructionEntry_C::BndEvt__btnConstruct_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionEntry.VillaConstructionEntry_C.BndEvt__btnConstruct_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UVillaConstructionEntry_C_BndEvt__btnConstruct_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionEntry.VillaConstructionEntry_C.UpdateState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Available                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ready                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Built                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVillaConstructionEntry_C::UpdateState(bool Available, bool active, bool Ready, bool Built, float Progress, float TotalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionEntry.VillaConstructionEntry_C.UpdateState");

	UVillaConstructionEntry_C_UpdateState_Params params;
	params.Available = Available;
	params.active = active;
	params.Ready = Ready;
	params.Built = Built;
	params.Progress = Progress;
	params.TotalTime = TotalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionEntry.VillaConstructionEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVillaConstructionEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionEntry.VillaConstructionEntry_C.Tick");

	UVillaConstructionEntry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionEntry.VillaConstructionEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVillaConstructionEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionEntry.VillaConstructionEntry_C.Construct");

	UVillaConstructionEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionEntry.VillaConstructionEntry_C.BndEvt__btnInstall_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UVillaConstructionEntry_C::BndEvt__btnInstall_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionEntry.VillaConstructionEntry_C.BndEvt__btnInstall_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UVillaConstructionEntry_C_BndEvt__btnInstall_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionEntry.VillaConstructionEntry_C.ExecuteUbergraph_VillaConstructionEntry
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVillaConstructionEntry_C::ExecuteUbergraph_VillaConstructionEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionEntry.VillaConstructionEntry_C.ExecuteUbergraph_VillaConstructionEntry");

	UVillaConstructionEntry_C_ExecuteUbergraph_VillaConstructionEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionEntry.VillaConstructionEntry_C.ClickedInstall__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UVillaConstructionEntry_C::ClickedInstall__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionEntry.VillaConstructionEntry_C.ClickedInstall__DelegateSignature");

	UVillaConstructionEntry_C_ClickedInstall__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaConstructionEntry.VillaConstructionEntry_C.ClickedConstruct__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UVillaConstructionEntry_C::ClickedConstruct__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaConstructionEntry.VillaConstructionEntry_C.ClickedConstruct__DelegateSignature");

	UVillaConstructionEntry_C_ClickedConstruct__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
