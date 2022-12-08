#pragma once

#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function DrugDealerSimulator.AbsorbedSubstance.MergeTakenEffects
struct UAbsorbedSubstance_MergeTakenEffects_Params
{
	class UAbsorbedSubstance*                          otherObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              curConcentration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              substanceTolerance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.MergeSpiritImpact
struct UAbsorbedSubstance_MergeSpiritImpact_Params
{
	class UEB_Spirit*                                  Source;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              takeFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.MergePhysicalImpact
struct UAbsorbedSubstance_MergePhysicalImpact_Params
{
	class UEB_Physical*                                Source;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              takeFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.MergePerceptionImpact
struct UAbsorbedSubstance_MergePerceptionImpact_Params
{
	class UEB_Perception*                              Source;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              takeFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.MergeHealthImpact
struct UAbsorbedSubstance_MergeHealthImpact_Params
{
	class UEB_BodyHealth*                              Source;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              takeFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.MergeBrainFuncsImpact
struct UAbsorbedSubstance_MergeBrainFuncsImpact_Params
{
	class UEB_BrainFunctions*                          Source;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              takeFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.InitFactorHandler
struct UAbsorbedSubstance_InitFactorHandler_Params
{
};

// Function DrugDealerSimulator.AbsorbedSubstance.GetQualityFactor
struct UAbsorbedSubstance_GetQualityFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.GetPurityFactor
struct UAbsorbedSubstance_GetPurityFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.GetFirstPowerMomentTime
struct UAbsorbedSubstance_GetFirstPowerMomentTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.GetExcretedAmount
struct UAbsorbedSubstance_GetExcretedAmount_Params
{
	float                                              checkDayTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.GetDecompositedAmunt
struct UAbsorbedSubstance_GetDecompositedAmunt_Params
{
	float                                              checkDayTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.GetCurrentConcentration
struct UAbsorbedSubstance_GetCurrentConcentration_Params
{
	float                                              checkDayTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.GetAbsorbedAmunt
struct UAbsorbedSubstance_GetAbsorbedAmunt_Params
{
	float                                              checkDayTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.DeepCopySpirit
struct UAbsorbedSubstance_DeepCopySpirit_Params
{
	class UEB_Spirit*                                  Source;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyPhysical
struct UAbsorbedSubstance_DeepCopyPhysical_Params
{
	class UEB_Physical*                                Source;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyPerception
struct UAbsorbedSubstance_DeepCopyPerception_Params
{
	class UEB_Perception*                              Source;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyHealth
struct UAbsorbedSubstance_DeepCopyHealth_Params
{
	class UEB_BodyHealth*                              Source;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyBrainFuncs
struct UAbsorbedSubstance_DeepCopyBrainFuncs_Params
{
	class UEB_BrainFunctions*                          Source;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyBaseF
struct UAbsorbedSubstance_DeepCopyBaseF_Params
{
	class UEB_BaseFactors*                             Source;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstance.CalcInjection
struct UAbsorbedSubstance_CalcInjection_Params
{
	class AHumanoidActor*                              injectedObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              checkDayTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.SubstanceHaveExcreted
struct UAbsorbedSubstanceComp_SubstanceHaveExcreted_Params
{
	float                                              checkDayTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.StoreSelfData
struct UAbsorbedSubstanceComp_StoreSelfData_Params
{
	TArray<float>                                      targetArray;                                              // (Parm, OutParm, ZeroConstructor)
	int                                                baseOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.RestoreFromData
struct UAbsorbedSubstanceComp_RestoreFromData_Params
{
	TArray<float>                                      sourceArray;                                              // (ConstParm, Parm, ZeroConstructor)
	int                                                baseOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeTakenEffects
struct UAbsorbedSubstanceComp_MergeTakenEffects_Params
{
	class UAbsorbedSubstanceComp*                      otherObject;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASubstancesAndEffects*                       handler;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              curConcentration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              substanceTolerance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeSpiritImpact
struct UAbsorbedSubstanceComp_MergeSpiritImpact_Params
{
	class UEB_Spirit*                                  Source;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASubstancesAndEffects*                       handler;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              takeFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.MergePhysicalImpact
struct UAbsorbedSubstanceComp_MergePhysicalImpact_Params
{
	class UEB_Physical*                                Source;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASubstancesAndEffects*                       handler;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              takeFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.MergePerceptionImpact
struct UAbsorbedSubstanceComp_MergePerceptionImpact_Params
{
	class UEB_Perception*                              Source;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASubstancesAndEffects*                       handler;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              takeFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeHealthImpact
struct UAbsorbedSubstanceComp_MergeHealthImpact_Params
{
	class UEB_BodyHealth*                              Source;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASubstancesAndEffects*                       handler;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              takeFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeBrainFuncsImpact
struct UAbsorbedSubstanceComp_MergeBrainFuncsImpact_Params
{
	class UEB_BrainFunctions*                          Source;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASubstancesAndEffects*                       handler;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              takeFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.InitFactorHandler
struct UAbsorbedSubstanceComp_InitFactorHandler_Params
{
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.GetQualityFactor
struct UAbsorbedSubstanceComp_GetQualityFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.GetPurityFactor
struct UAbsorbedSubstanceComp_GetPurityFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.GetFirstPowerMomentTime
struct UAbsorbedSubstanceComp_GetFirstPowerMomentTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.GetExcretedAmount
struct UAbsorbedSubstanceComp_GetExcretedAmount_Params
{
	float                                              checkDayTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.GetDecompositedAmount
struct UAbsorbedSubstanceComp_GetDecompositedAmount_Params
{
	float                                              checkDayTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.GetCurrentConcentration
struct UAbsorbedSubstanceComp_GetCurrentConcentration_Params
{
	float                                              checkDayTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.GetAbsorbedAmunt
struct UAbsorbedSubstanceComp_GetAbsorbedAmunt_Params
{
	float                                              checkDayTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopySpirit
struct UAbsorbedSubstanceComp_DeepCopySpirit_Params
{
	class UEB_Spirit*                                  Source;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyPhysical
struct UAbsorbedSubstanceComp_DeepCopyPhysical_Params
{
	class UEB_Physical*                                Source;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyPerception
struct UAbsorbedSubstanceComp_DeepCopyPerception_Params
{
	class UEB_Perception*                              Source;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyHealth
struct UAbsorbedSubstanceComp_DeepCopyHealth_Params
{
	class UEB_BodyHealth*                              Source;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyBrainFuncs
struct UAbsorbedSubstanceComp_DeepCopyBrainFuncs_Params
{
	class UEB_BrainFunctions*                          Source;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyBaseF
struct UAbsorbedSubstanceComp_DeepCopyBaseF_Params
{
	class UEB_BaseFactors*                             Source;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DrugDealerSimulator.AbsorbedSubstanceComp.CalcInjection
struct UAbsorbedSubstanceComp_CalcInjection_Params
{
	class AHumanoidActor*                              injectedObject;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              checkDayTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.ActiveSubstance.GetQualityFactorIn
struct AActiveSubstance_GetQualityFactorIn_Params
{
	float                                              inputQuality;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ActiveSubstance.GetQualityFactor
struct AActiveSubstance_GetQualityFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ActiveSubstance.GetPurityFactorIn
struct AActiveSubstance_GetPurityFactorIn_Params
{
	float                                              inputPurity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ActiveSubstance.GetPurityFactor
struct AActiveSubstance_GetPurityFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AddictionComp.StoreSaveData
struct UAddictionComp_StoreSaveData_Params
{
	TArray<float>                                      targetArray;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function DrugDealerSimulator.AddictionComp.ResetData
struct UAddictionComp_ResetData_Params
{
};

// Function DrugDealerSimulator.AddictionComp.LoadSaveData
struct UAddictionComp_LoadSaveData_Params
{
	TArray<float>                                      sourceArray;                                              // (ConstParm, Parm, ZeroConstructor)
};

// Function DrugDealerSimulator.AddictionComp.GetDataLevel
struct UAddictionComp_GetDataLevel_Params
{
	int                                                substanceIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              checkTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AddictionComp.AddData
struct UAddictionComp_AddData_Params
{
	int                                                newSubstanceIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              takeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              calcPower;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              recoveryTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              recoveryOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.AstralProfile.powerOnSurface
struct AAstralProfile_powerOnSurface_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AstralProfile.heatPower
struct AAstralProfile_heatPower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.BU_ManagerActor.UserSawUpgrades
struct ABU_ManagerActor_UserSawUpgrades_Params
{
};

// Function DrugDealerSimulator.BU_ManagerActor.UpgradeBought
struct ABU_ManagerActor_UpgradeBought_Params
{
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UpgradeLineName;                                          // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.BU_ManagerActor.RefreshBuildingObjects
struct ABU_ManagerActor_RefreshBuildingObjects_Params
{
};

// Function DrugDealerSimulator.BU_ManagerActor.PrepareDataForUse
struct ABU_ManagerActor_PrepareDataForUse_Params
{
};

// Function DrugDealerSimulator.BU_ManagerActor.LogUnseenDetails
struct ABU_ManagerActor_LogUnseenDetails_Params
{
	struct FBU_UnseenDetailsSets                       LogUnseenDetails;                                         // (Parm, OutParm)
};

// Function DrugDealerSimulator.BU_ManagerActor.LogUnseenData
struct ABU_ManagerActor_LogUnseenData_Params
{
	struct FBU_UnseenUL                                LogUnseenUL;                                              // (ConstParm, Parm)
};

// Function DrugDealerSimulator.BU_ManagerActor.LogMeOut
struct ABU_ManagerActor_LogMeOut_Params
{
};

// Function DrugDealerSimulator.BU_ManagerActor.GetUnseenData
struct ABU_ManagerActor_GetUnseenData_Params
{
	TArray<struct FBU_UnseenUL>                        OutUnseenData;                                            // (Parm, OutParm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.BU_ManagerActor.GetMainLineUpgradeLevel
struct ABU_ManagerActor_GetMainLineUpgradeLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.BU_ManagerActor.GetAllUpgradeLines
struct ABU_ManagerActor_GetAllUpgradeLines_Params
{
	TArray<class ABU_UpgradeLineActor*>                OutReferenceList;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function DrugDealerSimulator.BU_UpgradeDetails.GetMaxUpgradeLevel
struct ABU_UpgradeDetails_GetMaxUpgradeLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.BU_UpgradeLineActor.UpgradeToLevel
struct ABU_UpgradeLineActor_UpgradeToLevel_Params
{
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.BU_UpgradeLineActor.RefreshDetailsAfterLoad
struct ABU_UpgradeLineActor_RefreshDetailsAfterLoad_Params
{
};

// Function DrugDealerSimulator.BU_UpgradeLineActor.RefreshDetails
struct ABU_UpgradeLineActor_RefreshDetails_Params
{
};

// Function DrugDealerSimulator.BU_UpgradeLineActor.ProcessForLevel
struct ABU_UpgradeLineActor_ProcessForLevel_Params
{
	int                                                procLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.BU_UpgradeLineActor.NextUpgradePrice
struct ABU_UpgradeLineActor_NextUpgradePrice_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.BU_UpgradeLineActor.NextUpgradeLevel
struct ABU_UpgradeLineActor_NextUpgradeLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.BU_UpgradeLineActor.IsAvailableForUpgrade
struct ABU_UpgradeLineActor_IsAvailableForUpgrade_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.BU_UpgradeLineActor.IsAvailable
struct ABU_UpgradeLineActor_IsAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.BU_UpgradeLineActor.HasAllUpgrades
struct ABU_UpgradeLineActor_HasAllUpgrades_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.BU_UpgradeLineActor.GetUpgradeCost
struct ABU_UpgradeLineActor_GetUpgradeCost_Params
{
	int                                                procLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.BU_UpgradeLineActor.GetMaxUpgradeLevel
struct ABU_UpgradeLineActor_GetMaxUpgradeLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.BU_UpgradeLineActor.GetLevelPrice
struct ABU_UpgradeLineActor_GetLevelPrice_Params
{
	int                                                procLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.BU_UpgradeLineActor.AdaptMaxLevel
struct ABU_UpgradeLineActor_AdaptMaxLevel_Params
{
};

// Function DrugDealerSimulator.CepSaveTester.noticeAction
struct ACepSaveTester_noticeAction_Params
{
};

// Function DrugDealerSimulator.CepSaveTester.getCount
struct ACepSaveTester_getCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.CepWeatherComponent.YearPassed
struct UCepWeatherComponent_YearPassed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.CepWeatherComponent.YearDay
struct UCepWeatherComponent_YearDay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.CepWeatherComponent.SetupRain
struct UCepWeatherComponent_SetupRain_Params
{
	int                                                datNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              rainLength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              rainDensity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.CepWeatherComponent.SaveDataSnapshot
struct UCepWeatherComponent_SaveDataSnapshot_Params
{
};

// Function DrugDealerSimulator.CepWeatherComponent.RecoverDataSnapshot
struct UCepWeatherComponent_RecoverDataSnapshot_Params
{
};

// Function DrugDealerSimulator.CepWeatherComponent.NextYearDay
struct UCepWeatherComponent_NextYearDay_Params
{
	int                                                curDay;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Op;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.CepWeatherComponent.Init
struct UCepWeatherComponent_Init_Params
{
};

// Function DrugDealerSimulator.CepWeatherProfile.YearPassed
struct ACepWeatherProfile_YearPassed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.CepWeatherProfile.YearDay
struct ACepWeatherProfile_YearDay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.CepWeatherProfile.Init
struct ACepWeatherProfile_Init_Params
{
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.StartCommitSession
struct UDayConditionsLogger_UE_StartCommitSession_Params
{
	float                                              newStartVal;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByIndex
struct UDayConditionsLogger_UE_SetValueByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByHour
struct UDayConditionsLogger_UE_SetValueByHour_Params
{
	float                                              setHour;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.SeekIndex
struct UDayConditionsLogger_UE_SeekIndex_Params
{
	float                                              seekHour;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.IsInCommitMode
struct UDayConditionsLogger_UE_IsInCommitMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.GetValuesLength
struct UDayConditionsLogger_UE_GetValuesLength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByIndex
struct UDayConditionsLogger_UE_GetValueByIndex_Params
{
	int                                                SeekIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByHour
struct UDayConditionsLogger_UE_GetValueByHour_Params
{
	float                                              seekHour;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               extrapolateValue;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.GetSum
struct UDayConditionsLogger_UE_GetSum_Params
{
	int                                                maxIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.GetNextIndex
struct UDayConditionsLogger_UE_GetNextIndex_Params
{
	int                                                curIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Op;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.EndCommitSession
struct UDayConditionsLogger_UE_EndCommitSession_Params
{
	float                                              newEndVal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               followToEnd;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.ClassInit
struct UDayConditionsLogger_UE_ClassInit_Params
{
};

// Function DrugDealerSimulator.DayConditionsLoggerComponent.SetValueByIndex
struct UDayConditionsLoggerComponent_SetValueByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLoggerComponent.Init
struct UDayConditionsLoggerComponent_Init_Params
{
};

// Function DrugDealerSimulator.EB_BaseFactors.StoreSelfData
struct UEB_BaseFactors_StoreSelfData_Params
{
	TArray<float>                                      targetArray;                                              // (Parm, OutParm, ZeroConstructor)
	int                                                baseOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.EB_BaseFactors.SetClassBasics
struct UEB_BaseFactors_SetClassBasics_Params
{
};

// Function DrugDealerSimulator.EB_BaseFactors.RestoreFromData
struct UEB_BaseFactors_RestoreFromData_Params
{
	TArray<float>                                      sourceArray;                                              // (ConstParm, Parm, ZeroConstructor)
	int                                                baseOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.EB_BaseFactors.GetAddictivnessFactor
struct UEB_BaseFactors_GetAddictivnessFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.EB_BodyHealth.StoreSelfData
struct UEB_BodyHealth_StoreSelfData_Params
{
	TArray<float>                                      targetArray;                                              // (Parm, OutParm, ZeroConstructor)
	int                                                baseOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.EB_BodyHealth.SetClassBasics
struct UEB_BodyHealth_SetClassBasics_Params
{
};

// Function DrugDealerSimulator.EB_BodyHealth.RestoreFromData
struct UEB_BodyHealth_RestoreFromData_Params
{
	TArray<float>                                      sourceArray;                                              // (ConstParm, Parm, ZeroConstructor)
	int                                                baseOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.EB_BodyHealth.InitAsValuesStorage
struct UEB_BodyHealth_InitAsValuesStorage_Params
{
};

// Function DrugDealerSimulator.EB_BodyHealth.InitAsMinClamp
struct UEB_BodyHealth_InitAsMinClamp_Params
{
};

// Function DrugDealerSimulator.EB_BodyHealth.InitAsMaxClamp
struct UEB_BodyHealth_InitAsMaxClamp_Params
{
};

// Function DrugDealerSimulator.EB_BodyHealth.InitAsFactor
struct UEB_BodyHealth_InitAsFactor_Params
{
};

// Function DrugDealerSimulator.EB_BrainFunctions.StoreSelfData
struct UEB_BrainFunctions_StoreSelfData_Params
{
	TArray<float>                                      targetArray;                                              // (Parm, OutParm, ZeroConstructor)
	int                                                baseOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.EB_BrainFunctions.SetClassBasics
struct UEB_BrainFunctions_SetClassBasics_Params
{
};

// Function DrugDealerSimulator.EB_BrainFunctions.RestoreFromData
struct UEB_BrainFunctions_RestoreFromData_Params
{
	TArray<float>                                      sourceArray;                                              // (ConstParm, Parm, ZeroConstructor)
	int                                                baseOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.EB_BrainFunctions.InitAsValuesStorage
struct UEB_BrainFunctions_InitAsValuesStorage_Params
{
};

// Function DrugDealerSimulator.EB_BrainFunctions.InitAsMinClamp
struct UEB_BrainFunctions_InitAsMinClamp_Params
{
};

// Function DrugDealerSimulator.EB_BrainFunctions.InitAsMaxClamp
struct UEB_BrainFunctions_InitAsMaxClamp_Params
{
};

// Function DrugDealerSimulator.EB_BrainFunctions.InitAsFactor
struct UEB_BrainFunctions_InitAsFactor_Params
{
};

// Function DrugDealerSimulator.EB_Perception.StoreSelfData
struct UEB_Perception_StoreSelfData_Params
{
	TArray<float>                                      targetArray;                                              // (Parm, OutParm, ZeroConstructor)
	int                                                baseOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.EB_Perception.SetClassBasics
struct UEB_Perception_SetClassBasics_Params
{
};

// Function DrugDealerSimulator.EB_Perception.RestoreFromData
struct UEB_Perception_RestoreFromData_Params
{
	TArray<float>                                      sourceArray;                                              // (ConstParm, Parm, ZeroConstructor)
	int                                                baseOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.EB_Perception.InitAsValuesStorage
struct UEB_Perception_InitAsValuesStorage_Params
{
};

// Function DrugDealerSimulator.EB_Perception.InitAsMinClamp
struct UEB_Perception_InitAsMinClamp_Params
{
};

// Function DrugDealerSimulator.EB_Perception.InitAsMaxClamp
struct UEB_Perception_InitAsMaxClamp_Params
{
};

// Function DrugDealerSimulator.EB_Perception.InitAsFactor
struct UEB_Perception_InitAsFactor_Params
{
};

// Function DrugDealerSimulator.EB_Physical.StoreSelfData
struct UEB_Physical_StoreSelfData_Params
{
	TArray<float>                                      targetArray;                                              // (Parm, OutParm, ZeroConstructor)
	int                                                baseOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.EB_Physical.SetClassBasics
struct UEB_Physical_SetClassBasics_Params
{
};

// Function DrugDealerSimulator.EB_Physical.RestoreFromData
struct UEB_Physical_RestoreFromData_Params
{
	TArray<float>                                      sourceArray;                                              // (ConstParm, Parm, ZeroConstructor)
	int                                                baseOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.EB_Physical.InitAsValuesStorage
struct UEB_Physical_InitAsValuesStorage_Params
{
};

// Function DrugDealerSimulator.EB_Physical.InitAsMinClamp
struct UEB_Physical_InitAsMinClamp_Params
{
};

// Function DrugDealerSimulator.EB_Physical.InitAsMaxClamp
struct UEB_Physical_InitAsMaxClamp_Params
{
};

// Function DrugDealerSimulator.EB_Physical.InitAsFactor
struct UEB_Physical_InitAsFactor_Params
{
};

// Function DrugDealerSimulator.EB_Spirit.StoreSelfData
struct UEB_Spirit_StoreSelfData_Params
{
	TArray<float>                                      targetArray;                                              // (Parm, OutParm, ZeroConstructor)
	int                                                baseOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.EB_Spirit.SetClassBasics
struct UEB_Spirit_SetClassBasics_Params
{
};

// Function DrugDealerSimulator.EB_Spirit.RestoreFromData
struct UEB_Spirit_RestoreFromData_Params
{
	TArray<float>                                      sourceArray;                                              // (ConstParm, Parm, ZeroConstructor)
	int                                                baseOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.EB_Spirit.InitAsValuesStorage
struct UEB_Spirit_InitAsValuesStorage_Params
{
};

// Function DrugDealerSimulator.EB_Spirit.InitAsMinClamp
struct UEB_Spirit_InitAsMinClamp_Params
{
};

// Function DrugDealerSimulator.EB_Spirit.InitAsMaxClamp
struct UEB_Spirit_InitAsMaxClamp_Params
{
};

// Function DrugDealerSimulator.EB_Spirit.InitAsFactor
struct UEB_Spirit_InitAsFactor_Params
{
};

// Function DrugDealerSimulator.HumanoidActor.SetTestInt
struct AHumanoidActor_SetTestInt_Params
{
	int                                                newInt;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidActor.SaveDataSnapshot
struct AHumanoidActor_SaveDataSnapshot_Params
{
};

// Function DrugDealerSimulator.HumanoidActor.RestoreDataSnapshot
struct AHumanoidActor_RestoreDataSnapshot_Params
{
};

// Function DrugDealerSimulator.HumanoidActor.NoticeDrugTook
struct AHumanoidActor_NoticeDrugTook_Params
{
	class AActiveSubstance*                            substanceActor;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActiveSubstance*                            valuesProvider;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              takenMass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidActor.IsSubstanceEffective
struct AHumanoidActor_IsSubstanceEffective_Params
{
	int                                                substanceIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidActor.IsSubstanceBeingAbsorbed
struct AHumanoidActor_IsSubstanceBeingAbsorbed_Params
{
	int                                                substanceIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              checkDayTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidActor.GetToleranceDataLevel
struct AHumanoidActor_GetToleranceDataLevel_Params
{
	int                                                substanceIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              curDayTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidActor.GetToleranceDataInFactor
struct AHumanoidActor_GetToleranceDataInFactor_Params
{
	int                                                substanceIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              curDayTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidActor.GetToleranceDataFactor
struct AHumanoidActor_GetToleranceDataFactor_Params
{
	int                                                substanceIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              curDayTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidActor.GetTestInt
struct AHumanoidActor_GetTestInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidActor.GetCurrentConcentration
struct AHumanoidActor_GetCurrentConcentration_Params
{
	int                                                substanceIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidActor.GetAddictionDataLevel
struct AHumanoidActor_GetAddictionDataLevel_Params
{
	int                                                substanceIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              curDayTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidActor.GetAddictionDataInFactor
struct AHumanoidActor_GetAddictionDataInFactor_Params
{
	int                                                substanceIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              curDayTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidActor.GetAddictionDataFactor
struct AHumanoidActor_GetAddictionDataFactor_Params
{
	int                                                substanceIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              curDayTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidActor.ApplySubstance
struct AHumanoidActor_ApplySubstance_Params
{
	float                                              currentValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              curConcentration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidComponent.SetToleranceLevel
struct UHumanoidComponent_SetToleranceLevel_Params
{
	class AActiveSubstance*                            substanceActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidComponent.SetAddictionLevel
struct UHumanoidComponent_SetAddictionLevel_Params
{
	class AActiveSubstance*                            substanceActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidComponent.NoticeDrugTook
struct UHumanoidComponent_NoticeDrugTook_Params
{
	class AActiveSubstance*                            substanceActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActiveSubstance*                            valuesProvider;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              takenMass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidComponent.GetToleranceLevel
struct UHumanoidComponent_GetToleranceLevel_Params
{
	class AActiveSubstance*                            substanceActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidComponent.GetToleranceFactorIn
struct UHumanoidComponent_GetToleranceFactorIn_Params
{
	class AActiveSubstance*                            substanceActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidComponent.GetToleranceFactor
struct UHumanoidComponent_GetToleranceFactor_Params
{
	class AActiveSubstance*                            substanceActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidComponent.GetAddictionLevel
struct UHumanoidComponent_GetAddictionLevel_Params
{
	class AActiveSubstance*                            substanceActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidComponent.GetAddictionFactor
struct UHumanoidComponent_GetAddictionFactor_Params
{
	class AActiveSubstance*                            substanceActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.HumanoidComponent.ApplySubstance
struct UHumanoidComponent_ApplySubstance_Params
{
	float                                              currentValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              curConcentration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.UnlockedDone
struct ALockpickPuzzle_UnlockedDone_Params
{
};

// Function DrugDealerSimulator.LockpickPuzzle.StartTakingDamage
struct ALockpickPuzzle_StartTakingDamage_Params
{
};

// Function DrugDealerSimulator.LockpickPuzzle.ResetPuzzle
struct ALockpickPuzzle_ResetPuzzle_Params
{
	bool                                               ResetUnlockPosition;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.PushMouseInput
struct ALockpickPuzzle_PushMouseInput_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.IsUnlocked
struct ALockpickPuzzle_IsUnlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.IsScrewDriverInUnlockZone
struct ALockpickPuzzle_IsScrewDriverInUnlockZone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.IsBobbyPinInUnlockZone
struct ALockpickPuzzle_IsBobbyPinInUnlockZone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.HasBoobyPinBroke
struct ALockpickPuzzle_HasBoobyPinBroke_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.GetScrewDriverAngle
struct ALockpickPuzzle_GetScrewDriverAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.GetDifficultyMeta
struct ALockpickPuzzle_GetDifficultyMeta_Params
{
	int                                                optNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.GetCurrentResistance
struct ALockpickPuzzle_GetCurrentResistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinHealth
struct ALockpickPuzzle_GetBobbyPinHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinAngle
struct ALockpickPuzzle_GetBobbyPinAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.EndTakingDamage
struct ALockpickPuzzle_EndTakingDamage_Params
{
};

// Function DrugDealerSimulator.LockpickPuzzle.BrokenEvent
struct ALockpickPuzzle_BrokenEvent_Params
{
};

// Function DrugDealerSimulator.LockpickPuzzle.ActionButtonReleased
struct ALockpickPuzzle_ActionButtonReleased_Params
{
};

// Function DrugDealerSimulator.LockpickPuzzle.ActionButtonPressed
struct ALockpickPuzzle_ActionButtonPressed_Params
{
};

// Function DrugDealerSimulator.NextSingleton.WTACStoreInSaveSpace
struct UNextSingleton_WTACStoreInSaveSpace_Params
{
};

// Function DrugDealerSimulator.NextSingleton.WTACRecover
struct UNextSingleton_WTACRecover_Params
{
};

// Function DrugDealerSimulator.NextSingleton.ValidateWorld
struct UNextSingleton_ValidateWorld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.NextSingleton.TestCallFunction
struct UNextSingleton_TestCallFunction_Params
{
};

// Function DrugDealerSimulator.NextSingleton.ResearchWorld
struct UNextSingleton_ResearchWorld_Params
{
};

// Function DrugDealerSimulator.NextSingleton.ReInitWTAC
struct UNextSingleton_ReInitWTAC_Params
{
};

// Function DrugDealerSimulator.NextSingleton.ReassignWorld
struct UNextSingleton_ReassignWorld_Params
{
};

// Function DrugDealerSimulator.NextSingleton.ReasearchForStaticMeshes
struct UNextSingleton_ReasearchForStaticMeshes_Params
{
};

// Function DrugDealerSimulator.NextSingleton.PrepareInstancesForSaveEvent
struct UNextSingleton_PrepareInstancesForSaveEvent_Params
{
};

// Function DrugDealerSimulator.NextSingleton.OptSystemOperational
struct UNextSingleton_OptSystemOperational_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.NextSingleton.NPCSystemOperational
struct UNextSingleton_NPCSystemOperational_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.NextSingleton.NoticeLoadRequest
struct UNextSingleton_NoticeLoadRequest_Params
{
};

// Function DrugDealerSimulator.NextSingleton.LoadDone
struct UNextSingleton_LoadDone_Params
{
	bool                                               retryLoad;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.NextSingleton.IsGridOperational
struct UNextSingleton_IsGridOperational_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.NextSingleton.InnerLoadPerformed
struct UNextSingleton_InnerLoadPerformed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.NextSingleton.InitSystemsActors
struct UNextSingleton_InitSystemsActors_Params
{
};

// Function DrugDealerSimulator.NextSingleton.GetTSManager
struct UNextSingleton_GetTSManager_Params
{
	class ATS_Manager*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.NextSingleton.GetPlayerLocation
struct UNextSingleton_GetPlayerLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.NextSingleton.CanSaveDependedInstancesInit
struct UNextSingleton_CanSaveDependedInstancesInit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.NextSingletonLibrary.GetNextSingletonData
struct UNextSingletonLibrary_GetNextSingletonData_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UNextSingleton*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.NextSingletonWorldHelper.SetMasterState
struct ANextSingletonWorldHelper_SetMasterState_Params
{
	bool                                               newState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsMinClamp
struct USDB_BodyHealth_InitBucketAsMinClamp_Params
{
};

// Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsMaxClamp
struct USDB_BodyHealth_InitBucketAsMaxClamp_Params
{
};

// Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsFactors
struct USDB_BodyHealth_InitBucketAsFactors_Params
{
};

// Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsDataStorage
struct USDB_BodyHealth_InitBucketAsDataStorage_Params
{
};

// Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsMinClamp
struct USDB_BodyHealthComp_InitBucketAsMinClamp_Params
{
};

// Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsMaxClamp
struct USDB_BodyHealthComp_InitBucketAsMaxClamp_Params
{
};

// Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsFactors
struct USDB_BodyHealthComp_InitBucketAsFactors_Params
{
};

// Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsDataStorage
struct USDB_BodyHealthComp_InitBucketAsDataStorage_Params
{
};

// Function DrugDealerSimulator.SeasonAstralComponent.GetSunsetTime
struct USeasonAstralComponent_GetSunsetTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralComponent.GetSunriseTime
struct USeasonAstralComponent_GetSunriseTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitTarget
struct USeasonAstralComponent_GetOrbitTarget_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitDistanceTarget
struct USeasonAstralComponent_GetOrbitDistanceTarget_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralComponent.GetMaxHeigthTime
struct USeasonAstralComponent_GetMaxHeigthTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralComponent.GetHeatPower
struct USeasonAstralComponent_GetHeatPower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralProfile.GetSunsetTime
struct ASeasonAstralProfile_GetSunsetTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralProfile.GetSunriseTime
struct ASeasonAstralProfile_GetSunriseTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralProfile.GetHeatPower
struct ASeasonAstralProfile_GetHeatPower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonProfile.getAirProfile
struct ASeasonProfile_getAirProfile_Params
{
	class UAirComponent*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroActor.retName
struct AShiroActor_retName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DrugDealerSimulator.ShiroBlueprint.WeightedArrayRand
struct UShiroBlueprint_WeightedArrayRand_Params
{
	TArray<float>                                      WeightArr;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.testReferences
struct UShiroBlueprint_testReferences_Params
{
	float                                              t1;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              t2;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              t3;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              t4;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.SimpleGrid
struct UShiroBlueprint_SimpleGrid_Params
{
	float                                              intervalX;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              intervalY;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                columnCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                objectIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              positionX;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              positionY;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.shiroFunc2
struct UShiroBlueprint_shiroFunc2_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.shiroFunc
struct UShiroBlueprint_shiroFunc_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.GetWTAC
struct UShiroBlueprint_GetWTAC_Params
{
	class AWorldTimeAndConditions*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.GetSingleton
struct UShiroBlueprint_GetSingleton_Params
{
	class UNextSingleton*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.GetSAE
struct UShiroBlueprint_GetSAE_Params
{
	class ASubstancesAndEffects*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.FastProportions
struct UShiroBlueprint_FastProportions_Params
{
	float                                              minTargetRange;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              maxTargetRange;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              workValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               unboundBounds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              minBaseRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              maxBaseRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.extrapolateTest
struct UShiroBlueprint_extrapolateTest_Params
{
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              perc;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.CheckPrice
struct UShiroBlueprint_CheckPrice_Params
{
	float                                              drugCurrentPrice;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              drugResonablePrice;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              reputationFactor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AddictedCustomer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               priceHighOutput;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               priceTooHighOutput;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              baseMaxSellingFactor;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              reputationInfluence;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AddictedInfluence;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.CanSaveDependedInstancesInit
struct UShiroBlueprint_CanSaveDependedInstancesInit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.calculateSky
struct UShiroBlueprint_calculateSky_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curHour;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curMinute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               sunVisible;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              sunHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              sunPlainAngle;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              sunBrightness;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               moonVisible;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              varDump;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.SubstancesAndEffects.ProcessTriggers
struct ASubstancesAndEffects_ProcessTriggers_Params
{
	int                                                substanceIndexTriggering;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.SubstancesAndEffects.NoticeDrugTook
struct ASubstancesAndEffects_NoticeDrugTook_Params
{
	class AActiveSubstance*                            substanceActor;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActiveSubstance*                            valuesProvider;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              takenMass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.SubstancesAndEffects.MergeWithWorld
struct ASubstancesAndEffects_MergeWithWorld_Params
{
	class UWorld*                                      W;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.SubstancesAndEffects.ManageLaunchList
struct ASubstancesAndEffects_ManageLaunchList_Params
{
	float                                              currentDayTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceGenericData
struct ASubstancesAndEffects_GetSubstanceGenericData_Params
{
	int                                                substanceIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                subprop;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              retEmpty;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceEffectsByIndex
struct ASubstancesAndEffects_GetSubstanceEffectsByIndex_Params
{
	int                                                activeSubIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceEffects
struct ASubstancesAndEffects_GetSubstanceEffects_Params
{
	class AActiveSubstance*                            activeSub;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceByIndex
struct ASubstancesAndEffects_GetSubstanceByIndex_Params
{
	int                                                substanceIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActiveSubstance*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SubstancesAndEffects.GetHealthObject
struct ASubstancesAndEffects_GetHealthObject_Params
{
	class AHumanoidActor*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SubstancesAndEffects.DoBasicEffectTick
struct ASubstancesAndEffects_DoBasicEffectTick_Params
{
	class ATriggeredDrugEffect*                        Eff;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.SubstancesAndEffects.ClassInit
struct ASubstancesAndEffects_ClassInit_Params
{
};

// Function DrugDealerSimulator.SubstancesAndEffects.CheckForSubstanceEffects
struct ASubstancesAndEffects_CheckForSubstanceEffects_Params
{
	int                                                substanceIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TriggeredDrugEffect.ValidatePTRS
struct ATriggeredDrugEffect_ValidatePTRS_Params
{
};

// Function DrugDealerSimulator.TriggeredDrugEffect.StartEffect
struct ATriggeredDrugEffect_StartEffect_Params
{
};

// Function DrugDealerSimulator.TriggeredDrugEffect.PureEffectInit
struct ATriggeredDrugEffect_PureEffectInit_Params
{
};

// Function DrugDealerSimulator.TriggeredDrugEffect.PureEffectEnd
struct ATriggeredDrugEffect_PureEffectEnd_Params
{
};

// Function DrugDealerSimulator.TriggeredDrugEffect.NoticeEffectEnd
struct ATriggeredDrugEffect_NoticeEffectEnd_Params
{
	float                                              currentDayTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TriggeredDrugEffect.InitInnerClass
struct ATriggeredDrugEffect_InitInnerClass_Params
{
};

// Function DrugDealerSimulator.TriggeredDrugEffect.GetCurrentDayTime
struct ATriggeredDrugEffect_GetCurrentDayTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TriggeredDrugEffect.EndEffect
struct ATriggeredDrugEffect_EndEffect_Params
{
};

// Function DrugDealerSimulator.TriggeredDrugEffect.EffectTick
struct ATriggeredDrugEffect_EffectTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TriggeredDrugEffect.CheckTrigger
struct ATriggeredDrugEffect_CheckTrigger_Params
{
	class AHumanoidActor*                              checkObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              currentDayTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TimeProfile.setTimeMultiplier
struct ATimeProfile_setTimeMultiplier_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              propagationTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TimeProfile.setDayHourMinuteTime
struct ATimeProfile_setDayHourMinuteTime_Params
{
	int                                                day;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hour;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                minute;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TimeProfile.getIntTimeData
struct ATimeProfile_getIntTimeData_Params
{
	int                                                optNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TimeProfile.GetCurrentTimeMultiplier
struct ATimeProfile_GetCurrentTimeMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TimeProfile.dayFloatResult
struct ATimeProfile_dayFloatResult_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TimeProfile.addSeconds
struct ATimeProfile_addSeconds_Params
{
	float                                              addSeconds;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TimeProfile.addMinutes
struct ATimeProfile_addMinutes_Params
{
	int                                                addMinutes;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TrainControllerCode.initOnWorld
struct ATrainControllerCode_initOnWorld_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TrainControllerCode.initInstance
struct ATrainControllerCode_initInstance_Params
{
	int                                                followingSegmentsCount;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TrainControllerCode.calcTotalWeigthAndPower
struct ATrainControllerCode_calcTotalWeigthAndPower_Params
{
};

// Function DrugDealerSimulator.TrainControllerCode.calcTotalFrictionForce
struct ATrainControllerCode_calcTotalFrictionForce_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TrainControllerCode.calcSingleSegment
struct ATrainControllerCode_calcSingleSegment_Params
{
	class ATrainRealSegment*                           calcSegment;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TrainControllerCode.calcSegmentDistanceToLeader
struct ATrainControllerCode_calcSegmentDistanceToLeader_Params
{
	int                                                SegmentIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.ValidateIndex
struct ATS_Manager_ValidateIndex_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.ValidateActorIndex
struct ATS_Manager_ValidateActorIndex_Params
{
	int                                                ValidationIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.TranslateActorToDataIndex
struct ATS_Manager_TranslateActorToDataIndex_Params
{
	int                                                SeekActorIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.StartDEARaid
struct ATS_Manager_StartDEARaid_Params
{
	int                                                EntranceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DeepSeek;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.SpawnEntranceAndRegister
struct ATS_Manager_SpawnEntranceAndRegister_Params
{
};

// Function DrugDealerSimulator.TS_Manager.SetRaidedState
struct ATS_Manager_SetRaidedState_Params
{
	bool                                               newState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.SetDebDigFactor
struct ATS_Manager_SetDebDigFactor_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.ReserveAndGetNextActorIndex
struct ATS_Manager_ReserveAndGetNextActorIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.ReportConnRaidProgress
struct ATS_Manager_ReportConnRaidProgress_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.ReportConnectionDigProgress
struct ATS_Manager_ReportConnectionDigProgress_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.ReopenEntrance
struct ATS_Manager_ReopenEntrance_Params
{
	int                                                EntranceActorIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.RemoveConnection
struct ATS_Manager_RemoveConnection_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.RegisterOnLoadTunnel
struct ATS_Manager_RegisterOnLoadTunnel_Params
{
	class ATS_TunnelEntrence*                          ThisEntrence;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.RegisterNewEntrance
struct ATS_Manager_RegisterNewEntrance_Params
{
	class ATS_TunnelEntrence*                          NewBuildedEntrance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.RecoverData
struct ATS_Manager_RecoverData_Params
{
};

// Function DrugDealerSimulator.TS_Manager.RecalcTunnelsRates
struct ATS_Manager_RecalcTunnelsRates_Params
{
};

// Function DrugDealerSimulator.TS_Manager.RecalcProgressReportsForConn
struct ATS_Manager_RecalcProgressReportsForConn_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.RecalcProgressReports
struct ATS_Manager_RecalcProgressReports_Params
{
};

// Function DrugDealerSimulator.TS_Manager.PrintUpgDataForConn
struct ATS_Manager_PrintUpgDataForConn_Params
{
	int                                                ConnIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.PrintUpgData
struct ATS_Manager_PrintUpgData_Params
{
};

// Function DrugDealerSimulator.TS_Manager.PrintRaidMessage
struct ATS_Manager_PrintRaidMessage_Params
{
	int                                                ActionType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubactionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ObjectA;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ObjectB;                                                  // (Parm, ZeroConstructor)
};

// Function DrugDealerSimulator.TS_Manager.PrintEntData
struct ATS_Manager_PrintEntData_Params
{
};

// Function DrugDealerSimulator.TS_Manager.PrintDestinationData
struct ATS_Manager_PrintDestinationData_Params
{
	struct FTS_AvailableDestinations                   InputData;                                                // (Parm)
};

// Function DrugDealerSimulator.TS_Manager.PrintConnData
struct ATS_Manager_PrintConnData_Params
{
};

// Function DrugDealerSimulator.TS_Manager.PrepareDataForSave
struct ATS_Manager_PrepareDataForSave_Params
{
};

// Function DrugDealerSimulator.TS_Manager.LogRaidAction
struct ATS_Manager_LogRaidAction_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                objA;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                objB;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              adtValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.IsUpgradeVisibleInConn
struct ATS_Manager_IsUpgradeVisibleInConn_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UpgradeIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.IsUpgradeBoughtInConn
struct ATS_Manager_IsUpgradeBoughtInConn_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UpgradeIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.IsUpgradeAvailableForConn
struct ATS_Manager_IsUpgradeAvailableForConn_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UpgradeIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.IsTunnelSystemBeeingRaided
struct ATS_Manager_IsTunnelSystemBeeingRaided_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.HasUpgradeByIndex
struct ATS_Manager_HasUpgradeByIndex_Params
{
	int                                                checkIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.HasEntrenceRegisteredByActor
struct ATS_Manager_HasEntrenceRegisteredByActor_Params
{
	class ATS_TunnelEntrence*                          EntrenceActor;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.HasEntrenceRegistered
struct ATS_Manager_HasEntrenceRegistered_Params
{
	struct FString                                     SeekName;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.GlobalRaidStart
struct ATS_Manager_GlobalRaidStart_Params
{
	int                                                EntranceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameDifficulty;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.GetUpgradeDataReferenced
struct ATS_Manager_GetUpgradeDataReferenced_Params
{
	int                                                UpgradeIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTS_ConnectionWorkUpgrade                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DrugDealerSimulator.TS_Manager.GetUpgradeData
struct ATS_Manager_GetUpgradeData_Params
{
	int                                                UpgradeIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTS_ConnectionWorkUpgrade                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DrugDealerSimulator.TS_Manager.GetRaidSpeedSeek
struct ATS_Manager_GetRaidSpeedSeek_Params
{
	int                                                GameDifficultyLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.GetRaidDeepSeek
struct ATS_Manager_GetRaidDeepSeek_Params
{
	int                                                GameDifficultyLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.GetNotPayedDistance
struct ATS_Manager_GetNotPayedDistance_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.GetEntrencesData
struct ATS_Manager_GetEntrencesData_Params
{
	TMap<struct FString, int>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DrugDealerSimulator.TS_Manager.GetEntrenceInnerIndexByActor
struct ATS_Manager_GetEntrenceInnerIndexByActor_Params
{
	class ATS_TunnelEntrence*                          EntrenceActor;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.GetEntrenceInnerIndex
struct ATS_Manager_GetEntrenceInnerIndex_Params
{
	struct FString                                     SeekName;                                                 // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.GetEntranceName
struct ATS_Manager_GetEntranceName_Params
{
	int                                                seekEntranceIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DrugDealerSimulator.TS_Manager.GetCurrentGameTime
struct ATS_Manager_GetCurrentGameTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.GetConnectionStatesConst
struct ATS_Manager_GetConnectionStatesConst_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTS_ConnState                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DrugDealerSimulator.TS_Manager.GetConnectionStates
struct ATS_Manager_GetConnectionStates_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTS_ConnState                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DrugDealerSimulator.TS_Manager.GetConnectionMeterRate
struct ATS_Manager_GetConnectionMeterRate_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.GetAvailableTeleportDestinations
struct ATS_Manager_GetAvailableTeleportDestinations_Params
{
	int                                                InputEntranceActorIndex;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTS_AvailableDestinations>           OutDestination;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.GetAvailableDigDestinations
struct ATS_Manager_GetAvailableDigDestinations_Params
{
	int                                                InputEntranceActorIndex;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTS_AvailableDestinations>           OutDestination;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.FindConnectionIndex
struct ATS_Manager_FindConnectionIndex_Params
{
	int                                                FirstEntrenceIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SecondEntrenceIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.DEARaidEnd
struct ATS_Manager_DEARaidEnd_Params
{
	int                                                ConnectionsLost;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EntrancesLost;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ArrestedDepositedCount;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.CreateUpgradesIndex
struct ATS_Manager_CreateUpgradesIndex_Params
{
};

// Function DrugDealerSimulator.TS_Manager.CreateNewConnection
struct ATS_Manager_CreateNewConnection_Params
{
	int                                                FirstEntrenceIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SecondEntrenceIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.ConnectionStartRaidEvent
struct ATS_Manager_ConnectionStartRaidEvent_Params
{
	int                                                EntranceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.ConnectionRequiresMoney
struct ATS_Manager_ConnectionRequiresMoney_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.ConnectionRaidedEvent
struct ATS_Manager_ConnectionRaidedEvent_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.ConnectionRaided
struct ATS_Manager_ConnectionRaided_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartRaidTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndRaidTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                parentChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.ConnectionDone
struct ATS_Manager_ConnectionDone_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.CalcNextIndexBasedOnIndex
struct ATS_Manager_CalcNextIndexBasedOnIndex_Params
{
};

// Function DrugDealerSimulator.TS_Manager.BuyUpgradeForConn
struct ATS_Manager_BuyUpgradeForConn_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UpgradeIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.AfterRaidRelease
struct ATS_Manager_AfterRaidRelease_Params
{
};

// Function DrugDealerSimulator.TS_Manager.AddNewEntrence
struct ATS_Manager_AddNewEntrence_Params
{
	class ATS_TunnelEntrence*                          EntrenceActor;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_Manager.AddMoneyToConnection
struct ATS_Manager_AddMoneyToConnection_Params
{
	int                                                ConnectionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              moneyAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_TunnelEntrence.SetManagerIndex
struct ATS_TunnelEntrence_SetManagerIndex_Params
{
	int                                                NewIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_TunnelEntrence.NeedStartManage
struct ATS_TunnelEntrence_NeedStartManage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_TunnelEntrence.GetDataIndex
struct ATS_TunnelEntrence_GetDataIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TS_TunnelEntrence.GetAvailableDestinations
struct ATS_TunnelEntrence_GetAvailableDestinations_Params
{
	TArray<class ATS_TunnelEntrence*>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DrugDealerSimulator.TS_TunnelEntrence.GetActorIndex
struct ATS_TunnelEntrence_GetActorIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WeatherProfile.YearPassed
struct AWeatherProfile_YearPassed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WeatherProfile.Init
struct AWeatherProfile_Init_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.TimeProfile
struct AWorldTimeAndConditions_TimeProfile_Params
{
	class ATimeProfile*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.StoreInSaveSpace
struct AWorldTimeAndConditions_StoreInSaveSpace_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.StartRain
struct AWorldTimeAndConditions_StartRain_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.StartFog
struct AWorldTimeAndConditions_StartFog_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.ShadowsSettingsChanged
struct AWorldTimeAndConditions_ShadowsSettingsChanged_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.SetUltraSkyInit
struct AWorldTimeAndConditions_SetUltraSkyInit_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.SetTimeMulptiplier
struct AWorldTimeAndConditions_SetTimeMulptiplier_Params
{
	float                                              newFactor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              propagationTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.SetTime
struct AWorldTimeAndConditions_SetTime_Params
{
	int                                                dayValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hourValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                minuteValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.SaveDataSnapshot
struct AWorldTimeAndConditions_SaveDataSnapshot_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.ReInitLoggers
struct AWorldTimeAndConditions_ReInitLoggers_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.RecoverDataSnapshot
struct AWorldTimeAndConditions_RecoverDataSnapshot_Params
{
	bool                                               recoverTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.PureInit
struct AWorldTimeAndConditions_PureInit_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.PoliceArrestTimeShift
struct AWorldTimeAndConditions_PoliceArrestTimeShift_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.NoticeCalcPhaseDone
struct AWorldTimeAndConditions_NoticeCalcPhaseDone_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.MarkNewLoad
struct AWorldTimeAndConditions_MarkNewLoad_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.IsUltraSkyInited
struct AWorldTimeAndConditions_IsUltraSkyInited_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.IsCurrentlyRaining
struct AWorldTimeAndConditions_IsCurrentlyRaining_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.IsAfterNoon
struct AWorldTimeAndConditions_IsAfterNoon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.InWorldInitiated
struct AWorldTimeAndConditions_InWorldInitiated_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.InnerDisableWeatherSystem
struct AWorldTimeAndConditions_InnerDisableWeatherSystem_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.Init
struct AWorldTimeAndConditions_Init_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.HasFog
struct AWorldTimeAndConditions_HasFog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPowerAfterBounced
struct AWorldTimeAndConditions_GetSunPowerAfterBounced_Params
{
	float                                              cAngle;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPower
struct AWorldTimeAndConditions_GetSunPower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetSunLigthPower
struct AWorldTimeAndConditions_GetSunLigthPower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetRainValue
struct AWorldTimeAndConditions_GetRainValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetRainLogger
struct AWorldTimeAndConditions_GetRainLogger_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDayConditionsLogger_UE*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitProgress
struct AWorldTimeAndConditions_GetMoonOrbitProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitAngle
struct AWorldTimeAndConditions_GetMoonOrbitAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetInitiationState
struct AWorldTimeAndConditions_GetInitiationState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetHeatLogger
struct AWorldTimeAndConditions_GetHeatLogger_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDayConditionsLogger_UE*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetFromSaveSpace
struct AWorldTimeAndConditions_GetFromSaveSpace_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetFogLogger
struct AWorldTimeAndConditions_GetFogLogger_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDayConditionsLogger_UE*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentTimeForUltraSky
struct AWorldTimeAndConditions_GetCurrentTimeForUltraSky_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunShadows
struct AWorldTimeAndConditions_GetCurrentSunShadows_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunPower
struct AWorldTimeAndConditions_GetCurrentSunPower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunOrbit
struct AWorldTimeAndConditions_GetCurrentSunOrbit_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunDistance
struct AWorldTimeAndConditions_GetCurrentSunDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunAngle
struct AWorldTimeAndConditions_GetCurrentSunAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentStarsIntensity
struct AWorldTimeAndConditions_GetCurrentStarsIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentShadowSettings
struct AWorldTimeAndConditions_GetCurrentShadowSettings_Params
{
	bool                                               sunShadows;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               moonShadows;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentNigthBrightness
struct AWorldTimeAndConditions_GetCurrentNigthBrightness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonShadows
struct AWorldTimeAndConditions_GetCurrentMoonShadows_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonPhase
struct AWorldTimeAndConditions_GetCurrentMoonPhase_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonBrigthness
struct AWorldTimeAndConditions_GetCurrentMoonBrigthness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntSeconds
struct AWorldTimeAndConditions_GetCurrentIntSeconds_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntMinute
struct AWorldTimeAndConditions_GetCurrentIntMinute_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntHour
struct AWorldTimeAndConditions_GetCurrentIntHour_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntDay
struct AWorldTimeAndConditions_GetCurrentIntDay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFogLevel
struct AWorldTimeAndConditions_GetCurrentFogLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatMinute
struct AWorldTimeAndConditions_GetCurrentFloatMinute_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatHour
struct AWorldTimeAndConditions_GetCurrentFloatHour_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatDay
struct AWorldTimeAndConditions_GetCurrentFloatDay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsSpeed
struct AWorldTimeAndConditions_GetCurrentCloudsSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsLevel
struct AWorldTimeAndConditions_GetCurrentCloudsLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentBrightness
struct AWorldTimeAndConditions_GetCurrentBrightness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCloudLogger
struct AWorldTimeAndConditions_GetCloudLogger_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDayConditionsLogger_UE*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistFactor
struct AWorldTimeAndConditions_GetCalcSunDistFactor_Params
{
	float                                              baseVal;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistanceFactor
struct AWorldTimeAndConditions_GetCalcSunDistanceFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.getBasicAirProfile
struct AWorldTimeAndConditions_getBasicAirProfile_Params
{
	class UAirComponent*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeSunPower
struct AWorldTimeAndConditions_GetAnyTimeSunPower_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              hourMark;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsSunFactor
struct AWorldTimeAndConditions_GetAnyTimeCloudsSunFactor_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              hourMark;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsLevel
struct AWorldTimeAndConditions_GetAnyTimeCloudsLevel_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              hourMark;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.EndRain
struct AWorldTimeAndConditions_EndRain_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.EndFog
struct AWorldTimeAndConditions_EndFog_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.EnableWeatherSystem
struct AWorldTimeAndConditions_EnableWeatherSystem_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunRaysAngle
struct AWorldTimeAndConditions_CalcSunRaysAngle_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunPhysics
struct AWorldTimeAndConditions_CalcSunPhysics_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.CalcInteraction
struct AWorldTimeAndConditions_CalcInteraction_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.Calc
struct AWorldTimeAndConditions_Calc_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.AddTime
struct AWorldTimeAndConditions_AddTime_Params
{
	float                                              hoursValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              minuteValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditionsCurFactors.noticeFactors
struct AWorldTimeAndConditionsCurFactors_noticeFactors_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              currentRainChance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              sunPower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetSunVisibility
struct UWTACFactorsComponent_SetSunVisibility_Params
{
	bool                                               newVisibility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetSunRaysAngle
struct UWTACFactorsComponent_SetSunRaysAngle_Params
{
	float                                              newSunRays;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetSunPower
struct UWTACFactorsComponent_SetSunPower_Params
{
	float                                              newPower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitProgress
struct UWTACFactorsComponent_SetSunOrbitProgress_Params
{
	float                                              deg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitDistance
struct UWTACFactorsComponent_SetSunOrbitDistance_Params
{
	float                                              newDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitAngle
struct UWTACFactorsComponent_SetSunOrbitAngle_Params
{
	float                                              newOrbitAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetSunLumens
struct UWTACFactorsComponent_SetSunLumens_Params
{
	float                                              newLumensValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetStarsIntensity
struct UWTACFactorsComponent_SetStarsIntensity_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetRainValue
struct UWTACFactorsComponent_SetRainValue_Params
{
	float                                              newRainValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetRainState
struct UWTACFactorsComponent_SetRainState_Params
{
	bool                                               newState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetOrbitPhase
struct UWTACFactorsComponent_SetOrbitPhase_Params
{
	float                                              shPassed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetMoonOrbit
struct UWTACFactorsComponent_SetMoonOrbit_Params
{
	float                                              newProgress;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetFogState
struct UWTACFactorsComponent_SetFogState_Params
{
	bool                                               newState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetFogLevel
struct UWTACFactorsComponent_SetFogLevel_Params
{
	float                                              NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetFactorFloatData
struct UWTACFactorsComponent_SetFactorFloatData_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fVal;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetCloudsLevel
struct UWTACFactorsComponent_SetCloudsLevel_Params
{
	float                                              NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetBrigthnesslevel
struct UWTACFactorsComponent_SetBrigthnesslevel_Params
{
	float                                              newBrigthnessLevel;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetAtmosphereSunReflections
struct UWTACFactorsComponent_SetAtmosphereSunReflections_Params
{
	float                                              newAtmosphereReflections;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.Reinitialize
struct UWTACFactorsComponent_Reinitialize_Params
{
};

// Function DrugDealerSimulator.WTACFactorsComponent.noticeFactors
struct UWTACFactorsComponent_noticeFactors_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              currentRainChance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              currentRainDensityTarget;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              currentStormChance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              sunPower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.NeedsReinitialization
struct UWTACFactorsComponent_NeedsReinitialization_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.GetSunOrbitAbsoluteDeg
struct UWTACFactorsComponent_GetSunOrbitAbsoluteDeg_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.GetFactorFloatData
struct UWTACFactorsComponent_GetFactorFloatData_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.CanRecover
struct UWTACFactorsComponent_CanRecover_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
