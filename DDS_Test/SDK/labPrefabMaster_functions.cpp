
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

// Function labPrefabMaster.labPrefabMaster_C.SetMeshesOverlap
// (Public, BlueprintCallable, BlueprintEvent)

void AlabPrefabMaster_C::SetMeshesOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function labPrefabMaster.labPrefabMaster_C.SetMeshesOverlap");

	AlabPrefabMaster_C_SetMeshesOverlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labPrefabMaster.labPrefabMaster_C.SendCrewHoldWarning
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CashLacking                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DrugID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabPrefabMaster_C::SendCrewHoldWarning(int CashLacking, const struct FName& DrugID)
{
	static auto fn = UObject::FindObject<UFunction>("Function labPrefabMaster.labPrefabMaster_C.SendCrewHoldWarning");

	AlabPrefabMaster_C_SendCrewHoldWarning_Params params;
	params.CashLacking = CashLacking;
	params.DrugID = DrugID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labPrefabMaster.labPrefabMaster_C.UpdateCrewModifier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AlabPrefabMaster_C::UpdateCrewModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function labPrefabMaster.labPrefabMaster_C.UpdateCrewModifier");

	AlabPrefabMaster_C_UpdateCrewModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labPrefabMaster.labPrefabMaster_C.PurgeLab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Raided                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabPrefabMaster_C::PurgeLab(bool Raided)
{
	static auto fn = UObject::FindObject<UFunction>("Function labPrefabMaster.labPrefabMaster_C.PurgeLab");

	AlabPrefabMaster_C_PurgeLab_Params params;
	params.Raided = Raided;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labPrefabMaster.labPrefabMaster_C.TryInitiateProduction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SendMessage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabPrefabMaster_C::TryInitiateProduction(bool SendMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function labPrefabMaster.labPrefabMaster_C.TryInitiateProduction");

	AlabPrefabMaster_C_TryInitiateProduction_Params params;
	params.SendMessage = SendMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labPrefabMaster.labPrefabMaster_C.OutputPackage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AlabPrefabMaster_C::OutputPackage()
{
	static auto fn = UObject::FindObject<UFunction>("Function labPrefabMaster.labPrefabMaster_C.OutputPackage");

	AlabPrefabMaster_C_OutputPackage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labPrefabMaster.labPrefabMaster_C.CountdownProduction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabPrefabMaster_C::CountdownProduction(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function labPrefabMaster.labPrefabMaster_C.CountdownProduction");

	AlabPrefabMaster_C_CountdownProduction_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labPrefabMaster.labPrefabMaster_C.SetPrefabActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ArrestCrew                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabPrefabMaster_C::SetPrefabActive(bool active, bool ArrestCrew)
{
	static auto fn = UObject::FindObject<UFunction>("Function labPrefabMaster.labPrefabMaster_C.SetPrefabActive");

	AlabPrefabMaster_C_SetPrefabActive_Params params;
	params.active = active;
	params.ArrestCrew = ArrestCrew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labPrefabMaster.labPrefabMaster_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AlabPrefabMaster_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function labPrefabMaster.labPrefabMaster_C.UserConstructionScript");

	AlabPrefabMaster_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labPrefabMaster.labPrefabMaster_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AlabPrefabMaster_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function labPrefabMaster.labPrefabMaster_C.ReceiveBeginPlay");

	AlabPrefabMaster_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labPrefabMaster.labPrefabMaster_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabPrefabMaster_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function labPrefabMaster.labPrefabMaster_C.ReceiveTick");

	AlabPrefabMaster_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labPrefabMaster.labPrefabMaster_C.CheckRestartProduction
// (BlueprintCallable, BlueprintEvent)

void AlabPrefabMaster_C::CheckRestartProduction()
{
	static auto fn = UObject::FindObject<UFunction>("Function labPrefabMaster.labPrefabMaster_C.CheckRestartProduction");

	AlabPrefabMaster_C_CheckRestartProduction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labPrefabMaster.labPrefabMaster_C.ExecuteUbergraph_labPrefabMaster
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabPrefabMaster_C::ExecuteUbergraph_labPrefabMaster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function labPrefabMaster.labPrefabMaster_C.ExecuteUbergraph_labPrefabMaster");

	AlabPrefabMaster_C_ExecuteUbergraph_labPrefabMaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function labPrefabMaster.labPrefabMaster_C.ProductionProgress__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ProgressPercent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlabPrefabMaster_C::ProductionProgress__DelegateSignature(float ProgressPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function labPrefabMaster.labPrefabMaster_C.ProductionProgress__DelegateSignature");

	AlabPrefabMaster_C_ProductionProgress__DelegateSignature_Params params;
	params.ProgressPercent = ProgressPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
