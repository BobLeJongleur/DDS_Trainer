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

// BlueprintGeneratedClass virusFlashDrivePickup.virusFlashDrivePickup_C
// 0x0008 (0x05B0 - 0x05A8)
class AvirusFlashDrivePickup_C : public ApickupItemBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass virusFlashDrivePickup.virusFlashDrivePickup_C");
		return ptr;
	}


	void UserConstructionScript();
	void pickupEventScript();
	void ExecuteUbergraph_virusFlashDrivePickup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
