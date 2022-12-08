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

// Function labPrefabMaster.labPrefabMaster_C.SetMeshesOverlap
struct AlabPrefabMaster_C_SetMeshesOverlap_Params
{
};

// Function labPrefabMaster.labPrefabMaster_C.SendCrewHoldWarning
struct AlabPrefabMaster_C_SendCrewHoldWarning_Params
{
	int                                                CashLacking;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DrugID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function labPrefabMaster.labPrefabMaster_C.UpdateCrewModifier
struct AlabPrefabMaster_C_UpdateCrewModifier_Params
{
};

// Function labPrefabMaster.labPrefabMaster_C.PurgeLab
struct AlabPrefabMaster_C_PurgeLab_Params
{
	bool                                               Raided;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function labPrefabMaster.labPrefabMaster_C.TryInitiateProduction
struct AlabPrefabMaster_C_TryInitiateProduction_Params
{
	bool                                               SendMessage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function labPrefabMaster.labPrefabMaster_C.OutputPackage
struct AlabPrefabMaster_C_OutputPackage_Params
{
};

// Function labPrefabMaster.labPrefabMaster_C.CountdownProduction
struct AlabPrefabMaster_C_CountdownProduction_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function labPrefabMaster.labPrefabMaster_C.SetPrefabActive
struct AlabPrefabMaster_C_SetPrefabActive_Params
{
	bool                                               active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ArrestCrew;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function labPrefabMaster.labPrefabMaster_C.UserConstructionScript
struct AlabPrefabMaster_C_UserConstructionScript_Params
{
};

// Function labPrefabMaster.labPrefabMaster_C.ReceiveBeginPlay
struct AlabPrefabMaster_C_ReceiveBeginPlay_Params
{
};

// Function labPrefabMaster.labPrefabMaster_C.ReceiveTick
struct AlabPrefabMaster_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function labPrefabMaster.labPrefabMaster_C.CheckRestartProduction
struct AlabPrefabMaster_C_CheckRestartProduction_Params
{
};

// Function labPrefabMaster.labPrefabMaster_C.ExecuteUbergraph_labPrefabMaster
struct AlabPrefabMaster_C_ExecuteUbergraph_labPrefabMaster_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function labPrefabMaster.labPrefabMaster_C.ProductionProgress__DelegateSignature
struct AlabPrefabMaster_C_ProductionProgress__DelegateSignature_Params
{
	float                                              ProgressPercent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
