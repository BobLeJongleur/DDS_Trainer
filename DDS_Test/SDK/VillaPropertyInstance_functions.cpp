
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

// Function VillaPropertyInstance.VillaPropertyInstance_C.CheckVillaAchievements
// (Public, BlueprintCallable, BlueprintEvent)

void AVillaPropertyInstance_C::CheckVillaAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.CheckVillaAchievements");

	AVillaPropertyInstance_C_CheckVillaAchievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.TryInstallModule
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   ModuleGuid                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Installed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVillaPropertyInstance_C::TryInstallModule(const struct FGuid& ModuleGuid, bool* Installed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.TryInstallModule");

	AVillaPropertyInstance_C_TryInstallModule_Params params;
	params.ModuleGuid = ModuleGuid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Installed != nullptr)
		*Installed = params.Installed;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.IsStageReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ready                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVillaPropertyInstance_C::IsStageReady(bool* Ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.IsStageReady");

	AVillaPropertyInstance_C_IsStageReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ready != nullptr)
		*Ready = params.Ready;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.InstallCurrentStage
// (Public, BlueprintCallable, BlueprintEvent)

void AVillaPropertyInstance_C::InstallCurrentStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.InstallCurrentStage");

	AVillaPropertyInstance_C_InstallCurrentStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.StartCurrentStage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVillaPropertyInstance_C::StartCurrentStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.StartCurrentStage");

	AVillaPropertyInstance_C_StartCurrentStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.SaveConfigs
// (Public, BlueprintCallable, BlueprintEvent)

void AVillaPropertyInstance_C::SaveConfigs()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.SaveConfigs");

	AVillaPropertyInstance_C_SaveConfigs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.ExpandRama
// (Public, BlueprintCallable, BlueprintEvent)

void AVillaPropertyInstance_C::ExpandRama()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.ExpandRama");

	AVillaPropertyInstance_C_ExpandRama_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.CheckGuids
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVillaPropertyInstance_C::CheckGuids()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.CheckGuids");

	AVillaPropertyInstance_C_CheckGuids_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.OpenConfig
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           KeyFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 KeyValue                       (Parm, OutParm, ZeroConstructor)

void AVillaPropertyInstance_C::OpenConfig(const struct FGuid& Key, bool* KeyFound, struct FString* KeyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.OpenConfig");

	AVillaPropertyInstance_C_OpenConfig_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeyFound != nullptr)
		*KeyFound = params.KeyFound;
	if (KeyValue != nullptr)
		*KeyValue = params.KeyValue;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.SaveConfig
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Value                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AVillaPropertyInstance_C::SaveConfig(const struct FGuid& Guid, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.SaveConfig");

	AVillaPropertyInstance_C_SaveConfig_Params params;
	params.Guid = Guid;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.BuyVilla
// (Public, BlueprintCallable, BlueprintEvent)

void AVillaPropertyInstance_C::BuyVilla()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.BuyVilla");

	AVillaPropertyInstance_C_BuyVilla_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.RemoveInventoryObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EquipmentID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaPropertyInstance_C::RemoveInventoryObject(const struct FName& EquipmentID, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.RemoveInventoryObject");

	AVillaPropertyInstance_C_RemoveInventoryObject_Params params;
	params.EquipmentID = EquipmentID;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.AddInventoryObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EquipmentID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaPropertyInstance_C::AddInventoryObject(const struct FName& EquipmentID, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.AddInventoryObject");

	AVillaPropertyInstance_C_AddInventoryObject_Params params;
	params.EquipmentID = EquipmentID;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.UpdateBuildStage
// (Public, BlueprintCallable, BlueprintEvent)

void AVillaPropertyInstance_C::UpdateBuildStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.UpdateBuildStage");

	AVillaPropertyInstance_C_UpdateBuildStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.GetUpgradeDetails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Nam                            (Parm, OutParm)

void AVillaPropertyInstance_C::GetUpgradeDetails(int* Price, struct FText* Nam)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.GetUpgradeDetails");

	AVillaPropertyInstance_C_GetUpgradeDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;
	if (Nam != nullptr)
		*Nam = params.Nam;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVillaPropertyInstance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.UserConstructionScript");

	AVillaPropertyInstance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVillaPropertyInstance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.ReceiveBeginPlay");

	AVillaPropertyInstance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaPropertyInstance_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.ReceiveTick");

	AVillaPropertyInstance_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.UpgradeVilla
// (BlueprintCallable, BlueprintEvent)

void AVillaPropertyInstance_C::UpgradeVilla()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.UpgradeVilla");

	AVillaPropertyInstance_C_UpgradeVilla_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.PlayerEnteredPremise
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PawnRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaPropertyInstance_C::PlayerEnteredPremise(class APawn* PawnRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.PlayerEnteredPremise");

	AVillaPropertyInstance_C_PlayerEnteredPremise_Params params;
	params.PawnRef = PawnRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.PlayerLeftPremise
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaPropertyInstance_C::PlayerLeftPremise(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.PlayerLeftPremise");

	AVillaPropertyInstance_C_PlayerLeftPremise_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URamaSaveComponent*      RamaSaveComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 LevelPackageName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AVillaPropertyInstance_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature");

	AVillaPropertyInstance_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params params;
	params.RamaSaveComponent = RamaSaveComponent;
	params.LevelPackageName = LevelPackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSavePreSaveSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URamaSaveComponent*      RamaSaveComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AVillaPropertyInstance_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSavePreSaveSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSavePreSaveSignature__DelegateSignature");

	AVillaPropertyInstance_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSavePreSaveSignature__DelegateSignature_Params params;
	params.RamaSaveComponent = RamaSaveComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.BuiltFirstVilla
// (BlueprintCallable, BlueprintEvent)

void AVillaPropertyInstance_C::BuiltFirstVilla()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.BuiltFirstVilla");

	AVillaPropertyInstance_C_BuiltFirstVilla_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.BndEvt__PropertyArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AVillaPropertyInstance_C::BndEvt__PropertyArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.BndEvt__PropertyArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	AVillaPropertyInstance_C_BndEvt__PropertyArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function VillaPropertyInstance.VillaPropertyInstance_C.NotifyConstructionStage
// (BlueprintCallable, BlueprintEvent)

void AVillaPropertyInstance_C::NotifyConstructionStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.NotifyConstructionStage");

	AVillaPropertyInstance_C_NotifyConstructionStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.ForceSetPremise
// (BlueprintCallable, BlueprintEvent)

void AVillaPropertyInstance_C::ForceSetPremise()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.ForceSetPremise");

	AVillaPropertyInstance_C_ForceSetPremise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.ExecuteUbergraph_VillaPropertyInstance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaPropertyInstance_C::ExecuteUbergraph_VillaPropertyInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.ExecuteUbergraph_VillaPropertyInstance");

	AVillaPropertyInstance_C_ExecuteUbergraph_VillaPropertyInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPropertyInstance.VillaPropertyInstance_C.BuildStageUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AVillaPropertyInstance_C::BuildStageUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPropertyInstance.VillaPropertyInstance_C.BuildStageUpdated__DelegateSignature");

	AVillaPropertyInstance_C_BuildStageUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
