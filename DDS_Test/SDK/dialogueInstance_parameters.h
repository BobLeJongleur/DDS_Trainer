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

// Function dialogueInstance.dialogueInstance_C.GetDialogueData
struct AdialogueInstance_C_GetDialogueData_Params
{
};

// Function dialogueInstance.dialogueInstance_C.UserConstructionScript
struct AdialogueInstance_C_UserConstructionScript_Params
{
};

// Function dialogueInstance.dialogueInstance_C.ReceiveBeginPlay
struct AdialogueInstance_C_ReceiveBeginPlay_Params
{
};

// Function dialogueInstance.dialogueInstance_C.eventActivateDialogue
struct AdialogueInstance_C_eventActivateDialogue_Params
{
	class AbaseNPC_C*                                  talkerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dialogueInstance.dialogueInstance_C.playDialogueAudio
struct AdialogueInstance_C_playDialogueAudio_Params
{
	class USoundWave*                                  AudioFile;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dialogueInstance.dialogueInstance_C.openTrading
struct AdialogueInstance_C_openTrading_Params
{
	bool                                               regularShop;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dialogueInstance.dialogueInstance_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
struct AdialogueInstance_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
{
	class URamaSaveComponent*                          RamaSaveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LevelPackageName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function dialogueInstance.dialogueInstance_C.DialogueLoaded
struct AdialogueInstance_C_DialogueLoaded_Params
{
};

// Function dialogueInstance.dialogueInstance_C.DialogueActivated
struct AdialogueInstance_C_DialogueActivated_Params
{
};

// Function dialogueInstance.dialogueInstance_C.SubclassLoaded
struct AdialogueInstance_C_SubclassLoaded_Params
{
};

// Function dialogueInstance.dialogueInstance_C.ExecuteUbergraph_dialogueInstance
struct AdialogueInstance_C_ExecuteUbergraph_dialogueInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
