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

// Function mainComputer.mainComputer_C.LabConstructed
struct AmainComputer_C_LabConstructed_Params
{
};

// Function mainComputer.mainComputer_C.SetBossName
struct AmainComputer_C_SetBossName_Params
{
	struct FText                                       BossName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function mainComputer.mainComputer_C.GetPlayerDebt
struct AmainComputer_C_GetPlayerDebt_Params
{
	float                                              OutDebt;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function mainComputer.mainComputer_C.GetPlayerOrderLimit
struct AmainComputer_C_GetPlayerOrderLimit_Params
{
	float                                              Limit;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function mainComputer.mainComputer_C.SendLaunderPayment
struct AmainComputer_C_SendLaunderPayment_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mainComputer.mainComputer_C.AddMoneyToLaunder
struct AmainComputer_C_AddMoneyToLaunder_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mainComputer.mainComputer_C.ExpandRama
struct AmainComputer_C_ExpandRama_Params
{
};

// Function mainComputer.mainComputer_C.reconstructDrugOffer
struct AmainComputer_C_reconstructDrugOffer_Params
{
};

// Function mainComputer.mainComputer_C.getDrugSizeWeight
struct AmainComputer_C_getDrugSizeWeight_Params
{
	int                                                packageGrams;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PackageSize;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PackageWeight;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function mainComputer.mainComputer_C.changePrices
struct AmainComputer_C_changePrices_Params
{
};

// Function mainComputer.mainComputer_C.generateInitialBankHistory
struct AmainComputer_C_generateInitialBankHistory_Params
{
};

// Function mainComputer.mainComputer_C.newBankOperation
struct AmainComputer_C_newBankOperation_Params
{
	bool                                               Income;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       SourceName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Notify;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Legal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mainComputer.mainComputer_C.checkNewDrugAvailability
struct AmainComputer_C_checkNewDrugAvailability_Params
{
};

// Function mainComputer.mainComputer_C.addUserMessage
struct AmainComputer_C_addUserMessage_Params
{
	int                                                userID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               PlayerMessage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mainComputer.mainComputer_C.getOrderRefByID
struct AmainComputer_C_getOrderRefByID_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AorderInstance_C*                            orderInstance;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function mainComputer.mainComputer_C.constructMessageSentence
struct AmainComputer_C_constructMessageSentence_Params
{
	bool                                               LastIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BeforeLastIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FdrugData                                   drugData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               isSingle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mainComputer.mainComputer_C.sendNewOrder
struct AmainComputer_C_sendNewOrder_Params
{
	TArray<struct FdrugData>                           drugData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               DrugIDs;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        DrugQuantities;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function mainComputer.mainComputer_C.UserConstructionScript
struct AmainComputer_C_UserConstructionScript_Params
{
};

// Function mainComputer.mainComputer_C.ReceiveBeginPlay
struct AmainComputer_C_ReceiveBeginPlay_Params
{
};

// Function mainComputer.mainComputer_C.ReceiveTick
struct AmainComputer_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mainComputer.mainComputer_C.openComputer
struct AmainComputer_C_openComputer_Params
{
};

// Function mainComputer.mainComputer_C.prepareOrderResponse
struct AmainComputer_C_prepareOrderResponse_Params
{
};

// Function mainComputer.mainComputer_C.ActivateComputer
struct AmainComputer_C_ActivateComputer_Params
{
};

// Function mainComputer.mainComputer_C.checkBenefitPayment
struct AmainComputer_C_checkBenefitPayment_Params
{
};

// Function mainComputer.mainComputer_C.checkIllegalIncome
struct AmainComputer_C_checkIllegalIncome_Params
{
};

// Function mainComputer.mainComputer_C.addPsychedelicsOffer
struct AmainComputer_C_addPsychedelicsOffer_Params
{
};

// Function mainComputer.mainComputer_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
struct AmainComputer_C_BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
{
	class URamaSaveComponent*                          RamaSaveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LevelPackageName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function mainComputer.mainComputer_C.RetryIllegalReminder
struct AmainComputer_C_RetryIllegalReminder_Params
{
};

// Function mainComputer.mainComputer_C.ChooseBossNickname
struct AmainComputer_C_ChooseBossNickname_Params
{
};

// Function mainComputer.mainComputer_C.ExecuteUbergraph_mainComputer
struct AmainComputer_C_ExecuteUbergraph_mainComputer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
