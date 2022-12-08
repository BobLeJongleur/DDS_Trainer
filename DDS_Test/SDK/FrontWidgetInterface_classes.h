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

// BlueprintGeneratedClass FrontWidgetInterface.FrontWidgetInterface_C
// 0x0000 (0x0028 - 0x0028)
class UFrontWidgetInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FrontWidgetInterface.FrontWidgetInterface_C");
		return ptr;
	}


	void CloseFrontWidget(bool* CanClose);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
