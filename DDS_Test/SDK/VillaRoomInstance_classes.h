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

// BlueprintGeneratedClass VillaRoomInstance.VillaRoomInstance_C
// 0x00B1 (0x03D9 - 0x0328)
class AVillaRoomInstance_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInstancedStaticMeshComponent*               VaultShelfTop;                                            // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInstancedStaticMeshComponent*               VaultShelf;                                               // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               RoomSizer;                                                // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AVillaPropertyInstance_C*                    VillaRef;                                                 // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     RoomSizing;                                               // 0x0370(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	struct FText                                       RoomName;                                                 // 0x0380(0x0018) (Edit, BlueprintVisible)
	struct FText                                       RoomDescription;                                          // 0x0398(0x0018) (Edit, BlueprintVisible)
	float                                              RoomWallSurfaceCorrection;                                // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	class AVillaRoomInstance_C*                        ParentRoom;                                               // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               LightsOn;                                                 // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    MasterLightsChange;                                       // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Vault;                                                    // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VillaRoomInstance.VillaRoomInstance_C");
		return ptr;
	}


	void ToggleLights();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void OverlapEnter(class AActor* Actor);
	void OverlapLeave(class AActor* Actor);
	void LightChangedMaster();
	void ExecuteUbergraph_VillaRoomInstance(int EntryPoint);
	void MasterLightsChange__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
