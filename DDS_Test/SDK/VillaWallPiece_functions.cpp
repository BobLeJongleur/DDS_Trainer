
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

// Function VillaWallPiece.VillaWallPiece_C.CanPaintComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           CanPaint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 FailReason                     (Parm, OutParm, ZeroConstructor)

void AVillaWallPiece_C::CanPaintComponent(class UPrimitiveComponent* Component, bool* CanPaint, struct FString* FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPiece.VillaWallPiece_C.CanPaintComponent");

	AVillaWallPiece_C_CanPaintComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPaint != nullptr)
		*CanPaint = params.CanPaint;
	if (FailReason != nullptr)
		*FailReason = params.FailReason;
}


// Function VillaWallPiece.VillaWallPiece_C.CheckCanApplySurface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewSurface                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           CanApply                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 FailReason                     (Parm, OutParm, ZeroConstructor)

void AVillaWallPiece_C::CheckCanApplySurface(const struct FName& NewSurface, class UPrimitiveComponent* Comp, bool* CanApply, struct FString* FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPiece.VillaWallPiece_C.CheckCanApplySurface");

	AVillaWallPiece_C_CheckCanApplySurface_Params params;
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


// Function VillaWallPiece.VillaWallPiece_C.ComponentPainted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Painted                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVillaWallPiece_C::ComponentPainted(class UPrimitiveComponent* Comp, bool* Painted)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPiece.VillaWallPiece_C.ComponentPainted");

	AVillaWallPiece_C_ComponentPainted_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Painted != nullptr)
		*Painted = params.Painted;
}


// Function VillaWallPiece.VillaWallPiece_C.UpdateSurfaces
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVillaWallPiece_C::UpdateSurfaces()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPiece.VillaWallPiece_C.UpdateSurfaces");

	AVillaWallPiece_C_UpdateSurfaces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPiece.VillaWallPiece_C.GetSurfaceConfig
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ConfigString                   (Parm, OutParm, ZeroConstructor)
// struct FGuid                   PieceGuid                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVillaWallPiece_C::GetSurfaceConfig(struct FString* ConfigString, struct FGuid* PieceGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPiece.VillaWallPiece_C.GetSurfaceConfig");

	AVillaWallPiece_C_GetSurfaceConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConfigString != nullptr)
		*ConfigString = params.ConfigString;
	if (PieceGuid != nullptr)
		*PieceGuid = params.PieceGuid;
}


// Function VillaWallPiece.VillaWallPiece_C.ChangeSurfaceMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   NewMaterial                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaWallPiece_C::ChangeSurfaceMaterial(class UPrimitiveComponent* Component, const struct FName& NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPiece.VillaWallPiece_C.ChangeSurfaceMaterial");

	AVillaWallPiece_C_ChangeSurfaceMaterial_Params params;
	params.Component = Component;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPiece.VillaWallPiece_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVillaWallPiece_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPiece.VillaWallPiece_C.UserConstructionScript");

	AVillaWallPiece_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPiece.VillaWallPiece_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVillaWallPiece_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPiece.VillaWallPiece_C.ReceiveBeginPlay");

	AVillaWallPiece_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPiece.VillaWallPiece_C.SetActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaWallPiece_C::SetActivity(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPiece.VillaWallPiece_C.SetActivity");

	AVillaWallPiece_C_SetActivity_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPiece.VillaWallPiece_C.ApplySurface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HitElementID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FName                   NewSurface                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AVillaWallPiece_C::ApplySurface(const struct FString& HitElementID, const struct FName& NewSurface, class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPiece.VillaWallPiece_C.ApplySurface");

	AVillaWallPiece_C_ApplySurface_Params params;
	params.HitElementID = HitElementID;
	params.NewSurface = NewSurface;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPiece.VillaWallPiece_C.UpdateSavedSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVillaPropertyInstance_C* PropertyInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaWallPiece_C::UpdateSavedSetting(class AVillaPropertyInstance_C* PropertyInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPiece.VillaWallPiece_C.UpdateSavedSetting");

	AVillaWallPiece_C_UpdateSavedSetting_Params params;
	params.PropertyInstance = PropertyInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPiece.VillaWallPiece_C.ParentApplySurface
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewSurface                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AVillaWallPiece_C::ParentApplySurface(const struct FName& NewSurface, class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPiece.VillaWallPiece_C.ParentApplySurface");

	AVillaWallPiece_C_ParentApplySurface_Params params;
	params.NewSurface = NewSurface;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPiece.VillaWallPiece_C.SubclassSetActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaWallPiece_C::SubclassSetActivity(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPiece.VillaWallPiece_C.SubclassSetActivity");

	AVillaWallPiece_C_SubclassSetActivity_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPiece.VillaWallPiece_C.ToggleWindowMeshes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaWallPiece_C::ToggleWindowMeshes(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPiece.VillaWallPiece_C.ToggleWindowMeshes");

	AVillaWallPiece_C_ToggleWindowMeshes_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPiece.VillaWallPiece_C.ExecuteUbergraph_VillaWallPiece
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaWallPiece_C::ExecuteUbergraph_VillaWallPiece(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPiece.VillaWallPiece_C.ExecuteUbergraph_VillaWallPiece");

	AVillaWallPiece_C_ExecuteUbergraph_VillaWallPiece_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
