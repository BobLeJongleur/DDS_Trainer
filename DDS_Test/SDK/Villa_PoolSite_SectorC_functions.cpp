
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

// Function Villa_PoolSite_SectorC.Villa_PoolSite_SectorC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVilla_PoolSite_SectorC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Villa_PoolSite_SectorC.Villa_PoolSite_SectorC_C.UserConstructionScript");

	AVilla_PoolSite_SectorC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Villa_PoolSite_SectorC.Villa_PoolSite_SectorC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVilla_PoolSite_SectorC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Villa_PoolSite_SectorC.Villa_PoolSite_SectorC_C.ReceiveBeginPlay");

	AVilla_PoolSite_SectorC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Villa_PoolSite_SectorC.Villa_PoolSite_SectorC_C.ExecuteUbergraph_Villa_PoolSite_SectorC
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVilla_PoolSite_SectorC_C::ExecuteUbergraph_Villa_PoolSite_SectorC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Villa_PoolSite_SectorC.Villa_PoolSite_SectorC_C.ExecuteUbergraph_Villa_PoolSite_SectorC");

	AVilla_PoolSite_SectorC_C_ExecuteUbergraph_Villa_PoolSite_SectorC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
