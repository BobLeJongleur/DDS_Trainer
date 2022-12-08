
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

// Function InteractiveGrave.InteractiveGrave_C.SetActivity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GraveActivity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInteractiveGrave_C::SetActivity(bool GraveActivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGrave.InteractiveGrave_C.SetActivity");

	AInteractiveGrave_C_SetActivity_Params params;
	params.GraveActivity = GraveActivity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGrave.InteractiveGrave_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AInteractiveGrave_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGrave.InteractiveGrave_C.UserConstructionScript");

	AInteractiveGrave_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGrave.InteractiveGrave_C.InteractionActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInteractiveGrave_C::InteractionActivate(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGrave.InteractiveGrave_C.InteractionActivate");

	AInteractiveGrave_C_InteractionActivate_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGrave.InteractiveGrave_C.DetonateGrave
// (BlueprintCallable, BlueprintEvent)

void AInteractiveGrave_C::DetonateGrave()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGrave.InteractiveGrave_C.DetonateGrave");

	AInteractiveGrave_C_DetonateGrave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGrave.InteractiveGrave_C.SetPostDetonated
// (BlueprintCallable, BlueprintEvent)

void AInteractiveGrave_C::SetPostDetonated()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGrave.InteractiveGrave_C.SetPostDetonated");

	AInteractiveGrave_C_SetPostDetonated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGrave.InteractiveGrave_C.SetPreDetonated
// (BlueprintCallable, BlueprintEvent)

void AInteractiveGrave_C::SetPreDetonated()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGrave.InteractiveGrave_C.SetPreDetonated");

	AInteractiveGrave_C_SetPreDetonated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGrave.InteractiveGrave_C.ExecuteUbergraph_InteractiveGrave
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInteractiveGrave_C::ExecuteUbergraph_InteractiveGrave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGrave.InteractiveGrave_C.ExecuteUbergraph_InteractiveGrave");

	AInteractiveGrave_C_ExecuteUbergraph_InteractiveGrave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
