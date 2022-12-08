
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

// Function policePatrolPoint.policePatrolPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApolicePatrolPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolPoint.policePatrolPoint_C.UserConstructionScript");

	ApolicePatrolPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePatrolPoint.policePatrolPoint_C.ShortRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRadius                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApolicePatrolPoint_C::ShortRadiusChanged(bool InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolPoint.policePatrolPoint_C.ShortRadiusChanged");

	ApolicePatrolPoint_C_ShortRadiusChanged_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePatrolPoint.policePatrolPoint_C.LongRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRadius                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApolicePatrolPoint_C::LongRadiusChanged(bool InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolPoint.policePatrolPoint_C.LongRadiusChanged");

	ApolicePatrolPoint_C_LongRadiusChanged_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policePatrolPoint.policePatrolPoint_C.ExecuteUbergraph_policePatrolPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApolicePatrolPoint_C::ExecuteUbergraph_policePatrolPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function policePatrolPoint.policePatrolPoint_C.ExecuteUbergraph_policePatrolPoint");

	ApolicePatrolPoint_C_ExecuteUbergraph_policePatrolPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
