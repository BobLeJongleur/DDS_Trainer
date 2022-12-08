
#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function mixDetailsWidget.mixDetailsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UmixDetailsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function mixDetailsWidget.mixDetailsWidget_C.Construct");

	UmixDetailsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mixDetailsWidget.mixDetailsWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UmixDetailsWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function mixDetailsWidget.mixDetailsWidget_C.Tick");

	UmixDetailsWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mixDetailsWidget.mixDetailsWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AworkStationMixerBase_C* Mixer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UmixDetailsWidget_C::Setup(class AworkStationMixerBase_C* Mixer)
{
	static auto fn = UObject::FindObject<UFunction>("Function mixDetailsWidget.mixDetailsWidget_C.Setup");

	UmixDetailsWidget_C_Setup_Params params;
	params.Mixer = Mixer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mixDetailsWidget.mixDetailsWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UmixDetailsWidget_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mixDetailsWidget.mixDetailsWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UmixDetailsWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mixDetailsWidget.mixDetailsWidget_C.killMe
// (BlueprintCallable, BlueprintEvent)

void UmixDetailsWidget_C::killMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function mixDetailsWidget.mixDetailsWidget_C.killMe");

	UmixDetailsWidget_C_killMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mixDetailsWidget.mixDetailsWidget_C.ExecuteUbergraph_mixDetailsWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UmixDetailsWidget_C::ExecuteUbergraph_mixDetailsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function mixDetailsWidget.mixDetailsWidget_C.ExecuteUbergraph_mixDetailsWidget");

	UmixDetailsWidget_C_ExecuteUbergraph_mixDetailsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
