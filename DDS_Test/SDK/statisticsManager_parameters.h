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

// Function statisticsManager.statisticsManager_C.ExpandRama
struct AstatisticsManager_C_ExpandRama_Params
{
};

// Function statisticsManager.statisticsManager_C.GetTimecode
struct AstatisticsManager_C_GetTimecode_Params
{
	int                                                OutTimecode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function statisticsManager.statisticsManager_C.UpdateExpositionLevel
struct AstatisticsManager_C_UpdateExpositionLevel_Params
{
};

// Function statisticsManager.statisticsManager_C.NewExpoSale
struct AstatisticsManager_C_NewExpoSale_Params
{
	int                                                AmountGrams;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function statisticsManager.statisticsManager_C.NewExpoEvent
struct AstatisticsManager_C_NewExpoEvent_Params
{
	struct FName                                       EventID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function statisticsManager.statisticsManager_C.adaptDifficulty
struct AstatisticsManager_C_adaptDifficulty_Params
{
};

// Function statisticsManager.statisticsManager_C.tryDisplayExpPopup
struct AstatisticsManager_C_tryDisplayExpPopup_Params
{
};

// Function statisticsManager.statisticsManager_C.upgradeSkill
struct AstatisticsManager_C_upgradeSkill_Params
{
	int                                                SkillID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UpgradeAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function statisticsManager.statisticsManager_C.subtractSkillPoints
struct AstatisticsManager_C_subtractSkillPoints_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function statisticsManager.statisticsManager_C.levelUpFunctions
struct AstatisticsManager_C_levelUpFunctions_Params
{
};

// Function statisticsManager.statisticsManager_C.canAddInfoWidget
struct AstatisticsManager_C_canAddInfoWidget_Params
{
	bool                                               CanAddWidget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function statisticsManager.statisticsManager_C.startDeaObservation
struct AstatisticsManager_C_startDeaObservation_Params
{
};

// Function statisticsManager.statisticsManager_C.modifyReputation
struct AstatisticsManager_C_modifyReputation_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function statisticsManager.statisticsManager_C.factorTimeDrop
struct AstatisticsManager_C_factorTimeDrop_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function statisticsManager.statisticsManager_C.addExpoEvent
struct AstatisticsManager_C_addExpoEvent_Params
{
	float                                              ExpoValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function statisticsManager.statisticsManager_C.addRiskEvent
struct AstatisticsManager_C_addRiskEvent_Params
{
	float                                              RiskValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function statisticsManager.statisticsManager_C.addExp
struct AstatisticsManager_C_addExp_Params
{
	float                                              expAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function statisticsManager.statisticsManager_C.calcExpForLevelUp
struct AstatisticsManager_C_calcExpForLevelUp_Params
{
	float                                              ExpLacking;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ExpNeededTotal;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NextLevelProgress;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function statisticsManager.statisticsManager_C.UserConstructionScript
struct AstatisticsManager_C_UserConstructionScript_Params
{
};

// Function statisticsManager.statisticsManager_C.ReceiveBeginPlay
struct AstatisticsManager_C_ReceiveBeginPlay_Params
{
};

// Function statisticsManager.statisticsManager_C.ReceiveTick
struct AstatisticsManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function statisticsManager.statisticsManager_C.levelUpWidget
struct AstatisticsManager_C_levelUpWidget_Params
{
};

// Function statisticsManager.statisticsManager_C.checkStatuses
struct AstatisticsManager_C_checkStatuses_Params
{
};

// Function statisticsManager.statisticsManager_C.tryShowLevel
struct AstatisticsManager_C_tryShowLevel_Params
{
};

// Function statisticsManager.statisticsManager_C.reInitiate
struct AstatisticsManager_C_reInitiate_Params
{
};

// Function statisticsManager.statisticsManager_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
struct AstatisticsManager_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
{
	class URamaSaveComponent*                          RamaSaveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LevelPackageName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function statisticsManager.statisticsManager_C.SetAllSales
struct AstatisticsManager_C_SetAllSales_Params
{
	float                                              SalesAmount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function statisticsManager.statisticsManager_C.ExecuteUbergraph_statisticsManager
struct AstatisticsManager_C_ExecuteUbergraph_statisticsManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
