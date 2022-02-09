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

// BlueprintGeneratedClass pickupItemBase.pickupItemBase_C
// 0x0125 (0x0535 - 0x0410)
class ApickupItemBase_C : public AinteractiveBaseObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URamaSaveComponent*                          RamaSave_1;                                               // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  pickupSound;                                              // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FinventoryItemStruct                        Data;                                                     // 0x0428(0x0108) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Quantity;                                                 // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               dropedByPlayer;                                           // 0x0534(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass pickupItemBase.pickupItemBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void objectPickup();
	void pickupEventScript();
	void setupItem(const struct FinventoryItemStruct& Data, int Quantity, const struct FText& Object_Name, const struct FText& Action_Name, bool Droped, bool SimulatePhysics, bool isGizmo);
	void resetDroped();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_pickupItemBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
