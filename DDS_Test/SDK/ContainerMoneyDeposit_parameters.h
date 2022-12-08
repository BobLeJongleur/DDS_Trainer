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

// Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.CanAccessContainer
struct AContainerMoneyDeposit_C_CanAccessContainer_Params
{
	bool                                               CanAccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DeclineReason;                                            // (Parm, OutParm)
};

// Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.UserConstructionScript
struct AContainerMoneyDeposit_C_UserConstructionScript_Params
{
};

// Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.NewPickupQuest
struct AContainerMoneyDeposit_C_NewPickupQuest_Params
{
	int                                                taskID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.closeEventScript
struct AContainerMoneyDeposit_C_closeEventScript_Params
{
};

// Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.DepositCash
struct AContainerMoneyDeposit_C_DepositCash_Params
{
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.ExecuteUbergraph_ContainerMoneyDeposit
struct AContainerMoneyDeposit_C_ExecuteUbergraph_ContainerMoneyDeposit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
