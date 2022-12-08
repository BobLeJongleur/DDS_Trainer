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

// BlueprintGeneratedClass villaSalesmanDialogue.villaSalesmanDialogue_C
// 0x002E (0x03C0 - 0x0392)
class AvillaSalesmanDialogue_C : public AdialogueInstance_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    DialogueOpened;                                           // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BombsGiven;                                               // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass villaSalesmanDialogue.villaSalesmanDialogue_C");
		return ptr;
	}


	void UserConstructionScript();
	void OpenOffer();
	void DialogueActivated();
	void UnlockVillas();
	void GiveBombs();
	void LabComment();
	void ExecuteUbergraph_villaSalesmanDialogue(int EntryPoint);
	void BombsGiven__DelegateSignature();
	void DialogueOpened__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
