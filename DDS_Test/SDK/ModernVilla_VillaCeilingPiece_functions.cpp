
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

// Function ModernVilla_VillaCeilingPiece.ModernVilla_VillaCeilingPiece_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AModernVilla_VillaCeilingPiece_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVilla_VillaCeilingPiece.ModernVilla_VillaCeilingPiece_C.UserConstructionScript");

	AModernVilla_VillaCeilingPiece_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernVilla_VillaCeilingPiece.ModernVilla_VillaCeilingPiece_C.SubclassSetActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AModernVilla_VillaCeilingPiece_C::SubclassSetActivity(bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVilla_VillaCeilingPiece.ModernVilla_VillaCeilingPiece_C.SubclassSetActivity");

	AModernVilla_VillaCeilingPiece_C_SubclassSetActivity_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernVilla_VillaCeilingPiece.ModernVilla_VillaCeilingPiece_C.ExecuteUbergraph_ModernVilla_VillaCeilingPiece
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AModernVilla_VillaCeilingPiece_C::ExecuteUbergraph_ModernVilla_VillaCeilingPiece(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernVilla_VillaCeilingPiece.ModernVilla_VillaCeilingPiece_C.ExecuteUbergraph_ModernVilla_VillaCeilingPiece");

	AModernVilla_VillaCeilingPiece_C_ExecuteUbergraph_ModernVilla_VillaCeilingPiece_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
