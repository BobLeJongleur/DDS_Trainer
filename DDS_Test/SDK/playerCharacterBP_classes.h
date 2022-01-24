#pragma once

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass playerCharacterBP.playerCharacterBP_C
// 0x0E5E (0x159E - 0x0740)
class AplayerCharacterBP_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             jumpCue;                                                  // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       halucinogenicPostProcess;                                 // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       speedPostProcess;                                         // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               headBobbing;                                              // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             BackpackThrow;                                            // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             footstepCue;                                              // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       confusionPostProcess;                                     // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      fpsArms;                                                  // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             throwpoint;                                               // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             tiredBreath;                                              // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             tempChaseMusic;                                           // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              headBobbTimeline_headRot_0B3856664923141D33A5748806EFB4A2;// 0x07C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              headBobbTimeline_headHorizontal_0B3856664923141D33A5748806EFB4A2;// 0x07C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              headBobbTimeline_headVertical_0B3856664923141D33A5748806EFB4A2;// 0x07C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    headBobbTimeline__Direction_0B3856664923141D33A5748806EFB4A2;// 0x07CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          headBobbTimeline;                                         // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_camPosition_8AF157FC468A6C10DB76DB9E5A5C3C8E;  // 0x07D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_tasedCamAngle_8AF157FC468A6C10DB76DB9E5A5C3C8E;// 0x07DC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_8AF157FC468A6C10DB76DB9E5A5C3C8E;   // 0x07E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x07E1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_7E1CEE2A42645FECC9C5EB9DFDAB29AE;   // 0x07F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_7E1CEE2A42645FECC9C5EB9DFDAB29AE;   // 0x07F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              taserCamera_camPosition_1E3703BE4EA579145BB8AFAC90459750; // 0x0800(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              taserCamera_tasedCamAngle_1E3703BE4EA579145BB8AFAC90459750;// 0x0804(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    taserCamera__Direction_1E3703BE4EA579145BB8AFAC90459750;  // 0x0808(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0809(0x0007) MISSED OFFSET
	class UTimelineComponent*                          taserCamera;                                              // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              camFovDialogue_NewTrack_0_0700855641B2F73B563760B1CCB2AEDF;// 0x0818(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    camFovDialogue__Direction_0700855641B2F73B563760B1CCB2AEDF;// 0x081C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x081D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          camFovDialogue;                                           // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CrouchAnim_capsuleHeight_AAFA20F046516DB596355B8B50B2A4C4;// 0x0828(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CrouchAnim__Direction_AAFA20F046516DB596355B8B50B2A4C4;   // 0x082C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x082D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CrouchAnim;                                               // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              backpackMoveMultiplier;                                   // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              movementSpeedMultiplier;                                  // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              moveSpeedSpecialMultiplier;                               // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mouseSpeed;                                               // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCrouching;                                              // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               sneakMode;                                                // 0x0849(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x084A(0x0006) MISSED OFFSET
	class UplayerHUD_C*                                HUD;                                                      // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AinteractiveBaseObject_C*                    hoveredObject;                                            // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AinteractiveBaseObject_C*                    hoveredObjectMem;                                         // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AinteractiveObstacle_C*                      hoveredObstacle;                                          // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              staminaMax;                                               // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              staminaLevel;                                             // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              staminaLow;                                               // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              obstacleStaminaDrain;                                     // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              staminaDrainPS;                                           // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              staminaRegainPS;                                          // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              leanRoll;                                                 // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              leanRollMax;                                              // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              leanVertical;                                             // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              camLeanMax;                                               // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeanSideways;                                             // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              staminaRegainMultiplier;                                  // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               inventoryFirstTap;                                        // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               phoneUp;                                                  // 0x08A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               inventoryOpen;                                            // 0x08A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x08A3(0x0005) MISSED OFFSET
	class UinventoryScreen_C*                          InventoryWidget;                                          // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               disableWorldInteraction;                                  // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x08B1(0x0007) MISSED OFFSET
	class UpauseMenu_C*                                pauseMenu;                                                // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AdayTimeControler_C*                         dayTimeControler;                                         // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UsleepWaitWidget_C*                          sleepWaitWidget;                                          // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AsleepingBedBase_C*                          curBed;                                                   // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               waiting;                                                  // 0x08D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x08D9(0x0007) MISSED OFFSET
	TArray<struct FinventoryItemStruct>                pocketItems;                                              // 0x08E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       pocketItemVendor;                                         // 0x08F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        pocketItemQuantity;                                       // 0x0900(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        pocketItemVendorPrice;                                    // 0x0910(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              pocketMaxSize;                                            // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              pocketMaxWeight;                                          // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                pocketCount;                                              // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hasBackpack;                                              // 0x092C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x092D(0x0003) MISSED OFFSET
	struct FinventoryItemStruct                        Backpack;                                                 // 0x0930(0x0108) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FinventoryItemStruct>                backpackItems;                                            // 0x0A38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        backpackItemQuantity;                                     // 0x0A48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       backpackItemVendor;                                       // 0x0A58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        backpackItemVendorPrice;                                  // 0x0A68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class AitemInventoryHolder_C*, int>           backpackItemContents;                                     // 0x0A78(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              curBackpackSize;                                          // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              curBackpackWeight;                                        // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              backpackMaxSize;                                          // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              backpackMaxWeight;                                        // 0x0AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AcontainerBase_C*                            curContainer;                                             // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AcontactsManager_C*                          contactsManager;                                          // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AtelephoneBP_C*                              phoneRef;                                                 // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AquestManager_C*                             questManagerRef;                                          // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               callIncoming;                                             // 0x0AF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0AF9(0x0007) MISSED OFFSET
	TArray<int>                                        inventoryKeys;                                            // 0x0B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                curHighlightedOption;                                     // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               actionOptionsOpen;                                        // 0x0B14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0B15(0x0003) MISSED OFFSET
	TArray<struct FString>                             ActionList;                                               // 0x0B18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isLockpicking;                                            // 0x0B28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0B29(0x0007) MISSED OFFSET
	class UlockpickWidget_C*                           lockpickWidget;                                           // 0x0B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              doorBreachDamage;                                         // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               saveScreenOpen;                                           // 0x0B3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0B3D(0x0003) MISSED OFFSET
	class UsaveLoadWidget_C*                           saveLoadWidget;                                           // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               computerOpen;                                             // 0x0B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0B49(0x0003) MISSED OFFSET
	float                                              lineCheckDistance;                                        // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              suspicionMultiplier;                                      // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              baseMaxWalkSpeed;                                         // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              visibilityMultiplier;                                     // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lightVisMultiplier;                                       // 0x0B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hasIllegalItems;                                          // 0x0B60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0B61(0x0007) MISSED OFFSET
	TArray<class AActor*>                              lightsAffecting;                                          // 0x0B68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<float>                                      lightAffectMultipliers;                                   // 0x0B78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              hideAreaMultiplier;                                       // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               inWaitArea;                                               // 0x0B8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0B8D(0x0003) MISSED OFFSET
	class AdialogueInstance_C*                         curDialogueInstance;                                      // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               inDialogue;                                               // 0x0B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0B99(0x0007) MISSED OFFSET
	class UdialogueWidget_C*                           dialogueWidget;                                           // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AbaseNPC_C*                                  curFocusNPC;                                              // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    focusLookRotation;                                        // 0x0BB0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               focusCamera;                                              // 0x0BBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0BBD(0x0003) MISSED OFFSET
	class AbaseNPC_C*                                  curSeller;                                                // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isTrading;                                                // 0x0BC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               camLeanClampRight;                                        // 0x0BC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               camLeanClampLeft;                                         // 0x0BCA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x5];                                       // 0x0BCB(0x0005) MISSED OFFSET
	struct FinventoryItemStruct                        moneyBaseData;                                            // 0x0BD0(0x0108) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               handlingATM;                                              // 0x0CD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               waitingForWithdraw;                                       // 0x0CD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x6];                                       // 0x0CDA(0x0006) MISSED OFFSET
	class AatmMachine_C*                               curATM;                                                   // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                newMessages;                                              // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                newCalls;                                                 // 0x0CEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                newNotifications;                                         // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hasDrugs;                                                 // 0x0CF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0CF5(0x0003) MISSED OFFSET
	float                                              runVelocityValue;                                         // 0x0CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                chasingPolicemen;                                         // 0x0CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isFugitive;                                               // 0x0D00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x0D01(0x0003) MISSED OFFSET
	float                                              fugitiveTimeout;                                          // 0x0D04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fugitiveCounter;                                          // 0x0D08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isControled;                                              // 0x0D0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               beenCaught;                                               // 0x0D0D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x2];                                       // 0x0D0E(0x0002) MISSED OFFSET
	class UloadingScreen_C*                            caughtLoadingScreen;                                      // 0x0D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               isSearched;                                               // 0x0D18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               jumpingObstacle;                                          // 0x0D19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               logedInBank;                                              // 0x0D1A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               blockingCar;                                              // 0x0D1B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x0D1C(0x0004) MISSED OFFSET
	TArray<struct FinventoryItemStruct>                illegalFoundPockets;                                      // 0x0D20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FinventoryItemStruct>                illegalFoundBackpack;                                     // 0x0D30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundCue*                                   chaseMusicCue;                                            // 0x0D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              closestPatrolDistance;                                    // 0x0D48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              patrolDistanceTemp;                                       // 0x0D4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              patrolDistanceStartStress;                                // 0x0D50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isChased;                                                 // 0x0D54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x0D55(0x0003) MISSED OFFSET
	class AstreetTeleport_C*                           streetTeleport;                                           // 0x0D58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class APolicemanBaseClass_C*>               chasingPolicemenRef;                                      // 0x0D60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               atWorkStation;                                            // 0x0D70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x0D71(0x0007) MISSED OFFSET
	class AdrugWorkStation_C*                          curWorkStation;                                           // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ArentAppartmentArea_C*                       curAppartment;                                            // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       keyOverride;                                              // 0x0D88(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AinteractiveBaseObject_C*                    dragObject;                                               // 0x0DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               popupUp;                                                  // 0x0DA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MapOpen;                                                  // 0x0DA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x6];                                       // 0x0DAA(0x0006) MISSED OFFSET
	class UworldMapWidget_C*                           mapWidget;                                                // 0x0DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               nightTimeAlertOn;                                         // 0x0DB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x0DB9(0x0003) MISSED OFFSET
	int                                                allEarnedMoney;                                           // 0x0DBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               inAppartmentMode;                                         // 0x0DC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x0DC1(0x0003) MISSED OFFSET
	struct FVector                                     memHitLocation;                                           // 0x0DC4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicalMaterial*                           hitPhysMat;                                               // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              leanAxisVal;                                              // 0x0DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              baseLineCheckDistance;                                    // 0x0DDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              appartmentModeLineCheckDistance;                          // 0x0DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x0DE4(0x0004) MISSED OFFSET
	class AinteractiveBaseObject_C*                    curAppartmentObjectGizmo;                                 // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UappartmentModeWidget_C*                     appModeWidget;                                            // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     memHitNormal;                                             // 0x0DF8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x0E04(0x0004) MISSED OFFSET
	class AinteractiveBaseObject_C*                    appModeHovered;                                           // 0x0E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UpoliceHoursCounterWidget_C*                 policeHoursCounter;                                       // 0x0E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              musicStressLowClamp;                                      // 0x0E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              musicStressLowClampMinimum;                               // 0x0E1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              musicStressLowClampInitial;                               // 0x0E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fadeParameter;                                            // 0x0E24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               musicChased;                                              // 0x0E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x0E29(0x0003) MISSED OFFSET
	float                                              StressFade;                                               // 0x0E2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               workStationAvailable;                                     // 0x0E30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               appartmentModeAvailable;                                  // 0x0E31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               sleepingWaitingAvailable;                                 // 0x0E32(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x5];                                       // 0x0E33(0x0005) MISSED OFFSET
	TArray<class USoundCue*>                           chaseMusicVersions;                                       // 0x0E38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundWave*>                          chaseMusicIntro;                                          // 0x0E48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      chaseMusicTempo;                                          // 0x0E58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                chosenSongID;                                             // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x0E6C(0x0004) MISSED OFFSET
	TArray<int>                                        chaseMusicIntroLength;                                    // 0x0E70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              musicMinChaseLength;                                      // 0x0E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              musicMinChaseTimer;                                       // 0x0E84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               inventoryFirstOpening;                                    // 0x0E88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x7];                                       // 0x0E89(0x0007) MISSED OFFSET
	class AAdaptiveMusic_BP_C*                         chaseMusicManager;                                        // 0x0E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               equipmentShopOpen;                                        // 0x0E98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bankIntroduced;                                           // 0x0E99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               sleepDialogue;                                            // 0x0E9A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x5];                                       // 0x0E9B(0x0005) MISSED OFFSET
	struct FPostProcessSettings                        defPostProcess;                                           // 0x0EA0(0x04E0) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              mouseAxisPitch;                                           // 0x1380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mouseAxisYaw;                                             // 0x1384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               inWater;                                                  // 0x1388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               staminaTired;                                             // 0x1389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               handsOccupied;                                            // 0x138A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x5];                                       // 0x138B(0x0005) MISSED OFFSET
	class AbackpackBase_C*                             handsBackpackRef;                                         // 0x1390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       handsOccupiedMessage;                                     // 0x1398(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AsprayPlacementGizmo_C*                      sprayGizmo;                                               // 0x13B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               backpackFromVendor;                                       // 0x13B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x13B9(0x0003) MISSED OFFSET
	int                                                backpackSlotVendorPrice;                                  // 0x13BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hasSprayPaint;                                            // 0x13C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               disableWalking;                                           // 0x13C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x2];                                       // 0x13C2(0x0002) MISSED OFFSET
	int                                                basePocketCount;                                          // 0x13C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              skillStaminaMultiplier;                                   // 0x13C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              skillRunSpeedMultiplier;                                  // 0x13CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                skillLockpickLevel;                                       // 0x13D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              skillStealthMultiplier;                                   // 0x13D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              skillIllusionistChance;                                   // 0x13D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              skillSalesPriceMultiplier;                                // 0x13DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              skillSalesOrderSpeedMultiplier;                           // 0x13E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              staminaMaxBase;                                           // 0x13E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x8];                                       // 0x13E8(0x0008) MISSED OFFSET
	struct FTransform                                  teleportLocation;                                         // 0x13F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               drainingStamina;                                          // 0x1420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               draggedObject;                                            // 0x1421(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0x2];                                       // 0x1422(0x0002) MISSED OFFSET
	float                                              lastPoliceCheckCountdown;                                 // 0x1424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               sprayingAvailable;                                        // 0x1428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x7];                                       // 0x1429(0x0007) MISSED OFFSET
	TArray<struct FString>                             quickUseSlots;                                            // 0x1430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        quickUseIndex;                                            // 0x1440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FinventoryItemStruct>                quickUseData;                                             // 0x1450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UpoliceControlingWidget_C*                   controlAlarmWidget;                                       // 0x1460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               initialised;                                              // 0x1468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               disableDemoFunctions;                                     // 0x1469(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData44[0x6];                                       // 0x146A(0x0006) MISSED OFFSET
	TArray<struct FdrugData>                           drugsUsedData;                                            // 0x1470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      drugsUsedTimeout;                                         // 0x1480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        drugsUsedQuantity;                                        // 0x1490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              drugsUsedAvSpeedMultiplier;                               // 0x14A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              drugsUsedAvStaminaMultiplier;                             // 0x14A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              drugsUsedAvTimeMultiplier;                                // 0x14A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              drugsUsedAvFovMultiplier;                                 // 0x14AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              drugsUsedAvConfMultiplier;                                // 0x14B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               blockPause;                                               // 0x14B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x3];                                       // 0x14B5(0x0003) MISSED OFFSET
	float                                              duaSpeedTarget;                                           // 0x14B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              duaStaminaTarget;                                         // 0x14BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              duaTimeTarget;                                            // 0x14C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              duaFovTarget;                                             // 0x14C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              duaConfTarget;                                            // 0x14C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseFOV;                                                  // 0x14CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UpassOutScreen_C*                            passOutScreen;                                            // 0x14D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              drugUseTimeout;                                           // 0x14D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ballenaProtection;                                        // 0x14DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x3];                                       // 0x14DD(0x0003) MISSED OFFSET
	class AinteractiveBaseObject_C*                    curComputerRef;                                           // 0x14E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              mouseSensitivity;                                         // 0x14E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InvertMouse;                                              // 0x14EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0x14ED(0x0003) MISSED OFFSET
	float                                              DefaultFOV;                                               // 0x14F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData48[0x4];                                       // 0x14F4(0x0004) MISSED OFFSET
	struct FString                                     mgValid;                                                  // 0x14F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               hasOutdoorSeeds;                                          // 0x1508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hasIndoorSeeds;                                           // 0x1509(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData49[0x6];                                       // 0x150A(0x0006) MISSED OFFSET
	class AweedPlantBP_C*                              weedGizmo;                                                // 0x1510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UweedSeedSelectWidget_C*                     weedSeedWidget;                                           // 0x1518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               canJumpObstacles;                                         // 0x1520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData50[0x3];                                       // 0x1521(0x0003) MISSED OFFSET
	float                                              camBobbMultiplier;                                        // 0x1524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              bobbZ;                                                    // 0x1528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              bobbY;                                                    // 0x152C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              bobbRoll;                                                 // 0x1530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               flashlightBlocker;                                        // 0x1534(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               tabHeld;                                                  // 0x1535(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData51[0x2];                                       // 0x1536(0x0002) MISSED OFFSET
	TMap<struct FString, int>                          drugStringMap;                                            // 0x1538(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               blockRefreshQuickUse;                                     // 0x1588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               blockQuickUse;                                            // 0x1589(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData52[0x2];                                       // 0x158A(0x0002) MISSED OFFSET
	float                                              drugsUsedBoostMultiplier;                                 // 0x158C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              drugsUsedHalucinationMultiplier;                          // 0x1590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpgradePriceTemp;                                         // 0x1594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              camFocusFovMultiplier;                                    // 0x1598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               underground;                                              // 0x159C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastWallPassageType;                                      // 0x159D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass playerCharacterBP.playerCharacterBP_C");
		return ptr;
	}


	void convertUsedDrugData(const struct FinventoryItemStruct& InvData, struct FinventoryItemStruct* OutData, bool* Empty);
	void drugStringToIndex(const struct FString& inString, int* Index, bool* Valid);
	void CastFailed();
	void CheckHoverobjectClass(int InnerClass, int DeepClass, bool* Match);
	void restoreGuardLocation();
	void checkBobbyPins(bool RemoveOne, bool* HasBobbyPins, int* bobbyPinCount);
	void convertBackpackData(const struct FinventoryItemStruct& BackpackIn, struct FinventoryItemStruct* BackpackOut);
	void checkSeedsInventory();
	void updateWeedPlacement();
	struct FText geyKeyNam(float Scale, const struct FName& InActionName);
	void updateBackpackQuan();
	void adaptControls();
	void adaptDifficulty();
	void confiscateMoney();
	struct FTransform getPoliceStationTeleportLocation();
	void usedDrugUpdateEffects();
	void usedDrugCountdown(float Delta);
	void useDrugDose(const struct FdrugData& drugData);
	void quickUseItem(int SlotIndex);
	void staminaDrainCooldown();
	void updateBackpackMovementChange();
	void updateSkillAbilities();
	void refreshBackpackData();
	void returnItemSizing(const struct FinventoryItemStruct& Data, float* Size, float* Weight);
	void updateSprayGizmo();
	void staminaBreatheFade(float Delta);
	void playFootStepSound();
	void chooseRandomSongID(int* ChosenID);
	void resetCamLimits();
	void getArmsAnimBP(class UfpsArmsAnimBP_C** AnimBP);
	void calcChasersDistances();
	void endFugitive();
	void markAsFugitive();
	void fugitiveCountdown(float Delta);
	void updateNotifyIcons();
	void checkInventorySizing(const struct FinventoryItemStruct& Data, int Quantity, bool* CanFit);
	void checkAllPocketsSizing(const struct FinventoryItemStruct& Data, int Quantity, bool* AllFits, int* Rest);
	void compareInventoryData(const struct FinventoryItemStruct& Compare01, const struct FinventoryItemStruct& Compare02, bool* TheSame);
	void addCryptocurrency(int Amount);
	void countAllMoney(int* allMoneyCount);
	void chargeMoney(int Amount, bool NoPopup);
	void addMoney(int Amount, bool* Success);
	void cameraFocus(float Delta);
	void checkForIllegals();
	void calcVisibilityMultiplier();
	void calcSuspicionMultiplier();
	void calcMouseYawAction(class APlayerController* PC, float AxisValue, bool Interaction);
	void calcMousePitchAction(class APlayerController* PC, float AxisValue, bool Interaction);
	void displayActionOptions(TArray<struct FText>* NameList, TArray<struct FString>* ActionList);
	void displayPopup(const struct FText& Title, const struct FText& Description, const struct FText& ButtonText, bool ShowMouse);
	void checkItemContents(const struct FString& Source, int Index);
	void clearBackpack();
	void setCurrentBackpack(class AbackpackBase_C* Backpack, class AitemInventoryHolder_C* itemHolder, const struct FinventoryItemStruct& backpackData);
	void phoneCallFunction(const struct FString& functionToCall);
	void phoneNewNote(bool Done, const struct FText& noteText);
	void phoneNewCall(int callerID, class USoundWave* callAudio, const struct FString& functionOnAnswer, const struct FString& functionOnDecline, const struct FString& functionOnEnd, const struct FText& CallText);
	void phoneNewMessage(int From, const struct FText& Message, int vcardID);
	void checkContainerSizing(const struct FinventoryItemStruct& Data, int Quantity, bool* CanFit, int* MaxQuantity);
	void tryAddToPockets(const struct FinventoryItemStruct& Data, int Quantity, bool* AllAdded, int* Rest);
	void addBackpackContent(const struct FinventoryItemStruct& Data, int Quantity, bool fromVendor, int ItemPrice);
	void checkBackpackSizing(const struct FinventoryItemStruct& itemData, int Quantity, bool* CanFit, int* MaxQuantity);
	void checkPocketSizing(const struct FinventoryItemStruct& itemData, int Quantity, int Index, bool* CanFit, int* MaxQuantity);
	void setPocketContent(const struct FinventoryItemStruct& itemData, int PocketIndex, int Quantity, bool fromVendor, int vendorPrice);
	void removeFromPocket(int Index, int Quantity);
	void removeDraggedItem(const struct FString& parentTag, int Index, int Quantity, const struct FinventoryItemStruct& Data);
	void removeFromBackpack(int Index, int Quantity);
	void tryAddToInventory(const struct FinventoryItemStruct& Item, int Quantity, bool* Success, struct FText* FailReason);
	void capAxisValue(float ForwardAxis, float SideAxis, float* ForwardCaped, float* SideCaped);
	void closeAllForPause();
	void standUpCheck(bool* canStandUp);
	void cameraLeanUpdate(float DeltaTime);
	void staminaBreath();
	void regainStamina(float DeltaTime);
	void drainStamina(float DeltaTime, bool Burst, float BurstValue);
	void setDefaults();
	void UserConstructionScript();
	void CrouchAnim__FinishedFunc();
	void CrouchAnim__UpdateFunc();
	void camFovDialogue__FinishedFunc();
	void camFovDialogue__UpdateFunc();
	void taserCamera__FinishedFunc();
	void taserCamera__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void headBobbTimeline__FinishedFunc();
	void headBobbTimeline__UpdateFunc();
	void headBobbTimeline__footStep__EventFunc();
	void InpActEvt_SprintToggle_K2Node_InputActionEvent_32(const struct FKey& Key);
	void InpActEvt_SprintToggle_K2Node_InputActionEvent_31(const struct FKey& Key);
	void InpActEvt_CrouchToggle_K2Node_InputActionEvent_30(const struct FKey& Key);
	void InpActEvt_JumpObstacle_K2Node_InputActionEvent_29(const struct FKey& Key);
	void InpActEvt_InventoryToggle_K2Node_InputActionEvent_28(const struct FKey& Key);
	void InpActEvt_InventoryToggle_K2Node_InputActionEvent_27(const struct FKey& Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_F10_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Wait_K2Node_InputActionEvent_26(const struct FKey& Key);
	void InpActEvt_phoneNext_K2Node_InputActionEvent_25(const struct FKey& Key);
	void InpActEvt_phonePrevious_K2Node_InputActionEvent_24(const struct FKey& Key);
	void InpActEvt_phoneEnter_K2Node_InputActionEvent_23(const struct FKey& Key);
	void InpActEvt_phoneBack_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_H_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_ScrollUp_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_ScrollDown_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_WorkStation_EqMode_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_WorkStation_EqMode_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_WorkStation_DPMode_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_WorkStation_DPMode_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_LeftClickPlace_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_LeftClickPlace_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_EquipmentOptions_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_AppartmentMode_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_AppartmentMode_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_InfoToggle_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_Y_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_DropBackpack_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_DropBackpack_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Action_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Action_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_QuickUse01_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_QuickUse02_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_QuickUse03_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_QuickUse04_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_L_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_L_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_MapToggle_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MoveSideways_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_LookSideways_K2Node_InputAxisEvent_4(float AxisValue);
	void breakCrouch();
	void footStep();
	void ReceivePossessed(class AController* NewController);
	void lineTraceCheck();
	void breakSprint();
	void playerStateUpdates();
	void startSleepDialogue();
	void InpAxisEvt_LeanSideways_K2Node_InputAxisEvent_5(float AxisValue);
	void showPhone();
	void hidePhone();
	void openInventory();
	void closeInventory();
	void resumeGame();
	void initializePlayer();
	void startSleepMode(bool Sleep);
	void endSleepMode();
	void goSleep(float Hours, float Minutes);
	void hideCallWidget();
	void selectActionOption();
	void startLockpickMode(class AdoorBase_C* LockpickedDoor);
	void closeLockpickMode();
	void ReceiveUnpossessed(class AController* OldController);
	void startDialogue(class AdialogueInstance_C* dialogueInstance);
	void endDialogue();
	void openTrade();
	void closeTrade();
	void lookAtCheck();
	void StartChaseMusic();
	void endChaseMusic();
	void tasedDown();
	void enableTasingDown();
	void caughtInSearch(bool onlyPoliceHours);
	void confiscateIllegalItems();
	void workStationMode();
	void endWorkStationMode();
	void resetClearHover();
	void clearOptionPanel();
	void actionRelease();
	void removeMap();
	void OnLanded(const struct FHitResult& Hit);
	void openMap();
	void enterAppartmentMode();
	void endAppartmentMode();
	void tryPutAppartmentObject();
	void tryMoveObject();
	void tryStoreObject();
	void updateMusicParamState(float Delta);
	void musicTick();
	void closeEqShop();
	void quitComputer();
	void backpackDropTimer();
	void tryPlayWaterFootstep();
	void staminaRested();
	void ActionPressed();
	void ActionReleased();
	void enableEndChase();
	void enableStartChase();
	void caughtPoliceHours();
	void drugConfShake();
	void passOut();
	void unlockPassOut();
	void showDebugPanel();
	void RefreshUndegroundStatus();
	void RefreshOverlapps();
	void ResetLand();
	void ExecuteUbergraph_playerCharacterBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
