
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

// Function VillaWallPieceDoor.VillaWallPieceDoor_C.CheckCanApplySurface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewSurface                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           CanApply                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 FailReason                     (Parm, OutParm, ZeroConstructor)

void AVillaWallPieceDoor_C::CheckCanApplySurface(const struct FName& NewSurface, class UPrimitiveComponent* Comp, bool* CanApply, struct FString* FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPieceDoor.VillaWallPieceDoor_C.CheckCanApplySurface");

	AVillaWallPieceDoor_C_CheckCanApplySurface_Params params;
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


// Function VillaWallPieceDoor.VillaWallPieceDoor_C.UpdateDoorMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DoorMatID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaWallPieceDoor_C::UpdateDoorMaterial(const struct FName& DoorMatID)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPieceDoor.VillaWallPieceDoor_C.UpdateDoorMaterial");

	AVillaWallPieceDoor_C_UpdateDoorMaterial_Params params;
	params.DoorMatID = DoorMatID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPieceDoor.VillaWallPieceDoor_C.CanPaintComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           CanPaint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 FailReason                     (Parm, OutParm, ZeroConstructor)

void AVillaWallPieceDoor_C::CanPaintComponent(class UPrimitiveComponent* Component, bool* CanPaint, struct FString* FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPieceDoor.VillaWallPieceDoor_C.CanPaintComponent");

	AVillaWallPieceDoor_C_CanPaintComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPaint != nullptr)
		*CanPaint = params.CanPaint;
	if (FailReason != nullptr)
		*FailReason = params.FailReason;
}


// Function VillaWallPieceDoor.VillaWallPieceDoor_C.GetSurfaceConfig
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ConfigString                   (Parm, OutParm, ZeroConstructor)
// struct FGuid                   PieceGuid                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVillaWallPieceDoor_C::GetSurfaceConfig(struct FString* ConfigString, struct FGuid* PieceGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPieceDoor.VillaWallPieceDoor_C.GetSurfaceConfig");

	AVillaWallPieceDoor_C_GetSurfaceConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConfigString != nullptr)
		*ConfigString = params.ConfigString;
	if (PieceGuid != nullptr)
		*PieceGuid = params.PieceGuid;
}


// Function VillaWallPieceDoor.VillaWallPieceDoor_C.TraceHit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   CurHighlightedMaterial         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 HitElementID                   (Parm, OutParm, ZeroConstructor)
// struct FName                   HitElementCurSurface           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVillaSurfaceFinish     SurfaceData                    (Parm, OutParm)
// class UDataTable*              SurfaceDataTable               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVillaWallPieceDoor_C::TraceHit(class UPrimitiveComponent* HitComponent, const struct FName& CurHighlightedMaterial, struct FString* HitElementID, struct FName* HitElementCurSurface, struct FVillaSurfaceFinish* SurfaceData, class UDataTable** SurfaceDataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPieceDoor.VillaWallPieceDoor_C.TraceHit");

	AVillaWallPieceDoor_C_TraceHit_Params params;
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


// Function VillaWallPieceDoor.VillaWallPieceDoor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVillaWallPieceDoor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPieceDoor.VillaWallPieceDoor_C.UserConstructionScript");

	AVillaWallPieceDoor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPieceDoor.VillaWallPieceDoor_C.UpdateSavedSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVillaPropertyInstance_C* PropertyInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaWallPieceDoor_C::UpdateSavedSetting(class AVillaPropertyInstance_C* PropertyInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPieceDoor.VillaWallPieceDoor_C.UpdateSavedSetting");

	AVillaWallPieceDoor_C_UpdateSavedSetting_Params params;
	params.PropertyInstance = PropertyInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPieceDoor.VillaWallPieceDoor_C.SubclassSetActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaWallPieceDoor_C::SubclassSetActivity(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPieceDoor.VillaWallPieceDoor_C.SubclassSetActivity");

	AVillaWallPieceDoor_C_SubclassSetActivity_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPieceDoor.VillaWallPieceDoor_C.LostFocus
// (Public, BlueprintCallable, BlueprintEvent)

void AVillaWallPieceDoor_C::LostFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPieceDoor.VillaWallPieceDoor_C.LostFocus");

	AVillaWallPieceDoor_C_LostFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPieceDoor.VillaWallPieceDoor_C.ApplySurface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HitElementID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FName                   NewSurface                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AVillaWallPieceDoor_C::ApplySurface(const struct FString& HitElementID, const struct FName& NewSurface, class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPieceDoor.VillaWallPieceDoor_C.ApplySurface");

	AVillaWallPieceDoor_C_ApplySurface_Params params;
	params.HitElementID = HitElementID;
	params.NewSurface = NewSurface;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPieceDoor.VillaWallPieceDoor_C.ExecuteUbergraph_VillaWallPieceDoor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaWallPieceDoor_C::ExecuteUbergraph_VillaWallPieceDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPieceDoor.VillaWallPieceDoor_C.ExecuteUbergraph_VillaWallPieceDoor");

	AVillaWallPieceDoor_C_ExecuteUbergraph_VillaWallPieceDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
