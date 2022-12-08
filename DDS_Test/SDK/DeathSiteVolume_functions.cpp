
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

// Function DeathSiteVolume.DeathSiteVolume_C.RamaExtend
// (Public, BlueprintCallable, BlueprintEvent)

void ADeathSiteVolume_C::RamaExtend()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSiteVolume.DeathSiteVolume_C.RamaExtend");

	ADeathSiteVolume_C_RamaExtend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSiteVolume.DeathSiteVolume_C.GetStageIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Stage                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeathSiteVolume_C::GetStageIndex(int* Stage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSiteVolume.DeathSiteVolume_C.GetStageIndex");

	ADeathSiteVolume_C_GetStageIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stage != nullptr)
		*Stage = params.Stage;
}


// Function DeathSiteVolume.DeathSiteVolume_C.UpdateSitePrefab
// (Public, BlueprintCallable, BlueprintEvent)

void ADeathSiteVolume_C::UpdateSitePrefab()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSiteVolume.DeathSiteVolume_C.UpdateSitePrefab");

	ADeathSiteVolume_C_UpdateSitePrefab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSiteVolume.DeathSiteVolume_C.SetSitePost
// (Public, BlueprintCallable, BlueprintEvent)

void ADeathSiteVolume_C::SetSitePost()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSiteVolume.DeathSiteVolume_C.SetSitePost");

	ADeathSiteVolume_C_SetSitePost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSiteVolume.DeathSiteVolume_C.CheckOtherVolumes
// (Public, BlueprintCallable, BlueprintEvent)

void ADeathSiteVolume_C::CheckOtherVolumes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSiteVolume.DeathSiteVolume_C.CheckOtherVolumes");

	ADeathSiteVolume_C_CheckOtherVolumes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSiteVolume.DeathSiteVolume_C.ActivateSpot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            taskID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeathSiteVolume_C::ActivateSpot(int taskID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSiteVolume.DeathSiteVolume_C.ActivateSpot");

	ADeathSiteVolume_C_ActivateSpot_Params params;
	params.taskID = taskID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSiteVolume.DeathSiteVolume_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeathSiteVolume_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSiteVolume.DeathSiteVolume_C.UserConstructionScript");

	ADeathSiteVolume_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSiteVolume.DeathSiteVolume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADeathSiteVolume_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSiteVolume.DeathSiteVolume_C.ReceiveBeginPlay");

	ADeathSiteVolume_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSiteVolume.DeathSiteVolume_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADeathSiteVolume_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSiteVolume.DeathSiteVolume_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ADeathSiteVolume_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSiteVolume.DeathSiteVolume_C.ExecuteSiteEvent
// (BlueprintCallable, BlueprintEvent)

void ADeathSiteVolume_C::ExecuteSiteEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSiteVolume.DeathSiteVolume_C.ExecuteSiteEvent");

	ADeathSiteVolume_C_ExecuteSiteEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSiteVolume.DeathSiteVolume_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URamaSaveComponent*      RamaSaveComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 LevelPackageName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ADeathSiteVolume_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSiteVolume.DeathSiteVolume_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature");

	ADeathSiteVolume_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature_Params params;
	params.RamaSaveComponent = RamaSaveComponent;
	params.LevelPackageName = LevelPackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSiteVolume.DeathSiteVolume_C.SubclassSiteActivated
// (BlueprintCallable, BlueprintEvent)

void ADeathSiteVolume_C::SubclassSiteActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSiteVolume.DeathSiteVolume_C.SubclassSiteActivated");

	ADeathSiteVolume_C_SubclassSiteActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSiteVolume.DeathSiteVolume_C.OverrideSitePrefab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Stage                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeathSiteVolume_C::OverrideSitePrefab(int Stage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSiteVolume.DeathSiteVolume_C.OverrideSitePrefab");

	ADeathSiteVolume_C_OverrideSitePrefab_Params params;
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathSiteVolume.DeathSiteVolume_C.ExecuteUbergraph_DeathSiteVolume
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeathSiteVolume_C::ExecuteUbergraph_DeathSiteVolume(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathSiteVolume.DeathSiteVolume_C.ExecuteUbergraph_DeathSiteVolume");

	ADeathSiteVolume_C_ExecuteUbergraph_DeathSiteVolume_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
