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

// Function packageBase.packageBase_C.UserConstructionScript
struct ApackageBase_C_UserConstructionScript_Params
{
};

// Function packageBase.packageBase_C.ReceiveBeginPlay
struct ApackageBase_C_ReceiveBeginPlay_Params
{
};

// Function packageBase.packageBase_C.takeContents
struct ApackageBase_C_takeContents_Params
{
};

// Function packageBase.packageBase_C.Setup
struct ApackageBase_C_Setup_Params
{
	TArray<struct FinventoryItemStruct>                contents;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Quantities;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              TotalSize;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalWeight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function packageBase.packageBase_C.ExecuteUbergraph_packageBase
struct ApackageBase_C_ExecuteUbergraph_packageBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
