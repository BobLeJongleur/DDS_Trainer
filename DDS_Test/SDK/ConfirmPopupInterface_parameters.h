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

// Function ConfirmPopupInterface.ConfirmPopupInterface_C.UserClickedCancel
struct UConfirmPopupInterface_C_UserClickedCancel_Params
{
	struct FString                                     ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ConfirmPopupInterface.ConfirmPopupInterface_C.UserClickedConfirm
struct UConfirmPopupInterface_C_UserClickedConfirm_Params
{
	struct FString                                     ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
