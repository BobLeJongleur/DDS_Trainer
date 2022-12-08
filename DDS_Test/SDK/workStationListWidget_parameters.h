#pragma once

#include "pch.h"

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function workStationListWidget.workStationListWidget_C.setup
struct UworkStationListWidget_C_setup_Params
{
	struct FinventoryItemStruct                        InventoryData;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       EqID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DrugID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       InventoryGuid;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FappartmentEquipment                        eqData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMixProportionsStruct                       MixProportions;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function workStationListWidget.workStationListWidget_C.ExecuteUbergraph_workStationListWidget
struct UworkStationListWidget_C_ExecuteUbergraph_workStationListWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
