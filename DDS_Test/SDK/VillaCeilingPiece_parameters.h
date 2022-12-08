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

// Function VillaCeilingPiece.VillaCeilingPiece_C.CheckCanApplySurface
struct AVillaCeilingPiece_C_CheckCanApplySurface_Params
{
	struct FName                                       NewSurface;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Comp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanApply;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FailReason;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function VillaCeilingPiece.VillaCeilingPiece_C.UpdateSurfaces
struct AVillaCeilingPiece_C_UpdateSurfaces_Params
{
};

// Function VillaCeilingPiece.VillaCeilingPiece_C.GetSurfaceConfig
struct AVillaCeilingPiece_C_GetSurfaceConfig_Params
{
	struct FString                                     ConfigString;                                             // (Parm, OutParm, ZeroConstructor)
	struct FGuid                                       PieceGuid;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VillaCeilingPiece.VillaCeilingPiece_C.ChangeSurface
struct AVillaCeilingPiece_C_ChangeSurface_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VillaCeilingPiece.VillaCeilingPiece_C.TraceHit
struct AVillaCeilingPiece_C_TraceHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       CurHighlightedMaterial;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     HitElementID;                                             // (Parm, OutParm, ZeroConstructor)
	struct FName                                       HitElementCurSurface;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVillaSurfaceFinish                         SurfaceData;                                              // (Parm, OutParm)
	class UDataTable*                                  SurfaceDataTable;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VillaCeilingPiece.VillaCeilingPiece_C.UserConstructionScript
struct AVillaCeilingPiece_C_UserConstructionScript_Params
{
};

// Function VillaCeilingPiece.VillaCeilingPiece_C.ReceiveBeginPlay
struct AVillaCeilingPiece_C_ReceiveBeginPlay_Params
{
};

// Function VillaCeilingPiece.VillaCeilingPiece_C.SetActivity
struct AVillaCeilingPiece_C_SetActivity_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FoundationOnly;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaCeilingPiece.VillaCeilingPiece_C.ApplySurface
struct AVillaCeilingPiece_C_ApplySurface_Params
{
	struct FString                                     HitElementID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FName                                       NewSurface;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VillaCeilingPiece.VillaCeilingPiece_C.UpdateSavedSetting
struct AVillaCeilingPiece_C_UpdateSavedSetting_Params
{
	class AVillaPropertyInstance_C*                    PropertyInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaCeilingPiece.VillaCeilingPiece_C.SubclassSetActivity
struct AVillaCeilingPiece_C_SubclassSetActivity_Params
{
	bool                                               active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaCeilingPiece.VillaCeilingPiece_C.ExecuteUbergraph_VillaCeilingPiece
struct AVillaCeilingPiece_C_ExecuteUbergraph_VillaCeilingPiece_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
