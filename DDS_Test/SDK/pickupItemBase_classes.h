#pragma once

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass pickupItemBase.pickupItemBase_C
// 0x0180 (0x05A8 - 0x0428)
class ApickupItemBase_C : public AinteractiveBaseObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URamaSaveComponent*                          RamaSave_1;                                               // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  pickupSound;                                              // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FinventoryItemStruct                        Data;                                                     // 0x0440(0x0108) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Quantity;                                                 // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               dropedByPlayer;                                           // 0x054C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DespawnOutRadius;                                         // 0x054D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ToggleDistancePhysics;                                    // 0x054E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x054F(0x0001) MISSED OFFSET
	class AplayerCharacterBP_C*                        PlayerRef;                                                // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                AmountOverride;                                           // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MemAmount;                                                // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MemQuantity;                                              // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	struct FMixProportionsStruct                       MemMixProportions;                                        // 0x0568(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass pickupItemBase.pickupItemBase_C");
		return ptr;
	}


	void RamaExtend();
	void UserConstructionScript();
	void setupItem(const struct FinventoryItemStruct& Data, int Quantity, const struct FText& Object_Name, const struct FText& Action_Name, bool Droped, bool SimulatePhysics, bool isGizmo);
	void resetDroped();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void pickupEventScript();
	void objectPickup();
	void ReceiveBeginPlay();
	void ShortRadiusChanged(bool InRadius);
	void LongRadiusChanged(bool InRadius);
	void SubclassRamaLoaded();
	void BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName);
	void ExecuteUbergraph_pickupItemBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
