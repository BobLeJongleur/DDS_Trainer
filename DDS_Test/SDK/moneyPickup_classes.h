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

// BlueprintGeneratedClass moneyPickup.moneyPickup_C
// 0x0008 (0x05B0 - 0x05A8)
class AmoneyPickup_C : public ApickupItemBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass moneyPickup.moneyPickup_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void retryInit();
	void ExecuteUbergraph_moneyPickup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
