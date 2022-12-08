
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

// Function WeedDenierArea.WeedDenierArea_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeedDenierArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeedDenierArea.WeedDenierArea_C.UserConstructionScript");

	AWeedDenierArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeedDenierArea.WeedDenierArea_C.ShowWeedDeniers
// (BlueprintCallable, BlueprintEvent)

void AWeedDenierArea_C::ShowWeedDeniers()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeedDenierArea.WeedDenierArea_C.ShowWeedDeniers");

	AWeedDenierArea_C_ShowWeedDeniers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeedDenierArea.WeedDenierArea_C.ExecuteUbergraph_WeedDenierArea
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeedDenierArea_C::ExecuteUbergraph_WeedDenierArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeedDenierArea.WeedDenierArea_C.ExecuteUbergraph_WeedDenierArea");

	AWeedDenierArea_C_ExecuteUbergraph_WeedDenierArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
