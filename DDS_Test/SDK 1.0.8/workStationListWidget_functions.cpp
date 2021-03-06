
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

// Function workStationListWidget.workStationListWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FinventoryItemStruct    InventoryData                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FappartmentEquipment    eqData                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworkStationListWidget_C::Setup(const struct FinventoryItemStruct& InventoryData, int Quantity, bool equipment, const struct FappartmentEquipment& eqData, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationListWidget.workStationListWidget_C.Setup");

	UworkStationListWidget_C_Setup_Params params;
	params.InventoryData = InventoryData;
	params.Quantity = Quantity;
	params.equipment = equipment;
	params.eqData = eqData;
	params.selected = selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationListWidget.workStationListWidget_C.ExecuteUbergraph_workStationListWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworkStationListWidget_C::ExecuteUbergraph_workStationListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationListWidget.workStationListWidget_C.ExecuteUbergraph_workStationListWidget");

	UworkStationListWidget_C_ExecuteUbergraph_workStationListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
