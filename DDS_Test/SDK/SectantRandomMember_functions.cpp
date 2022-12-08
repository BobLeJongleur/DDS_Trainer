
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

// Function SectantRandomMember.SectantRandomMember_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASectantRandomMember_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantRandomMember.SectantRandomMember_C.UserConstructionScript");

	ASectantRandomMember_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectantRandomMember.SectantRandomMember_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASectantRandomMember_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantRandomMember.SectantRandomMember_C.ReceiveBeginPlay");

	ASectantRandomMember_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectantRandomMember.SectantRandomMember_C.RamaLoadedEvent
// (BlueprintCallable, BlueprintEvent)

void ASectantRandomMember_C::RamaLoadedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantRandomMember.SectantRandomMember_C.RamaLoadedEvent");

	ASectantRandomMember_C_RamaLoadedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectantRandomMember.SectantRandomMember_C.ExecuteUbergraph_SectantRandomMember
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASectantRandomMember_C::ExecuteUbergraph_SectantRandomMember(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantRandomMember.SectantRandomMember_C.ExecuteUbergraph_SectantRandomMember");

	ASectantRandomMember_C_ExecuteUbergraph_SectantRandomMember_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectantRandomMember.SectantRandomMember_C.SectantKnocked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASectantRandomMember_C::SectantKnocked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectantRandomMember.SectantRandomMember_C.SectantKnocked__DelegateSignature");

	ASectantRandomMember_C_SectantKnocked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
