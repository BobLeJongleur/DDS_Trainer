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

// Function CashDrawerBP.CashDrawerBP_C.ProcessValuables
struct ACashDrawerBP_C_ProcessValuables_Params
{
};

// Function CashDrawerBP.CashDrawerBP_C.CanAccessContainer
struct ACashDrawerBP_C_CanAccessContainer_Params
{
	bool                                               CanAccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DeclineReason;                                            // (Parm, OutParm)
};

// Function CashDrawerBP.CashDrawerBP_C.UserConstructionScript
struct ACashDrawerBP_C_UserConstructionScript_Params
{
};

// Function CashDrawerBP.CashDrawerBP_C.DrawerOpening__FinishedFunc
struct ACashDrawerBP_C_DrawerOpening__FinishedFunc_Params
{
};

// Function CashDrawerBP.CashDrawerBP_C.DrawerOpening__UpdateFunc
struct ACashDrawerBP_C_DrawerOpening__UpdateFunc_Params
{
};

// Function CashDrawerBP.CashDrawerBP_C.LongRadiusChanged
struct ACashDrawerBP_C_LongRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CashDrawerBP.CashDrawerBP_C.OpenDrawer
struct ACashDrawerBP_C_OpenDrawer_Params
{
};

// Function CashDrawerBP.CashDrawerBP_C.CloseDrawer
struct ACashDrawerBP_C_CloseDrawer_Params
{
};

// Function CashDrawerBP.CashDrawerBP_C.closeEventScript
struct ACashDrawerBP_C_closeEventScript_Params
{
};

// Function CashDrawerBP.CashDrawerBP_C.ShortRadiusChanged
struct ACashDrawerBP_C_ShortRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CashDrawerBP.CashDrawerBP_C.MoneyDeposited
struct ACashDrawerBP_C_MoneyDeposited_Params
{
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CashDrawerBP.CashDrawerBP_C.ExecuteUbergraph_CashDrawerBP
struct ACashDrawerBP_C_ExecuteUbergraph_CashDrawerBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
