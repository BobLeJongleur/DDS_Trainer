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

// Function ContainerSafeLarge.ContainerSafeLarge_C.DropCash
struct AContainerSafeLarge_C_DropCash_Params
{
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DropConfirmed;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerSafeLarge.ContainerSafeLarge_C.UserConstructionScript
struct AContainerSafeLarge_C_UserConstructionScript_Params
{
};

// Function ContainerSafeLarge.ContainerSafeLarge_C.InvalidateOldSafe
struct AContainerSafeLarge_C_InvalidateOldSafe_Params
{
	struct FGuid                                       SafeGuid;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerSafeLarge.ContainerSafeLarge_C.ReceiveDestroyed
struct AContainerSafeLarge_C_ReceiveDestroyed_Params
{
};

// Function ContainerSafeLarge.ContainerSafeLarge_C.RamaLoaded
struct AContainerSafeLarge_C_RamaLoaded_Params
{
};

// Function ContainerSafeLarge.ContainerSafeLarge_C.ExecuteUbergraph_ContainerSafeLarge
struct AContainerSafeLarge_C_ExecuteUbergraph_ContainerSafeLarge_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
