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

// BlueprintGeneratedClass funeralHomeOwnerDialogue.funeralHomeOwnerDialogue_C
// 0x001E (0x03B0 - 0x0392)
class AfuneralHomeOwnerDialogue_C : public AdialogueInstance_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    GravesUnlocked;                                           // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass funeralHomeOwnerDialogue.funeralHomeOwnerDialogue_C");
		return ptr;
	}


	void UserConstructionScript();
	void GraveUnlock();
	void Puzzle();
	void DialogueActivated();
	void ExecuteUbergraph_funeralHomeOwnerDialogue(int EntryPoint);
	void GravesUnlocked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
