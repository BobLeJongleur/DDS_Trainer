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

// Function VillaRenovationInterface.VillaRenovationInterface_C.CheckCanApplySurface
struct UVillaRenovationInterface_C_CheckCanApplySurface_Params
{
	struct FName                                       NewSurface;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Comp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanApply;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FailReason;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function VillaRenovationInterface.VillaRenovationInterface_C.CurFocusComponent
struct UVillaRenovationInterface_C_CurFocusComponent_Params
{
	class UPrimitiveComponent*                         Comp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstance*                           PreviewMat;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaRenovationInterface.VillaRenovationInterface_C.UpdateSavedSetting
struct UVillaRenovationInterface_C_UpdateSavedSetting_Params
{
	class AVillaPropertyInstance_C*                    PropertyInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaRenovationInterface.VillaRenovationInterface_C.LostFocus
struct UVillaRenovationInterface_C_LostFocus_Params
{
};

// Function VillaRenovationInterface.VillaRenovationInterface_C.ApplySurface
struct UVillaRenovationInterface_C_ApplySurface_Params
{
	struct FString                                     HitElementID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FName                                       NewSurface;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VillaRenovationInterface.VillaRenovationInterface_C.TraceHit
struct UVillaRenovationInterface_C_TraceHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       CurHighlightedMaterial;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     HitElementID;                                             // (Parm, OutParm, ZeroConstructor)
	struct FName                                       HitElementCurSurface;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVillaSurfaceFinish                         SurfaceData;                                              // (Parm, OutParm)
	class UDataTable*                                  SurfaceDataTable;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
