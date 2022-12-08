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

// BlueprintGeneratedClass sectantDoor.sectantDoor_C
// 0x0047 (0x0580 - 0x0539)
class AsectantDoor_C : public AdoorsExtMetal02_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0539(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<float>                                      KnockPattern;                                             // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               PatternDelay;                                             // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0559(0x0003) MISSED OFFSET
	float                                              UnlockTimer;                                              // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnlockDelay;                                              // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	class ASectantDoorObserveRange_C*                  ObserveRange;                                             // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FScriptMulticastDelegate                    SectantDoorUnlocked;                                      // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass sectantDoor.sectantDoor_C");
		return ptr;
	}


	void CheckKnockPattern();
	void AddKnock();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void InteractionActivate(class AplayerCharacterBP_C* playerRef);
	void ExecuteUbergraph_sectantDoor(int EntryPoint);
	void SectantDoorUnlocked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
