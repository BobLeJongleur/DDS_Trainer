
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

// Function NewEntranceLight.NewEntranceLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANewEntranceLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntranceLight.NewEntranceLight_C.UserConstructionScript");

	ANewEntranceLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntranceLight.NewEntranceLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANewEntranceLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntranceLight.NewEntranceLight_C.ReceiveBeginPlay");

	ANewEntranceLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntranceLight.NewEntranceLight_C.LightStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightVisible                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CastShadows                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewEntranceLight_C::LightStateChanged(bool LightVisible, bool CastShadows)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntranceLight.NewEntranceLight_C.LightStateChanged");

	ANewEntranceLight_C_LightStateChanged_Params params;
	params.LightVisible = LightVisible;
	params.CastShadows = CastShadows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewEntranceLight.NewEntranceLight_C.ExecuteUbergraph_NewEntranceLight
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewEntranceLight_C::ExecuteUbergraph_NewEntranceLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewEntranceLight.NewEntranceLight_C.ExecuteUbergraph_NewEntranceLight");

	ANewEntranceLight_C_ExecuteUbergraph_NewEntranceLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
