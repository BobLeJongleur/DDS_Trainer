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

// BlueprintGeneratedClass passageTraderDialogue.passageTraderDialogue_C
// 0x0013 (0x03A5 - 0x0392)
class ApassageTraderDialogue_C : public AdialogueInstance_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                curPrice;                                                 // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               respawned;                                                // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass passageTraderDialogue.passageTraderDialogue_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void openHatch();
	void checkPlayerCash();
	void ExecuteUbergraph_passageTraderDialogue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
