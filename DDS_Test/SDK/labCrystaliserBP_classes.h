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

// BlueprintGeneratedClass labCrystaliserBP.labCrystaliserBP_C
// 0x0008 (0x07D8 - 0x07D0)
class AlabCrystaliserBP_C : public AworkStationEquipmentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass labCrystaliserBP.labCrystaliserBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void addSubstance();
	void tryAddSubstance();
	void crystaliseContent();
	void workFinished();
	void ExecuteUbergraph_labCrystaliserBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
