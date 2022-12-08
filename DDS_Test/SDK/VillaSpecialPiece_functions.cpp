
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

// Function VillaSpecialPiece.VillaSpecialPiece_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVillaSpecialPiece_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaSpecialPiece.VillaSpecialPiece_C.UserConstructionScript");

	AVillaSpecialPiece_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaSpecialPiece.VillaSpecialPiece_C.SetActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaSpecialPiece_C::SetActivity(bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaSpecialPiece.VillaSpecialPiece_C.SetActivity");

	AVillaSpecialPiece_C_SetActivity_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VillaSpecialPiece.VillaSpecialPiece_C.ExecuteUbergraph_VillaSpecialPiece
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVillaSpecialPiece_C::ExecuteUbergraph_VillaSpecialPiece(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VillaSpecialPiece.VillaSpecialPiece_C.ExecuteUbergraph_VillaSpecialPiece");

	AVillaSpecialPiece_C_ExecuteUbergraph_VillaSpecialPiece_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
