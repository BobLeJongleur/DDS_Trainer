
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

// Function AppartmentCatFilter.AppartmentCatFilter_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EequipmentCategory> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Cur                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           All                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAppartmentCatFilter_C::setup(TEnumAsByte<EequipmentCategory> Category, bool Cur, bool All)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppartmentCatFilter.AppartmentCatFilter_C.setup");

	UAppartmentCatFilter_C_setup_Params params;
	params.Category = Category;
	params.Cur = Cur;
	params.All = All;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppartmentCatFilter.AppartmentCatFilter_C.ExecuteUbergraph_AppartmentCatFilter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAppartmentCatFilter_C::ExecuteUbergraph_AppartmentCatFilter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppartmentCatFilter.AppartmentCatFilter_C.ExecuteUbergraph_AppartmentCatFilter");

	UAppartmentCatFilter_C_ExecuteUbergraph_AppartmentCatFilter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
