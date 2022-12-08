
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

// Function FuneralHomeVisitCardWidget.FuneralHomeVisitCardWidget_C.killWidget
// (BlueprintCallable, BlueprintEvent)

void UFuneralHomeVisitCardWidget_C::killWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FuneralHomeVisitCardWidget.FuneralHomeVisitCardWidget_C.killWidget");

	UFuneralHomeVisitCardWidget_C_killWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FuneralHomeVisitCardWidget.FuneralHomeVisitCardWidget_C.ExecuteUbergraph_FuneralHomeVisitCardWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFuneralHomeVisitCardWidget_C::ExecuteUbergraph_FuneralHomeVisitCardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FuneralHomeVisitCardWidget.FuneralHomeVisitCardWidget_C.ExecuteUbergraph_FuneralHomeVisitCardWidget");

	UFuneralHomeVisitCardWidget_C_ExecuteUbergraph_FuneralHomeVisitCardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
