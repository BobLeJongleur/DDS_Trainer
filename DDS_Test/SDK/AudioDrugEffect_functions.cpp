
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

// Function AudioDrugEffect.AudioDrugEffect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAudioDrugEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioDrugEffect.AudioDrugEffect_C.UserConstructionScript");

	AAudioDrugEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioDrugEffect.AudioDrugEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAudioDrugEffect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioDrugEffect.AudioDrugEffect_C.ReceiveBeginPlay");

	AAudioDrugEffect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioDrugEffect.AudioDrugEffect_C.EffectTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAudioDrugEffect_C::EffectTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioDrugEffect.AudioDrugEffect_C.EffectTick");

	AAudioDrugEffect_C_EffectTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioDrugEffect.AudioDrugEffect_C.StartEffect
// (Event, Public, BlueprintEvent)

void AAudioDrugEffect_C::StartEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioDrugEffect.AudioDrugEffect_C.StartEffect");

	AAudioDrugEffect_C_StartEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioDrugEffect.AudioDrugEffect_C.updateBinauralState
// (BlueprintCallable, BlueprintEvent)

void AAudioDrugEffect_C::updateBinauralState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioDrugEffect.AudioDrugEffect_C.updateBinauralState");

	AAudioDrugEffect_C_updateBinauralState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioDrugEffect.AudioDrugEffect_C.ExecuteUbergraph_AudioDrugEffect
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAudioDrugEffect_C::ExecuteUbergraph_AudioDrugEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioDrugEffect.AudioDrugEffect_C.ExecuteUbergraph_AudioDrugEffect");

	AAudioDrugEffect_C_ExecuteUbergraph_AudioDrugEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
