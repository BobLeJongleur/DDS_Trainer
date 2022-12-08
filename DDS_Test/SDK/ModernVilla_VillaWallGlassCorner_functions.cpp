
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

// Function ModernVilla_VillaWallGlassCorner.ModernVilla_VillaWallGlassCorner_C.CanPaintComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           CanPaint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 FailReason                     (Parm, OutParm, ZeroConstructor)

void AModernVilla_VillaWallGlassCorner_C::CanPaintComponent(class UPrimitiveComponent* Component, bool* CanPaint, struct FString* FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVilla_VillaWallGlassCorner.ModernVilla_VillaWallGlassCorner_C.CanPaintComponent");

	AModernVilla_VillaWallGlassCorner_C_CanPaintComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPaint != nullptr)
		*CanPaint = params.CanPaint;
	if (FailReason != nullptr)
		*FailReason = params.FailReason;
}


// Function ModernVilla_VillaWallGlassCorner.ModernVilla_VillaWallGlassCorner_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AModernVilla_VillaWallGlassCorner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVilla_VillaWallGlassCorner.ModernVilla_VillaWallGlassCorner_C.UserConstructionScript");

	AModernVilla_VillaWallGlassCorner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernVilla_VillaWallGlassCorner.ModernVilla_VillaWallGlassCorner_C.SubclassSetActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AModernVilla_VillaWallGlassCorner_C::SubclassSetActivity(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVilla_VillaWallGlassCorner.ModernVilla_VillaWallGlassCorner_C.SubclassSetActivity");

	AModernVilla_VillaWallGlassCorner_C_SubclassSetActivity_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernVilla_VillaWallGlassCorner.ModernVilla_VillaWallGlassCorner_C.ToggleWindowMeshes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AModernVilla_VillaWallGlassCorner_C::ToggleWindowMeshes(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVilla_VillaWallGlassCorner.ModernVilla_VillaWallGlassCorner_C.ToggleWindowMeshes");

	AModernVilla_VillaWallGlassCorner_C_ToggleWindowMeshes_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernVilla_VillaWallGlassCorner.ModernVilla_VillaWallGlassCorner_C.ExecuteUbergraph_ModernVilla_VillaWallGlassCorner
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AModernVilla_VillaWallGlassCorner_C::ExecuteUbergraph_ModernVilla_VillaWallGlassCorner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVilla_VillaWallGlassCorner.ModernVilla_VillaWallGlassCorner_C.ExecuteUbergraph_ModernVilla_VillaWallGlassCorner");

	AModernVilla_VillaWallGlassCorner_C_ExecuteUbergraph_ModernVilla_VillaWallGlassCorner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
