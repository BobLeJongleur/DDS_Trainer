
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

// Function InteractiveGraveManager.InteractiveGraveManager_C.OneBombPlanted
// (Public, BlueprintCallable, BlueprintEvent)

void AInteractiveGraveManager_C::OneBombPlanted()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGraveManager.InteractiveGraveManager_C.OneBombPlanted");

	AInteractiveGraveManager_C_OneBombPlanted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGraveManager.InteractiveGraveManager_C.SetGravesActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInteractiveGraveManager_C::SetGravesActive(bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGraveManager.InteractiveGraveManager_C.SetGravesActive");

	AInteractiveGraveManager_C_SetGravesActive_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGraveManager.InteractiveGraveManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AInteractiveGraveManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGraveManager.InteractiveGraveManager_C.UserConstructionScript");

	AInteractiveGraveManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGraveManager.InteractiveGraveManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AInteractiveGraveManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGraveManager.InteractiveGraveManager_C.ReceiveBeginPlay");

	AInteractiveGraveManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGraveManager.InteractiveGraveManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInteractiveGraveManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGraveManager.InteractiveGraveManager_C.ReceiveTick");

	AInteractiveGraveManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGraveManager.InteractiveGraveManager_C.StartGraveTask
// (BlueprintCallable, BlueprintEvent)

void AInteractiveGraveManager_C::StartGraveTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGraveManager.InteractiveGraveManager_C.StartGraveTask");

	AInteractiveGraveManager_C_StartGraveTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGraveManager.InteractiveGraveManager_C.ObtainedBombs
// (BlueprintCallable, BlueprintEvent)

void AInteractiveGraveManager_C::ObtainedBombs()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGraveManager.InteractiveGraveManager_C.ObtainedBombs");

	AInteractiveGraveManager_C_ObtainedBombs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGraveManager.InteractiveGraveManager_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AInteractiveGraveManager_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGraveManager.InteractiveGraveManager_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AInteractiveGraveManager_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function InteractiveGraveManager.InteractiveGraveManager_C.PlantedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumPlanted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInteractiveGraveManager_C::PlantedEvent(int NumPlanted)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGraveManager.InteractiveGraveManager_C.PlantedEvent");

	AInteractiveGraveManager_C_PlantedEvent_Params params;
	params.NumPlanted = NumPlanted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGraveManager.InteractiveGraveManager_C.SetGravesPostExplosion
// (BlueprintCallable, BlueprintEvent)

void AInteractiveGraveManager_C::SetGravesPostExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGraveManager.InteractiveGraveManager_C.SetGravesPostExplosion");

	AInteractiveGraveManager_C_SetGravesPostExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGraveManager.InteractiveGraveManager_C.ForceDetonateGraves
// (BlueprintCallable, BlueprintEvent)

void AInteractiveGraveManager_C::ForceDetonateGraves()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGraveManager.InteractiveGraveManager_C.ForceDetonateGraves");

	AInteractiveGraveManager_C_ForceDetonateGraves_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGraveManager.InteractiveGraveManager_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URamaSaveComponent*      RamaSaveComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 LevelPackageName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AInteractiveGraveManager_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGraveManager.InteractiveGraveManager_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature");

	AInteractiveGraveManager_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature_Params params;
	params.RamaSaveComponent = RamaSaveComponent;
	params.LevelPackageName = LevelPackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGraveManager.InteractiveGraveManager_C.SetGravesPreExplosion
// (BlueprintCallable, BlueprintEvent)

void AInteractiveGraveManager_C::SetGravesPreExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGraveManager.InteractiveGraveManager_C.SetGravesPreExplosion");

	AInteractiveGraveManager_C_SetGravesPreExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGraveManager.InteractiveGraveManager_C.ExecuteUbergraph_InteractiveGraveManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInteractiveGraveManager_C::ExecuteUbergraph_InteractiveGraveManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGraveManager.InteractiveGraveManager_C.ExecuteUbergraph_InteractiveGraveManager");

	AInteractiveGraveManager_C_ExecuteUbergraph_InteractiveGraveManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractiveGraveManager.InteractiveGraveManager_C.AllBombsPlanted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AInteractiveGraveManager_C::AllBombsPlanted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveGraveManager.InteractiveGraveManager_C.AllBombsPlanted__DelegateSignature");

	AInteractiveGraveManager_C_AllBombsPlanted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
