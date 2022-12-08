
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

// Function actionOptionWidget.actionOptionWidget_C.setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InitActive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UactionOptionWidget_C::setup(bool InitActive, const struct FText& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function actionOptionWidget.actionOptionWidget_C.setup");

	UactionOptionWidget_C_setup_Params params;
	params.InitActive = InitActive;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function actionOptionWidget.actionOptionWidget_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activated                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UactionOptionWidget_C::SetActive(bool Activated)
{
	static auto fn = UObject::FindObject<UFunction>("Function actionOptionWidget.actionOptionWidget_C.SetActive");

	UactionOptionWidget_C_SetActive_Params params;
	params.Activated = Activated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function actionOptionWidget.actionOptionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UactionOptionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function actionOptionWidget.actionOptionWidget_C.Construct");

	UactionOptionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function actionOptionWidget.actionOptionWidget_C.ExecuteUbergraph_actionOptionWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UactionOptionWidget_C::ExecuteUbergraph_actionOptionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function actionOptionWidget.actionOptionWidget_C.ExecuteUbergraph_actionOptionWidget");

	UactionOptionWidget_C_ExecuteUbergraph_actionOptionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
