
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

// Function interactiveBaseObject.interactiveBaseObject_C.GetTargetRot
// (Public, BlueprintCallable, BlueprintEvent)

void AinteractiveBaseObject_C::GetTargetRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.GetTargetRot");

	AinteractiveBaseObject_C_GetTargetRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.GetTargetLoc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InLoc                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Grid                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InRot                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLoc                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutRot                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AinteractiveBaseObject_C::GetTargetLoc(const struct FVector& InLoc, bool Grid, float InRot, struct FVector* OutLoc, float* OutRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.GetTargetLoc");

	AinteractiveBaseObject_C_GetTargetLoc_Params params;
	params.InLoc = InLoc;
	params.Grid = Grid;
	params.InRot = InRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoc != nullptr)
		*OutLoc = params.OutLoc;
	if (OutRot != nullptr)
		*OutRot = params.OutRot;
}


// Function interactiveBaseObject.interactiveBaseObject_C.VerifyBaseSizing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OK                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AinteractiveBaseObject_C::VerifyBaseSizing(bool* OK)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.VerifyBaseSizing");

	AinteractiveBaseObject_C_VerifyBaseSizing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OK != nullptr)
		*OK = params.OK;
}


// Function interactiveBaseObject.interactiveBaseObject_C.GetEquipmentMeta
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FappartmentEquipment    EquipmentMeta                  (Parm, OutParm)

void AinteractiveBaseObject_C::GetEquipmentMeta(bool* Success, struct FappartmentEquipment* EquipmentMeta)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.GetEquipmentMeta");

	AinteractiveBaseObject_C_GetEquipmentMeta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (EquipmentMeta != nullptr)
		*EquipmentMeta = params.EquipmentMeta;
}


// Function interactiveBaseObject.interactiveBaseObject_C.GetItemMeta
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FNewItemStructure       ItemMeta                       (Parm, OutParm)

void AinteractiveBaseObject_C::GetItemMeta(bool* Success, struct FNewItemStructure* ItemMeta)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.GetItemMeta");

	AinteractiveBaseObject_C_GetItemMeta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ItemMeta != nullptr)
		*ItemMeta = params.ItemMeta;
}


// Function interactiveBaseObject.interactiveBaseObject_C.CheckForInnerClasses
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            innerIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DeepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Match                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AinteractiveBaseObject_C::CheckForInnerClasses(int innerIndex, int DeepIndex, bool* Match)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.CheckForInnerClasses");

	AinteractiveBaseObject_C_CheckForInnerClasses_Params params;
	params.innerIndex = innerIndex;
	params.DeepIndex = DeepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Match != nullptr)
		*Match = params.Match;
}


// Function interactiveBaseObject.interactiveBaseObject_C.reconstructEquipmentData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AinteractiveBaseObject_C::reconstructEquipmentData()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.reconstructEquipmentData");

	AinteractiveBaseObject_C_reconstructEquipmentData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.removeFromWorkStation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AinteractiveBaseObject_C::removeFromWorkStation()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.removeFromWorkStation");

	AinteractiveBaseObject_C_removeFromWorkStation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.objectCanStoreApartment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanStore                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Reason                         (Parm, OutParm)

void AinteractiveBaseObject_C::objectCanStoreApartment(bool* CanStore, struct FText* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.objectCanStoreApartment");

	AinteractiveBaseObject_C_objectCanStoreApartment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanStore != nullptr)
		*CanStore = params.CanStore;
	if (Reason != nullptr)
		*Reason = params.Reason;
}


// Function interactiveBaseObject.interactiveBaseObject_C.verifyCorrectNaming
// (Public, BlueprintCallable, BlueprintEvent)

void AinteractiveBaseObject_C::verifyCorrectNaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.verifyCorrectNaming");

	AinteractiveBaseObject_C_verifyCorrectNaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.GetActionNames
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   OverrideKey                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   keyOverride                    (Parm, OutParm)
// struct FText                   Object_Name                    (Parm, OutParm)
// struct FText                   Action_Name                    (Parm, OutParm)

void AinteractiveBaseObject_C::GetActionNames(const struct FText& OverrideKey, struct FText* keyOverride, struct FText* Object_Name, struct FText* Action_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.GetActionNames");

	AinteractiveBaseObject_C_GetActionNames_Params params;
	params.OverrideKey = OverrideKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (keyOverride != nullptr)
		*keyOverride = params.keyOverride;
	if (Object_Name != nullptr)
		*Object_Name = params.Object_Name;
	if (Action_Name != nullptr)
		*Action_Name = params.Action_Name;
}


// Function interactiveBaseObject.interactiveBaseObject_C.beenActivated
// (Public, BlueprintCallable, BlueprintEvent)

void AinteractiveBaseObject_C::beenActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.beenActivated");

	AinteractiveBaseObject_C_beenActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AinteractiveBaseObject_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.UserConstructionScript");

	AinteractiveBaseObject_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AinteractiveBaseObject_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.ReceiveBeginPlay");

	AinteractiveBaseObject_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AinteractiveBaseObject_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.ReceiveTick");

	AinteractiveBaseObject_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.adaptPlaceMaterial
// (BlueprintCallable, BlueprintEvent)

void AinteractiveBaseObject_C::adaptPlaceMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.adaptPlaceMaterial");

	AinteractiveBaseObject_C_adaptPlaceMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.SetAsGizmo
// (BlueprintCallable, BlueprintEvent)

void AinteractiveBaseObject_C::SetAsGizmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.SetAsGizmo");

	AinteractiveBaseObject_C_SetAsGizmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interactiveBaseObject.interactiveBaseObject_C.ExecuteUbergraph_interactiveBaseObject
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AinteractiveBaseObject_C::ExecuteUbergraph_interactiveBaseObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactiveBaseObject.interactiveBaseObject_C.ExecuteUbergraph_interactiveBaseObject");

	AinteractiveBaseObject_C_ExecuteUbergraph_interactiveBaseObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
