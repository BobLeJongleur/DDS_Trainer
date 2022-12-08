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

// Function labWeedPlant.labWeedPlant_C.AdaptModel
struct AlabWeedPlant_C_AdaptModel_Params
{
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function labWeedPlant.labWeedPlant_C.UserConstructionScript
struct AlabWeedPlant_C_UserConstructionScript_Params
{
};

// Function labWeedPlant.labWeedPlant_C.SetGrowingActive
struct AlabWeedPlant_C_SetGrowingActive_Params
{
	class AlabPrefabMaster_C*                          Prefab;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Activity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function labWeedPlant.labWeedPlant_C.ProgressChange
struct AlabWeedPlant_C_ProgressChange_Params
{
	float                                              ProgressPercent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function labWeedPlant.labWeedPlant_C.ExecuteUbergraph_labWeedPlant
struct AlabWeedPlant_C_ExecuteUbergraph_labWeedPlant_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
