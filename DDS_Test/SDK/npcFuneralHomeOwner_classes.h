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

// BlueprintGeneratedClass npcFuneralHomeOwner.npcFuneralHomeOwner_C
// 0x001C (0x0AF0 - 0x0AD4)
class AnpcFuneralHomeOwner_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               IntelKnown;                                               // 0x0AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PasswordKnown;                                            // 0x0AE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CardFound;                                                // 0x0AE2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GraveUnlock;                                              // 0x0AE3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0AE4(0x0004) MISSED OFFSET
	class AInteractiveGraveManager_C*                  GraveMaster;                                              // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass npcFuneralHomeOwner.npcFuneralHomeOwner_C");
		return ptr;
	}


	void RamaExtend();
	void RefreshDialogue();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void eventEnterDialogue();
	void VisitCardFound();
	void PasswordSaid();
	void IntelDiscovered();
	void GravesUnlocked();
	void RamaLoadedEvent();
	void AllBombsPlanted();
	void ExecuteUbergraph_npcFuneralHomeOwner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
