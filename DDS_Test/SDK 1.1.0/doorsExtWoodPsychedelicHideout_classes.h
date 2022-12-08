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

// BlueprintGeneratedClass doorsExtWoodPsychedelicHideout.doorsExtWoodPsychedelicHideout_C
// 0x000E (0x0538 - 0x052A)
class AdoorsExtWoodPsychedelicHideout_C : public AdoorBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x052A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass doorsExtWoodPsychedelicHideout.doorsExtWoodPsychedelicHideout_C");
		return ptr;
	}


	void UserConstructionScript();
	void eventDoorActivated();
	void ExecuteUbergraph_doorsExtWoodPsychedelicHideout(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
