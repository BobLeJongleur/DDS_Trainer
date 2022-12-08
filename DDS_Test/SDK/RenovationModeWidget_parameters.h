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

// Function RenovationModeWidget.RenovationModeWidget_C.CloseFrontWidget
struct URenovationModeWidget_C_CloseFrontWidget_Params
{
	bool                                               CanClose;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RenovationModeWidget.RenovationModeWidget_C.GetCurMaterial
struct URenovationModeWidget_C_GetCurMaterial_Params
{
	class UMaterialInstance*                           CurMaterial;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurMatID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RenovationModeWidget.RenovationModeWidget_C.RenderList
struct URenovationModeWidget_C_RenderList_Params
{
};

// Function RenovationModeWidget.RenovationModeWidget_C.ChangeSurfaceSource
struct URenovationModeWidget_C_ChangeSurfaceSource_Params
{
	class UDataTable*                                  DataTable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RenovationModeWidget.RenovationModeWidget_C.GetText_1
struct URenovationModeWidget_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function RenovationModeWidget.RenovationModeWidget_C.Construct
struct URenovationModeWidget_C_Construct_Params
{
};

// Function RenovationModeWidget.RenovationModeWidget_C.setup
struct URenovationModeWidget_C_setup_Params
{
	class AplayerCharacterBP_C*                        Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RenovationModeWidget.RenovationModeWidget_C.Destruct
struct URenovationModeWidget_C_Destruct_Params
{
};

// Function RenovationModeWidget.RenovationModeWidget_C.scrolledUp
struct URenovationModeWidget_C_scrolledUp_Params
{
};

// Function RenovationModeWidget.RenovationModeWidget_C.scrolledDown
struct URenovationModeWidget_C_scrolledDown_Params
{
};

// Function RenovationModeWidget.RenovationModeWidget_C.ExecuteUbergraph_RenovationModeWidget
struct URenovationModeWidget_C_ExecuteUbergraph_RenovationModeWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
