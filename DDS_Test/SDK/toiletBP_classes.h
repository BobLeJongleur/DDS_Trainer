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

// BlueprintGeneratedClass toiletBP.toiletBP_C
// 0x000F (0x0500 - 0x04F1)
class AtoiletBP_C : public AcontainerBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass toiletBP.toiletBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void closeEventScript();
	void ExecuteUbergraph_toiletBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
