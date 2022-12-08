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

// BlueprintGeneratedClass CashDropInterface.CashDropInterface_C
// 0x0000 (0x0028 - 0x0028)
class UCashDropInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CashDropInterface.CashDropInterface_C");
		return ptr;
	}


	void InvalidateOldSafe(const struct FGuid& SafeGuid);
	void DropCash(const struct FGuid& Guid, int CashAmount, bool* DropConfirmed);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
