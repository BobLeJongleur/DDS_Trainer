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

// Function VillaPieceMaster.VillaPieceMaster_C.CheckCanApplySurface
struct AVillaPieceMaster_C_CheckCanApplySurface_Params
{
	struct FName                                       NewSurface;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Comp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanApply;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FailReason;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function VillaPieceMaster.VillaPieceMaster_C.TraceHit
struct AVillaPieceMaster_C_TraceHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       CurHighlightedMaterial;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     HitElementID;                                             // (Parm, OutParm, ZeroConstructor)
	struct FName                                       HitElementCurSurface;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVillaSurfaceFinish                         SurfaceData;                                              // (Parm, OutParm)
	class UDataTable*                                  SurfaceDataTable;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VillaPieceMaster.VillaPieceMaster_C.ComponentPainted
struct AVillaPieceMaster_C_ComponentPainted_Params
{
	class UPrimitiveComponent*                         Comp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Painted;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VillaPieceMaster.VillaPieceMaster_C.GetSurfaceConfig
struct AVillaPieceMaster_C_GetSurfaceConfig_Params
{
	struct FString                                     ConfigString;                                             // (Parm, OutParm, ZeroConstructor)
	struct FGuid                                       PieceGuid;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VillaPieceMaster.VillaPieceMaster_C.UserConstructionScript
struct AVillaPieceMaster_C_UserConstructionScript_Params
{
};

// Function VillaPieceMaster.VillaPieceMaster_C.LostFocus
struct AVillaPieceMaster_C_LostFocus_Params
{
};

// Function VillaPieceMaster.VillaPieceMaster_C.CurFocusComponent
struct AVillaPieceMaster_C_CurFocusComponent_Params
{
	class UPrimitiveComponent*                         Comp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstance*                           PreviewMat;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaPieceMaster.VillaPieceMaster_C.UpdateSavedSetting
struct AVillaPieceMaster_C_UpdateSavedSetting_Params
{
	class AVillaPropertyInstance_C*                    PropertyInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaPieceMaster.VillaPieceMaster_C.ApplySurface
struct AVillaPieceMaster_C_ApplySurface_Params
{
	struct FString                                     HitElementID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FName                                       NewSurface;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VillaPieceMaster.VillaPieceMaster_C.ExecuteUbergraph_VillaPieceMaster
struct AVillaPieceMaster_C_ExecuteUbergraph_VillaPieceMaster_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
