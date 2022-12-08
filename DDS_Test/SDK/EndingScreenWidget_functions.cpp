
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

// Function EndingScreenWidget.EndingScreenWidget_C.TeleportPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UEndingScreenWidget_C::TeleportPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndingScreenWidget.EndingScreenWidget_C.TeleportPlayer");

	UEndingScreenWidget_C_TeleportPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndingScreenWidget.EndingScreenWidget_C.FadeOutSound
// (Public, BlueprintCallable, BlueprintEvent)

void UEndingScreenWidget_C::FadeOutSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndingScreenWidget.EndingScreenWidget_C.FadeOutSound");

	UEndingScreenWidget_C_FadeOutSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndingScreenWidget.EndingScreenWidget_C.RestroreSound
// (Public, BlueprintCallable, BlueprintEvent)

void UEndingScreenWidget_C::RestroreSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndingScreenWidget.EndingScreenWidget_C.RestroreSound");

	UEndingScreenWidget_C_RestroreSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndingScreenWidget.EndingScreenWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEndingScreenWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndingScreenWidget.EndingScreenWidget_C.Construct");

	UEndingScreenWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndingScreenWidget.EndingScreenWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndingScreenWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndingScreenWidget.EndingScreenWidget_C.Tick");

	UEndingScreenWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndingScreenWidget.EndingScreenWidget_C.NarrEnded
// (BlueprintCallable, BlueprintEvent)

void UEndingScreenWidget_C::NarrEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndingScreenWidget.EndingScreenWidget_C.NarrEnded");

	UEndingScreenWidget_C_NarrEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndingScreenWidget.EndingScreenWidget_C.SkipEndCredits
// (BlueprintCallable, BlueprintEvent)

void UEndingScreenWidget_C::SkipEndCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndingScreenWidget.EndingScreenWidget_C.SkipEndCredits");

	UEndingScreenWidget_C_SkipEndCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndingScreenWidget.EndingScreenWidget_C.BndEvt__btnSkip_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEndingScreenWidget_C::BndEvt__btnSkip_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndingScreenWidget.EndingScreenWidget_C.BndEvt__btnSkip_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UEndingScreenWidget_C_BndEvt__btnSkip_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndingScreenWidget.EndingScreenWidget_C.ForceSkipCredits
// (BlueprintCallable, BlueprintEvent)

void UEndingScreenWidget_C::ForceSkipCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndingScreenWidget.EndingScreenWidget_C.ForceSkipCredits");

	UEndingScreenWidget_C_ForceSkipCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndingScreenWidget.EndingScreenWidget_C.ExecuteUbergraph_EndingScreenWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndingScreenWidget_C::ExecuteUbergraph_EndingScreenWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndingScreenWidget.EndingScreenWidget_C.ExecuteUbergraph_EndingScreenWidget");

	UEndingScreenWidget_C_ExecuteUbergraph_EndingScreenWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
