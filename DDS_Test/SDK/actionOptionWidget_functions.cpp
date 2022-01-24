
#include "pch.h"

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function actionOptionWidget.actionOptionWidget_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InitActive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UactionOptionWidget_C::Setup(bool InitActive, const struct FText& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function actionOptionWidget.actionOptionWidget_C.Setup");

	UactionOptionWidget_C_Setup_Params params;
	params.InitActive = InitActive;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function actionOptionWidget.actionOptionWidget_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           activated                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UactionOptionWidget_C::SetActive(bool activated)
{
	static auto fn = UObject::FindObject<UFunction>("Function actionOptionWidget.actionOptionWidget_C.SetActive");

	UactionOptionWidget_C_SetActive_Params params;
	params.activated = activated;

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
