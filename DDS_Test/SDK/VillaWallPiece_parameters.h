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

// Function VillaWallPiece.VillaWallPiece_C.CanPaintComponent
struct AVillaWallPiece_C_CanPaintComponent_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanPaint;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FailReason;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function VillaWallPiece.VillaWallPiece_C.CheckCanApplySurface
struct AVillaWallPiece_C_CheckCanApplySurface_Params
{
	struct FName                                       NewSurface;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Comp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanApply;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FailReason;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function VillaWallPiece.VillaWallPiece_C.ComponentPainted
struct AVillaWallPiece_C_ComponentPainted_Params
{
	class UPrimitiveComponent*                         Comp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Painted;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VillaWallPiece.VillaWallPiece_C.UpdateSurfaces
struct AVillaWallPiece_C_UpdateSurfaces_Params
{
};

// Function VillaWallPiece.VillaWallPiece_C.GetSurfaceConfig
struct AVillaWallPiece_C_GetSurfaceConfig_Params
{
	struct FString                                     ConfigString;                                             // (Parm, OutParm, ZeroConstructor)
	struct FGuid                                       PieceGuid;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VillaWallPiece.VillaWallPiece_C.ChangeSurfaceMaterial
struct AVillaWallPiece_C_ChangeSurfaceMaterial_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewMaterial;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaWallPiece.VillaWallPiece_C.UserConstructionScript
struct AVillaWallPiece_C_UserConstructionScript_Params
{
};

// Function VillaWallPiece.VillaWallPiece_C.ReceiveBeginPlay
struct AVillaWallPiece_C_ReceiveBeginPlay_Params
{
};

// Function VillaWallPiece.VillaWallPiece_C.SetActivity
struct AVillaWallPiece_C_SetActivity_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaWallPiece.VillaWallPiece_C.ApplySurface
struct AVillaWallPiece_C_ApplySurface_Params
{
	struct FString                                     HitElementID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FName                                       NewSurface;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VillaWallPiece.VillaWallPiece_C.UpdateSavedSetting
struct AVillaWallPiece_C_UpdateSavedSetting_Params
{
	class AVillaPropertyInstance_C*                    PropertyInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaWallPiece.VillaWallPiece_C.ParentApplySurface
struct AVillaWallPiece_C_ParentApplySurface_Params
{
	struct FName                                       NewSurface;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VillaWallPiece.VillaWallPiece_C.SubclassSetActivity
struct AVillaWallPiece_C_SubclassSetActivity_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaWallPiece.VillaWallPiece_C.ToggleWindowMeshes
struct AVillaWallPiece_C_ToggleWindowMeshes_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaWallPiece.VillaWallPiece_C.ExecuteUbergraph_VillaWallPiece
struct AVillaWallPiece_C_ExecuteUbergraph_VillaWallPiece_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
