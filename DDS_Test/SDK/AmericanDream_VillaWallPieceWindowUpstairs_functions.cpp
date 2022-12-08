
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

// Function AmericanDream_VillaWallPieceWindowUpstairs.AmericanDream_VillaWallPieceWindowUpstairs_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAmericanDream_VillaWallPieceWindowUpstairs_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmericanDream_VillaWallPieceWindowUpstairs.AmericanDream_VillaWallPieceWindowUpstairs_C.UserConstructionScript");

	AAmericanDream_VillaWallPieceWindowUpstairs_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmericanDream_VillaWallPieceWindowUpstairs.AmericanDream_VillaWallPieceWindowUpstairs_C.SubclassSetActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAmericanDream_VillaWallPieceWindowUpstairs_C::SubclassSetActivity(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmericanDream_VillaWallPieceWindowUpstairs.AmericanDream_VillaWallPieceWindowUpstairs_C.SubclassSetActivity");

	AAmericanDream_VillaWallPieceWindowUpstairs_C_SubclassSetActivity_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmericanDream_VillaWallPieceWindowUpstairs.AmericanDream_VillaWallPieceWindowUpstairs_C.ExecuteUbergraph_AmericanDream_VillaWallPieceWindowUpstairs
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAmericanDream_VillaWallPieceWindowUpstairs_C::ExecuteUbergraph_AmericanDream_VillaWallPieceWindowUpstairs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmericanDream_VillaWallPieceWindowUpstairs.AmericanDream_VillaWallPieceWindowUpstairs_C.ExecuteUbergraph_AmericanDream_VillaWallPieceWindowUpstairs");

	AAmericanDream_VillaWallPieceWindowUpstairs_C_ExecuteUbergraph_AmericanDream_VillaWallPieceWindowUpstairs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
