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

// BlueprintGeneratedClass doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C
// 0x000E (0x0538 - 0x052A)
class AdoorsExtWood01_PlayerAppartment_C : public AdoorBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x052A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void eventDoorActivated();
	void EnableHouseDoor();
	void DisableHouseDoor();
	void ExecuteUbergraph_doorsExtWood01_PlayerAppartment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
