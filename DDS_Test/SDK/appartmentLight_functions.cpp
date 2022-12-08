
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

// Function appartmentLight.appartmentLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AappartmentLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentLight.appartmentLight_C.UserConstructionScript");

	AappartmentLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentLight.appartmentLight_C.lightFlicker__FinishedFunc
// (BlueprintEvent)

void AappartmentLight_C::lightFlicker__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentLight.appartmentLight_C.lightFlicker__FinishedFunc");

	AappartmentLight_C_lightFlicker__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentLight.appartmentLight_C.lightFlicker__UpdateFunc
// (BlueprintEvent)

void AappartmentLight_C::lightFlicker__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentLight.appartmentLight_C.lightFlicker__UpdateFunc");

	AappartmentLight_C_lightFlicker__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentLight.appartmentLight_C.LongRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRadius                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AappartmentLight_C::LongRadiusChanged(bool InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentLight.appartmentLight_C.LongRadiusChanged");

	AappartmentLight_C_LongRadiusChanged_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentLight.appartmentLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AappartmentLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentLight.appartmentLight_C.ReceiveBeginPlay");

	AappartmentLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentLight.appartmentLight_C.toggleLight
// (BlueprintCallable, BlueprintEvent)

void AappartmentLight_C::toggleLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentLight.appartmentLight_C.toggleLight");

	AappartmentLight_C_toggleLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentLight.appartmentLight_C.enableShadows
// (BlueprintCallable, BlueprintEvent)

void AappartmentLight_C::enableShadows()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentLight.appartmentLight_C.enableShadows");

	AappartmentLight_C_enableShadows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentLight.appartmentLight_C.ShortRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRadius                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AappartmentLight_C::ShortRadiusChanged(bool InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentLight.appartmentLight_C.ShortRadiusChanged");

	AappartmentLight_C_ShortRadiusChanged_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentLight.appartmentLight_C.ExecuteUbergraph_appartmentLight
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AappartmentLight_C::ExecuteUbergraph_appartmentLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentLight.appartmentLight_C.ExecuteUbergraph_appartmentLight");

	AappartmentLight_C_ExecuteUbergraph_appartmentLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
