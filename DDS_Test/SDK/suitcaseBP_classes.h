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

// BlueprintGeneratedClass suitcaseBP.suitcaseBP_C
// 0x000B (0x0600 - 0x05F5)
class AsuitcaseBP_C : public AbackpackBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x05F5(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass suitcaseBP.suitcaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void putMoney(int Amount);
	void ExecuteUbergraph_suitcaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
