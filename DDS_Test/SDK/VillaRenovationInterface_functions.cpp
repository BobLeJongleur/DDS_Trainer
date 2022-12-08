
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

// Function VillaRenovationInterface.VillaRenovationInterface_C.CheckCanApplySurface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewSurface                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           CanApply                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 FailReason                     (Parm, OutParm, ZeroConstructor)

void UVillaRenovationInterface_C::CheckCanApplySurface(const struct FName& NewSurface, class UPrimitiveComponent* Comp, bool* CanApply, struct FString* FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRenovationInterface.VillaRenovationInterface_C.CheckCanApplySurface");

	UVillaRenovationInterface_C_CheckCanApplySurface_Params params;
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


// Function VillaRenovationInterface.VillaRenovationInterface_C.CurFocusComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstance*       PreviewMat                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVillaRenovationInterface_C::CurFocusComponent(class UPrimitiveComponent* Comp, class UMaterialInstance* PreviewMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRenovationInterface.VillaRenovationInterface_C.CurFocusComponent");

	UVillaRenovationInterface_C_CurFocusComponent_Params params;
	params.Comp = Comp;
	params.PreviewMat = PreviewMat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaRenovationInterface.VillaRenovationInterface_C.UpdateSavedSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVillaPropertyInstance_C* PropertyInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVillaRenovationInterface_C::UpdateSavedSetting(class AVillaPropertyInstance_C* PropertyInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRenovationInterface.VillaRenovationInterface_C.UpdateSavedSetting");

	UVillaRenovationInterface_C_UpdateSavedSetting_Params params;
	params.PropertyInstance = PropertyInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaRenovationInterface.VillaRenovationInterface_C.LostFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UVillaRenovationInterface_C::LostFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRenovationInterface.VillaRenovationInterface_C.LostFocus");

	UVillaRenovationInterface_C_LostFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaRenovationInterface.VillaRenovationInterface_C.ApplySurface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HitElementID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FName                   NewSurface                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UVillaRenovationInterface_C::ApplySurface(const struct FString& HitElementID, const struct FName& NewSurface, class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRenovationInterface.VillaRenovationInterface_C.ApplySurface");

	UVillaRenovationInterface_C_ApplySurface_Params params;
	params.HitElementID = HitElementID;
	params.NewSurface = NewSurface;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaRenovationInterface.VillaRenovationInterface_C.TraceHit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   CurHighlightedMaterial         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 HitElementID                   (Parm, OutParm, ZeroConstructor)
// struct FName                   HitElementCurSurface           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVillaSurfaceFinish     SurfaceData                    (Parm, OutParm)
// class UDataTable*              SurfaceDataTable               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVillaRenovationInterface_C::TraceHit(class UPrimitiveComponent* HitComponent, const struct FName& CurHighlightedMaterial, struct FString* HitElementID, struct FName* HitElementCurSurface, struct FVillaSurfaceFinish* SurfaceData, class UDataTable** SurfaceDataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaRenovationInterface.VillaRenovationInterface_C.TraceHit");

	UVillaRenovationInterface_C_TraceHit_Params params;
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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
