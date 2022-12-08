#pragma once

#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function NewLightBase.NewLightBase_C.HasPower
struct ANewLightBase_C_HasPower_Params
{
	bool                                               Power;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NewLightBase.NewLightBase_C.UserConstructionScript
struct ANewLightBase_C_UserConstructionScript_Params
{
};

// Function NewLightBase.NewLightBase_C.LongRadiusChanged
struct ANewLightBase_C_LongRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewLightBase.NewLightBase_C.ReceiveBeginPlay
struct ANewLightBase_C_ReceiveBeginPlay_Params
{
};

// Function NewLightBase.NewLightBase_C.LightStateChanged
struct ANewLightBase_C_LightStateChanged_Params
{
	bool                                               LightVisible;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CastShadows;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewLightBase.NewLightBase_C.ShortRadiusChanged
struct ANewLightBase_C_ShortRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewLightBase.NewLightBase_C.UpdateDaytimeCon
struct ANewLightBase_C_UpdateDaytimeCon_Params
{
	class AdayTimeControler_C*                         dayTimeCon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewLightBase.NewLightBase_C.Switch
struct ANewLightBase_C_Switch_Params
{
	bool                                               TurnedOn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewLightBase.NewLightBase_C.RefreshLantern
struct ANewLightBase_C_RefreshLantern_Params
{
};

// Function NewLightBase.NewLightBase_C.PowerChange
struct ANewLightBase_C_PowerChange_Params
{
};

// Function NewLightBase.NewLightBase_C.updatePlayerDistance
struct ANewLightBase_C_updatePlayerDistance_Params
{
};

// Function NewLightBase.NewLightBase_C.openOutLightRange
struct ANewLightBase_C_openOutLightRange_Params
{
};

// Function NewLightBase.NewLightBase_C.ExecuteUbergraph_NewLightBase
struct ANewLightBase_C_ExecuteUbergraph_NewLightBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
