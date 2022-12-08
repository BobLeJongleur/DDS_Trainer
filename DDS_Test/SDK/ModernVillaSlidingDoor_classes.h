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

// BlueprintGeneratedClass ModernVillaSlidingDoor.ModernVillaSlidingDoor_C
// 0x002A (0x0452 - 0x0428)
class AModernVillaSlidingDoor_C : public AinteractiveBaseObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Overlap;                                                  // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SlidingDoor;                                              // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Slide_SlidePercent_506A805E46474B5F415ECDAF51DE1496;      // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Slide__Direction_506A805E46474B5F415ECDAF51DE1496;        // 0x0444(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0445(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Slide;                                                    // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               doorOpen;                                                 // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoorSliding;                                              // 0x0451(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernVillaSlidingDoor.ModernVillaSlidingDoor_C");
		return ptr;
	}


	void UserConstructionScript();
	void Slide__FinishedFunc();
	void Slide__UpdateFunc();
	void InteractionActivate(class AplayerCharacterBP_C* playerRef);
	void closeDoor();
	void autoClose();
	void ExecuteUbergraph_ModernVillaSlidingDoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
