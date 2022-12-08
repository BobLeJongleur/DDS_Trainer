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

// Function ContainerSafeSmall.ContainerSafeSmall_C.DropCash
struct AContainerSafeSmall_C_DropCash_Params
{
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DropConfirmed;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerSafeSmall.ContainerSafeSmall_C.UserConstructionScript
struct AContainerSafeSmall_C_UserConstructionScript_Params
{
};

// Function ContainerSafeSmall.ContainerSafeSmall_C.ReceiveDestroyed
struct AContainerSafeSmall_C_ReceiveDestroyed_Params
{
};

// Function ContainerSafeSmall.ContainerSafeSmall_C.InvalidateOldSafe
struct AContainerSafeSmall_C_InvalidateOldSafe_Params
{
	struct FGuid                                       SafeGuid;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerSafeSmall.ContainerSafeSmall_C.ExecuteUbergraph_ContainerSafeSmall
struct AContainerSafeSmall_C_ExecuteUbergraph_ContainerSafeSmall_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
