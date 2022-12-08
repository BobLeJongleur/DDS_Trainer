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

// Function SampleClientSpawner.SampleClientSpawner_C.TrySpawnAreaClient
struct ASampleClientSpawner_C_TrySpawnAreaClient_Params
{
	class AsprayAreaGizmo_C*                           AreaGizmo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AreaString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SampleClientSpawner.SampleClientSpawner_C.HasAreaClient
struct ASampleClientSpawner_C_HasAreaClient_Params
{
	struct FString                                     Area;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               HasClient;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SampleClientSpawner.SampleClientSpawner_C.UnregisterClient
struct ASampleClientSpawner_C_UnregisterClient_Params
{
	struct FString                                     Area;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               DirectClear;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SampleClientSpawner.SampleClientSpawner_C.RegisterClient
struct ASampleClientSpawner_C_RegisterClient_Params
{
	struct FString                                     OnArea;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function SampleClientSpawner.SampleClientSpawner_C.UserConstructionScript
struct ASampleClientSpawner_C_UserConstructionScript_Params
{
};

// Function SampleClientSpawner.SampleClientSpawner_C.ReceiveBeginPlay
struct ASampleClientSpawner_C_ReceiveBeginPlay_Params
{
};

// Function SampleClientSpawner.SampleClientSpawner_C.CheckSampleClients
struct ASampleClientSpawner_C_CheckSampleClients_Params
{
};

// Function SampleClientSpawner.SampleClientSpawner_C.BreakAreaLoop
struct ASampleClientSpawner_C_BreakAreaLoop_Params
{
};

// Function SampleClientSpawner.SampleClientSpawner_C.CleanAreas
struct ASampleClientSpawner_C_CleanAreas_Params
{
};

// Function SampleClientSpawner.SampleClientSpawner_C.ExecuteUbergraph_SampleClientSpawner
struct ASampleClientSpawner_C_ExecuteUbergraph_SampleClientSpawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
