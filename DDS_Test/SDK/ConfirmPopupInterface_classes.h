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

// BlueprintGeneratedClass ConfirmPopupInterface.ConfirmPopupInterface_C
// 0x0000 (0x0028 - 0x0028)
class UConfirmPopupInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ConfirmPopupInterface.ConfirmPopupInterface_C");
		return ptr;
	}


	void UserClickedCancel(const struct FString& ActionID);
	void UserClickedConfirm(const struct FString& ActionID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
