
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

// Function VillaPieceMaster.VillaPieceMaster_C.CheckCanApplySurface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewSurface                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           CanApply                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 FailReason                     (Parm, OutParm, ZeroConstructor)

void AVillaPieceMaster_C::CheckCanApplySurface(const struct FName& NewSurface, class UPrimitiveComponent* Comp, bool* CanApply, struct FString* FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPieceMaster.VillaPieceMaster_C.CheckCanApplySurface");

	AVillaPieceMaster_C_CheckCanApplySurface_Params params;
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


// Function VillaPieceMaster.VillaPieceMaster_C.TraceHit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   CurHighlightedMaterial         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 HitElementID                   (Parm, OutParm, ZeroConstructor)
// struct FName                   HitElementCurSurface           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVillaSurfaceFinish     SurfaceData                    (Parm, OutParm)
// class UDataTable*              SurfaceDataTable               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVillaPieceMaster_C::TraceHit(class UPrimitiveComponent* HitComponent, const struct FName& CurHighlightedMaterial, struct FString* HitElementID, struct FName* HitElementCurSurface, struct FVillaSurfaceFinish* SurfaceData, class UDataTable** SurfaceDataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPieceMaster.VillaPieceMaster_C.TraceHit");

	AVillaPieceMaster_C_TraceHit_Params params;
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


// Function VillaPieceMaster.VillaPieceMaster_C.ComponentPainted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Painted                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVillaPieceMaster_C::ComponentPainted(class UPrimitiveComponent* Comp, bool* Painted)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPieceMaster.VillaPieceMaster_C.ComponentPainted");

	AVillaPieceMaster_C_ComponentPainted_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Painted != nullptr)
		*Painted = params.Painted;
}


// Function VillaPieceMaster.VillaPieceMaster_C.GetSurfaceConfig
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ConfigString                   (Parm, OutParm, ZeroConstructor)
// struct FGuid                   PieceGuid                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVillaPieceMaster_C::GetSurfaceConfig(struct FString* ConfigString, struct FGuid* PieceGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPieceMaster.VillaPieceMaster_C.GetSurfaceConfig");

	AVillaPieceMaster_C_GetSurfaceConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConfigString != nullptr)
		*ConfigString = params.ConfigString;
	if (PieceGuid != nullptr)
		*PieceGuid = params.PieceGuid;
}


// Function VillaPieceMaster.VillaPieceMaster_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVillaPieceMaster_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPieceMaster.VillaPieceMaster_C.UserConstructionScript");

	AVillaPieceMaster_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPieceMaster.VillaPieceMaster_C.LostFocus
// (Public, BlueprintCallable, BlueprintEvent)

void AVillaPieceMaster_C::LostFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPieceMaster.VillaPieceMaster_C.LostFocus");

	AVillaPieceMaster_C_LostFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPieceMaster.VillaPieceMaster_C.CurFocusComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstance*       PreviewMat                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaPieceMaster_C::CurFocusComponent(class UPrimitiveComponent* Comp, class UMaterialInstance* PreviewMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPieceMaster.VillaPieceMaster_C.CurFocusComponent");

	AVillaPieceMaster_C_CurFocusComponent_Params params;
	params.Comp = Comp;
	params.PreviewMat = PreviewMat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPieceMaster.VillaPieceMaster_C.UpdateSavedSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVillaPropertyInstance_C* PropertyInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaPieceMaster_C::UpdateSavedSetting(class AVillaPropertyInstance_C* PropertyInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPieceMaster.VillaPieceMaster_C.UpdateSavedSetting");

	AVillaPieceMaster_C_UpdateSavedSetting_Params params;
	params.PropertyInstance = PropertyInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPieceMaster.VillaPieceMaster_C.ApplySurface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HitElementID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FName                   NewSurface                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AVillaPieceMaster_C::ApplySurface(const struct FString& HitElementID, const struct FName& NewSurface, class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPieceMaster.VillaPieceMaster_C.ApplySurface");

	AVillaPieceMaster_C_ApplySurface_Params params;
	params.HitElementID = HitElementID;
	params.NewSurface = NewSurface;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaPieceMaster.VillaPieceMaster_C.ExecuteUbergraph_VillaPieceMaster
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaPieceMaster_C::ExecuteUbergraph_VillaPieceMaster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaPieceMaster.VillaPieceMaster_C.ExecuteUbergraph_VillaPieceMaster");

	AVillaPieceMaster_C_ExecuteUbergraph_VillaPieceMaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
