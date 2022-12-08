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

// BlueprintGeneratedClass GSMQuest01.GSMQuest01_C
// 0x0020 (0x03C0 - 0x03A0)
class AGSMQuest01_C : public AGSMAntenna_QuestActivator_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ASectantDoorObserveRange_C*                  SectantRange;                                             // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AsectantDoor_C*                              sectantDoor;                                              // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ASectantDoorOpener_C*                        SectantDoorOpener;                                        // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GSMQuest01.GSMQuest01_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void QuestActivation();
	void KnockObserved();
	void DoorUnlocked();
	void ExecuteUbergraph_GSMQuest01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
