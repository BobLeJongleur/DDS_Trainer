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

// Function PoliceBlockadeManager.PoliceBlockadeManager_C.GetBlockadeLifetime
struct APoliceBlockadeManager_C_GetBlockadeLifetime_Params
{
	float                                              LifeTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PoliceBlockadeManager.PoliceBlockadeManager_C.GetSpawnChance
struct APoliceBlockadeManager_C_GetSpawnChance_Params
{
	float                                              SpawnChance;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PoliceBlockadeManager.PoliceBlockadeManager_C.chooseSpawnPoint
struct APoliceBlockadeManager_C_chooseSpawnPoint_Params
{
	class APoliceBlockadeArea_C*                       OutArea;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PoliceBlockadeManager.PoliceBlockadeManager_C.RegisterPlayer
struct APoliceBlockadeManager_C_RegisterPlayer_Params
{
	class APoliceBlockadeArea_C*                       Area;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PoliceBlockadeManager.PoliceBlockadeManager_C.UserConstructionScript
struct APoliceBlockadeManager_C_UserConstructionScript_Params
{
};

// Function PoliceBlockadeManager.PoliceBlockadeManager_C.ReceiveBeginPlay
struct APoliceBlockadeManager_C_ReceiveBeginPlay_Params
{
};

// Function PoliceBlockadeManager.PoliceBlockadeManager_C.ReceiveTick
struct APoliceBlockadeManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PoliceBlockadeManager.PoliceBlockadeManager_C.ForceSpawnBlockade
struct APoliceBlockadeManager_C_ForceSpawnBlockade_Params
{
};

// Function PoliceBlockadeManager.PoliceBlockadeManager_C.CheckRefs
struct APoliceBlockadeManager_C_CheckRefs_Params
{
};

// Function PoliceBlockadeManager.PoliceBlockadeManager_C.ExecuteUbergraph_PoliceBlockadeManager
struct APoliceBlockadeManager_C_ExecuteUbergraph_PoliceBlockadeManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
