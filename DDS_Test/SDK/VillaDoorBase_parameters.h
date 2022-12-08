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

// Function VillaDoorBase.VillaDoorBase_C.playDoorSound
struct AVillaDoorBase_C_playDoorSound_Params
{
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaDoorBase.VillaDoorBase_C.UpdateActionName
struct AVillaDoorBase_C_UpdateActionName_Params
{
};

// Function VillaDoorBase.VillaDoorBase_C.UserConstructionScript
struct AVillaDoorBase_C_UserConstructionScript_Params
{
};

// Function VillaDoorBase.VillaDoorBase_C.Timeline_0__FinishedFunc
struct AVillaDoorBase_C_Timeline_0__FinishedFunc_Params
{
};

// Function VillaDoorBase.VillaDoorBase_C.Timeline_0__UpdateFunc
struct AVillaDoorBase_C_Timeline_0__UpdateFunc_Params
{
};

// Function VillaDoorBase.VillaDoorBase_C.openDoor
struct AVillaDoorBase_C_openDoor_Params
{
};

// Function VillaDoorBase.VillaDoorBase_C.closeDoor
struct AVillaDoorBase_C_closeDoor_Params
{
};

// Function VillaDoorBase.VillaDoorBase_C.closeSound
struct AVillaDoorBase_C_closeSound_Params
{
};

// Function VillaDoorBase.VillaDoorBase_C.TryAutoClose
struct AVillaDoorBase_C_TryAutoClose_Params
{
};

// Function VillaDoorBase.VillaDoorBase_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AVillaDoorBase_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VillaDoorBase.VillaDoorBase_C.InteractionActivate
struct AVillaDoorBase_C_InteractionActivate_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaDoorBase.VillaDoorBase_C.SetDoorMaterial
struct AVillaDoorBase_C_SetDoorMaterial_Params
{
	class UMaterialInstance*                           Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VillaDoorBase.VillaDoorBase_C.ExecuteUbergraph_VillaDoorBase
struct AVillaDoorBase_C_ExecuteUbergraph_VillaDoorBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
