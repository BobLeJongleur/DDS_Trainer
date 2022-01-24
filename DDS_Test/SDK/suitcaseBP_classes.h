#pragma once

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass suitcaseBP.suitcaseBP_C
// 0x000C (0x0588 - 0x057C)
class AsuitcaseBP_C : public AbackpackBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x057C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

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
