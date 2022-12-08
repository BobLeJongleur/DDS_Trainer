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

// Function VillaWallPieceWindow.VillaWallPieceWindow_C.CanPaintComponent
struct AVillaWallPieceWindow_C_CanPaintComponent_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanPaint;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FailReason;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function VillaWallPieceWindow.VillaWallPieceWindow_C.ShowWindows
struct AVillaWallPieceWindow_C_ShowWindows_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaWallPieceWindow.VillaWallPieceWindow_C.UserConstructionScript
struct AVillaWallPieceWindow_C_UserConstructionScript_Params
{
};

// Function VillaWallPieceWindow.VillaWallPieceWindow_C.SubclassSetActivity
struct AVillaWallPieceWindow_C_SubclassSetActivity_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaWallPieceWindow.VillaWallPieceWindow_C.ExecuteUbergraph_VillaWallPieceWindow
struct AVillaWallPieceWindow_C_ExecuteUbergraph_VillaWallPieceWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
