
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

// Function VillaWallPieceWindow.VillaWallPieceWindow_C.CanPaintComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           CanPaint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 FailReason                     (Parm, OutParm, ZeroConstructor)

void AVillaWallPieceWindow_C::CanPaintComponent(class UPrimitiveComponent* Component, bool* CanPaint, struct FString* FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPieceWindow.VillaWallPieceWindow_C.CanPaintComponent");

	AVillaWallPieceWindow_C_CanPaintComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPaint != nullptr)
		*CanPaint = params.CanPaint;
	if (FailReason != nullptr)
		*FailReason = params.FailReason;
}


// Function VillaWallPieceWindow.VillaWallPieceWindow_C.ShowWindows
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaWallPieceWindow_C::ShowWindows(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPieceWindow.VillaWallPieceWindow_C.ShowWindows");

	AVillaWallPieceWindow_C_ShowWindows_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPieceWindow.VillaWallPieceWindow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVillaWallPieceWindow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPieceWindow.VillaWallPieceWindow_C.UserConstructionScript");

	AVillaWallPieceWindow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPieceWindow.VillaWallPieceWindow_C.SubclassSetActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaWallPieceWindow_C::SubclassSetActivity(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPieceWindow.VillaWallPieceWindow_C.SubclassSetActivity");

	AVillaWallPieceWindow_C_SubclassSetActivity_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaWallPieceWindow.VillaWallPieceWindow_C.ExecuteUbergraph_VillaWallPieceWindow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaWallPieceWindow_C::ExecuteUbergraph_VillaWallPieceWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaWallPieceWindow.VillaWallPieceWindow_C.ExecuteUbergraph_VillaWallPieceWindow");

	AVillaWallPieceWindow_C_ExecuteUbergraph_VillaWallPieceWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
