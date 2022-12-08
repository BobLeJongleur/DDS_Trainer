
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

// Function VillaCeilingPiece.VillaCeilingPiece_C.CheckCanApplySurface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewSurface                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           CanApply                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 FailReason                     (Parm, OutParm, ZeroConstructor)

void AVillaCeilingPiece_C::CheckCanApplySurface(const struct FName& NewSurface, class UPrimitiveComponent* Comp, bool* CanApply, struct FString* FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaCeilingPiece.VillaCeilingPiece_C.CheckCanApplySurface");

	AVillaCeilingPiece_C_CheckCanApplySurface_Params params;
	params.NewSurface = NewSurface;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanApply != nullptr)
		*CanApply = params.CanApply;
	if (FailReason != nullptr)
		*FailReason = params.FailReason;
}


// Function VillaCeilingPiece.VillaCeilingPiece_C.UpdateSurfaces
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVillaCeilingPiece_C::UpdateSurfaces()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaCeilingPiece.VillaCeilingPiece_C.UpdateSurfaces");

	AVillaCeilingPiece_C_UpdateSurfaces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaCeilingPiece.VillaCeilingPiece_C.GetSurfaceConfig
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ConfigString                   (Parm, OutParm, ZeroConstructor)
// struct FGuid                   PieceGuid                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVillaCeilingPiece_C::GetSurfaceConfig(struct FString* ConfigString, struct FGuid* PieceGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaCeilingPiece.VillaCeilingPiece_C.GetSurfaceConfig");

	AVillaCeilingPiece_C_GetSurfaceConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConfigString != nullptr)
		*ConfigString = params.ConfigString;
	if (PieceGuid != nullptr)
		*PieceGuid = params.PieceGuid;
}


// Function VillaCeilingPiece.VillaCeilingPiece_C.ChangeSurface
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AVillaCeilingPiece_C::ChangeSurface(const struct FName& RowName, class UPrimitiveComponent* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaCeilingPiece.VillaCeilingPiece_C.ChangeSurface");

	AVillaCeilingPiece_C_ChangeSurface_Params params;
	params.RowName = RowName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaCeilingPiece.VillaCeilingPiece_C.TraceHit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   CurHighlightedMaterial         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 HitElementID                   (Parm, OutParm, ZeroConstructor)
// struct FName                   HitElementCurSurface           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVillaSurfaceFinish     SurfaceData                    (Parm, OutParm)
// class UDataTable*              SurfaceDataTable               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVillaCeilingPiece_C::TraceHit(class UPrimitiveComponent* HitComponent, const struct FName& CurHighlightedMaterial, struct FString* HitElementID, struct FName* HitElementCurSurface, struct FVillaSurfaceFinish* SurfaceData, class UDataTable** SurfaceDataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaCeilingPiece.VillaCeilingPiece_C.TraceHit");

	AVillaCeilingPiece_C_TraceHit_Params params;
	params.HitComponent = HitComponent;
	params.CurHighlightedMaterial = CurHighlightedMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitElementID != nullptr)
		*HitElementID = params.HitElementID;
	if (HitElementCurSurface != nullptr)
		*HitElementCurSurface = params.HitElementCurSurface;
	if (SurfaceData != nullptr)
		*SurfaceData = params.SurfaceData;
	if (SurfaceDataTable != nullptr)
		*SurfaceDataTable = params.SurfaceDataTable;
}


// Function VillaCeilingPiece.VillaCeilingPiece_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVillaCeilingPiece_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaCeilingPiece.VillaCeilingPiece_C.UserConstructionScript");

	AVillaCeilingPiece_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaCeilingPiece.VillaCeilingPiece_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVillaCeilingPiece_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaCeilingPiece.VillaCeilingPiece_C.ReceiveBeginPlay");

	AVillaCeilingPiece_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaCeilingPiece.VillaCeilingPiece_C.SetActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FoundationOnly                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaCeilingPiece_C::SetActivity(bool Visibility, bool FoundationOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaCeilingPiece.VillaCeilingPiece_C.SetActivity");

	AVillaCeilingPiece_C_SetActivity_Params params;
	params.Visibility = Visibility;
	params.FoundationOnly = FoundationOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaCeilingPiece.VillaCeilingPiece_C.ApplySurface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HitElementID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FName                   NewSurface                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AVillaCeilingPiece_C::ApplySurface(const struct FString& HitElementID, const struct FName& NewSurface, class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaCeilingPiece.VillaCeilingPiece_C.ApplySurface");

	AVillaCeilingPiece_C_ApplySurface_Params params;
	params.HitElementID = HitElementID;
	params.NewSurface = NewSurface;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaCeilingPiece.VillaCeilingPiece_C.UpdateSavedSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVillaPropertyInstance_C* PropertyInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaCeilingPiece_C::UpdateSavedSetting(class AVillaPropertyInstance_C* PropertyInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaCeilingPiece.VillaCeilingPiece_C.UpdateSavedSetting");

	AVillaCeilingPiece_C_UpdateSavedSetting_Params params;
	params.PropertyInstance = PropertyInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaCeilingPiece.VillaCeilingPiece_C.SubclassSetActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaCeilingPiece_C::SubclassSetActivity(bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaCeilingPiece.VillaCeilingPiece_C.SubclassSetActivity");

	AVillaCeilingPiece_C_SubclassSetActivity_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaCeilingPiece.VillaCeilingPiece_C.ExecuteUbergraph_VillaCeilingPiece
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaCeilingPiece_C::ExecuteUbergraph_VillaCeilingPiece(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaCeilingPiece.VillaCeilingPiece_C.ExecuteUbergraph_VillaCeilingPiece");

	AVillaCeilingPiece_C_ExecuteUbergraph_VillaCeilingPiece_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
