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

// BlueprintGeneratedClass RoomLightsInterface.RoomLightsInterface_C
// 0x0000 (0x0028 - 0x0028)
class URoomLightsInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RoomLightsInterface.RoomLightsInterface_C");
		return ptr;
	}


	void SetLightState(bool LightOn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
