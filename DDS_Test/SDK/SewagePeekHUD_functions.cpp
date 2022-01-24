
#include "pch.h"

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function SewagePeekHUD.SewagePeekHUD_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility USewagePeekHUD_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SewagePeekHUD.SewagePeekHUD_C.GetVisibility_1");

	USewagePeekHUD_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SewagePeekHUD.SewagePeekHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USewagePeekHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SewagePeekHUD.SewagePeekHUD_C.Construct");

	USewagePeekHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SewagePeekHUD.SewagePeekHUD_C.ExecuteUbergraph_SewagePeekHUD
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USewagePeekHUD_C::ExecuteUbergraph_SewagePeekHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SewagePeekHUD.SewagePeekHUD_C.ExecuteUbergraph_SewagePeekHUD");

	USewagePeekHUD_C_ExecuteUbergraph_SewagePeekHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
