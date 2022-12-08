
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

// Function BaseDeadBody.BaseDeadBody_C.UpdateMorphTargets
// (Public, BlueprintCallable, BlueprintEvent)

void ABaseDeadBody_C::UpdateMorphTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseDeadBody.BaseDeadBody_C.UpdateMorphTargets");

	ABaseDeadBody_C_UpdateMorphTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseDeadBody.BaseDeadBody_C.GetMorphTargetValue
// (Public, BlueprintCallable, BlueprintEvent)

void ABaseDeadBody_C::GetMorphTargetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseDeadBody.BaseDeadBody_C.GetMorphTargetValue");

	ABaseDeadBody_C_GetMorphTargetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseDeadBody.BaseDeadBody_C.SetMasterPoseComponentForParts
// (Public, BlueprintCallable, BlueprintEvent)

void ABaseDeadBody_C::SetMasterPoseComponentForParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseDeadBody.BaseDeadBody_C.SetMasterPoseComponentForParts");

	ABaseDeadBody_C_SetMasterPoseComponentForParts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseDeadBody.BaseDeadBody_C.IsDefaultMeshInheritungItsAnimationAsset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABaseDeadBody_C::IsDefaultMeshInheritungItsAnimationAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseDeadBody.BaseDeadBody_C.IsDefaultMeshInheritungItsAnimationAsset");

	ABaseDeadBody_C_IsDefaultMeshInheritungItsAnimationAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseDeadBody.BaseDeadBody_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABaseDeadBody_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseDeadBody.BaseDeadBody_C.UserConstructionScript");

	ABaseDeadBody_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseDeadBody.BaseDeadBody_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABaseDeadBody_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseDeadBody.BaseDeadBody_C.ReceiveBeginPlay");

	ABaseDeadBody_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseDeadBody.BaseDeadBody_C.ExecuteUbergraph_BaseDeadBody
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABaseDeadBody_C::ExecuteUbergraph_BaseDeadBody(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseDeadBody.BaseDeadBody_C.ExecuteUbergraph_BaseDeadBody");

	ABaseDeadBody_C_ExecuteUbergraph_BaseDeadBody_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
