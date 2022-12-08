
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

// Function ratDropSign.ratDropSign_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AratDropSign_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ratDropSign.ratDropSign_C.UserConstructionScript");

	AratDropSign_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ratDropSign.ratDropSign_C.AnimLoop__FinishedFunc
// (BlueprintEvent)

void AratDropSign_C::AnimLoop__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ratDropSign.ratDropSign_C.AnimLoop__FinishedFunc");

	AratDropSign_C_AnimLoop__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ratDropSign.ratDropSign_C.AnimLoop__UpdateFunc
// (BlueprintEvent)

void AratDropSign_C::AnimLoop__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ratDropSign.ratDropSign_C.AnimLoop__UpdateFunc");

	AratDropSign_C_AnimLoop__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ratDropSign.ratDropSign_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AratDropSign_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ratDropSign.ratDropSign_C.ReceiveBeginPlay");

	AratDropSign_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ratDropSign.ratDropSign_C.SetActivationState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AratDropSign_C::SetActivationState(bool active, bool Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ratDropSign.ratDropSign_C.SetActivationState");

	AratDropSign_C_SetActivationState_Params params;
	params.active = active;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ratDropSign.ratDropSign_C.startPlayAnim
// (BlueprintCallable, BlueprintEvent)

void AratDropSign_C::startPlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ratDropSign.ratDropSign_C.startPlayAnim");

	AratDropSign_C_startPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ratDropSign.ratDropSign_C.endPlayAnim
// (BlueprintCallable, BlueprintEvent)

void AratDropSign_C::endPlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ratDropSign.ratDropSign_C.endPlayAnim");

	AratDropSign_C_endPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ratDropSign.ratDropSign_C.ExecuteUbergraph_ratDropSign
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AratDropSign_C::ExecuteUbergraph_ratDropSign(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ratDropSign.ratDropSign_C.ExecuteUbergraph_ratDropSign");

	AratDropSign_C_ExecuteUbergraph_ratDropSign_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
