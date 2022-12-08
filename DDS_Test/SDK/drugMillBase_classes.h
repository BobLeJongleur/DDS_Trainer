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

// BlueprintGeneratedClass drugMillBase.drugMillBase_C
// 0x0008 (0x07D8 - 0x07D0)
class AdrugMillBase_C : public AworkStationEquipmentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass drugMillBase.drugMillBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void addSubstance();
	void millContents();
	void workFinished();
	void tryAddSubstance();
	void ExecuteUbergraph_drugMillBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
