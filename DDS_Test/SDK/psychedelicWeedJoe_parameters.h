#pragma once

#include "pch.h"

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function psychedelicWeedJoe.psychedelicWeedJoe_C.getReturnLine
struct ApsychedelicWeedJoe_C_getReturnLine_Params
{
	TArray<struct FinventoryItemStruct>                Items;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Quantities;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Trade_canceled;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FdialogueData                               ReturnData;                                               // (Parm, OutParm)
	TArray<int>                                        ReturnIndexes;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function psychedelicWeedJoe.psychedelicWeedJoe_C.UserConstructionScript
struct ApsychedelicWeedJoe_C_UserConstructionScript_Params
{
};

// Function psychedelicWeedJoe.psychedelicWeedJoe_C.ReceiveBeginPlay
struct ApsychedelicWeedJoe_C_ReceiveBeginPlay_Params
{
};

// Function psychedelicWeedJoe.psychedelicWeedJoe_C.retryInitiate
struct ApsychedelicWeedJoe_C_retryInitiate_Params
{
};

// Function psychedelicWeedJoe.psychedelicWeedJoe_C.ExecuteUbergraph_psychedelicWeedJoe
struct ApsychedelicWeedJoe_C_ExecuteUbergraph_psychedelicWeedJoe_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
