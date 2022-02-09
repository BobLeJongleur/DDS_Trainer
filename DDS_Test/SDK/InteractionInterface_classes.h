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

// BlueprintGeneratedClass InteractionInterface.InteractionInterface_C
// 0x0000 (0x0028 - 0x0028)
class UInteractionInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InteractionInterface.InteractionInterface_C");
		return ptr;
	}


	void InteractionActivate(class AplayerCharacterBP_C* PlayerRef);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
