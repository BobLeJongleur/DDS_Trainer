#pragma once

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SewageExitPeekPawn.SewageExitPeekPawn_C
// 0x0062 (0x03EA - 0x0388)
class ASewageExitPeekPawn_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        MSH_Cover_11;                                             // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Rotator;                                                  // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        tunnelExitTopWell;                                        // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AplayerCharacterBP_C*                        playerRef;                                                // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AsewageExit_C*                               ExitLadderRef;                                            // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Ready;                                                    // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	float                                              tempRot;                                                  // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USewagePeekHUD_C*                            SewageHUD;                                                // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               SpaceHeld;                                                // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	float                                              ExitTime;                                                 // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackBlocker;                                              // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockSpacebar;                                            // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SewageExitPeekPawn.SewageExitPeekPawn_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_Escape_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_F10_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1(float AxisValue);
	void setup(class AsewageExit_C* ExitLadderRef, class AplayerCharacterBP_C* playerRef);
	void ReceivePossessed(class AController* NewController);
	void ReceiveUnpossessed(class AController* OldController);
	void ExecuteUbergraph_SewageExitPeekPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
