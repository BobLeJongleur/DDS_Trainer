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

// BlueprintGeneratedClass metalWicket01.metalWicket01_C
// 0x000E (0x0520 - 0x0512)
class AmetalWicket01_C : public AdoorBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0512(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass metalWicket01.metalWicket01_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void resetWicket();
	void ExecuteUbergraph_metalWicket01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
