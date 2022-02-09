
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

// Function equipmentListWidget.equipmentListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UequipmentListWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentListWidget.equipmentListWidget_C.Construct");

	UequipmentListWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function equipmentListWidget.equipmentListWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FappartmentEquipment    eqData                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UequipmentListWidget_C::Setup(const struct FappartmentEquipment& eqData, int Quantity, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentListWidget.equipmentListWidget_C.Setup");

	UequipmentListWidget_C_Setup_Params params;
	params.eqData = eqData;
	params.Quantity = Quantity;
	params.selected = selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function equipmentListWidget.equipmentListWidget_C.ExecuteUbergraph_equipmentListWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UequipmentListWidget_C::ExecuteUbergraph_equipmentListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentListWidget.equipmentListWidget_C.ExecuteUbergraph_equipmentListWidget");

	UequipmentListWidget_C_ExecuteUbergraph_equipmentListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
