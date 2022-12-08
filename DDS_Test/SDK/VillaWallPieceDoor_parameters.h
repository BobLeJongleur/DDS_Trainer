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

// Function VillaWallPieceDoor.VillaWallPieceDoor_C.CheckCanApplySurface
struct AVillaWallPieceDoor_C_CheckCanApplySurface_Params
{
	struct FName                                       NewSurface;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Comp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanApply;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FailReason;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function VillaWallPieceDoor.VillaWallPieceDoor_C.UpdateDoorMaterial
struct AVillaWallPieceDoor_C_UpdateDoorMaterial_Params
{
	struct FName                                       DoorMatID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaWallPieceDoor.VillaWallPieceDoor_C.CanPaintComponent
struct AVillaWallPieceDoor_C_CanPaintComponent_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanPaint;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FailReason;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function VillaWallPieceDoor.VillaWallPieceDoor_C.GetSurfaceConfig
struct AVillaWallPieceDoor_C_GetSurfaceConfig_Params
{
	struct FString                                     ConfigString;                                             // (Parm, OutParm, ZeroConstructor)
	struct FGuid                                       PieceGuid;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VillaWallPieceDoor.VillaWallPieceDoor_C.TraceHit
struct AVillaWallPieceDoor_C_TraceHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       CurHighlightedMaterial;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     HitElementID;                                             // (Parm, OutParm, ZeroConstructor)
	struct FName                                       HitElementCurSurface;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVillaSurfaceFinish                         SurfaceData;                                              // (Parm, OutParm)
	class UDataTable*                                  SurfaceDataTable;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VillaWallPieceDoor.VillaWallPieceDoor_C.UserConstructionScript
struct AVillaWallPieceDoor_C_UserConstructionScript_Params
{
};

// Function VillaWallPieceDoor.VillaWallPieceDoor_C.UpdateSavedSetting
struct AVillaWallPieceDoor_C_UpdateSavedSetting_Params
{
	class AVillaPropertyInstance_C*                    PropertyInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaWallPieceDoor.VillaWallPieceDoor_C.SubclassSetActivity
struct AVillaWallPieceDoor_C_SubclassSetActivity_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaWallPieceDoor.VillaWallPieceDoor_C.LostFocus
struct AVillaWallPieceDoor_C_LostFocus_Params
{
};

// Function VillaWallPieceDoor.VillaWallPieceDoor_C.ApplySurface
struct AVillaWallPieceDoor_C_ApplySurface_Params
{
	struct FString                                     HitElementID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FName                                       NewSurface;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VillaWallPieceDoor.VillaWallPieceDoor_C.ExecuteUbergraph_VillaWallPieceDoor
struct AVillaWallPieceDoor_C_ExecuteUbergraph_VillaWallPieceDoor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
