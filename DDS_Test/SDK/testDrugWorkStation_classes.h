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

// BlueprintGeneratedClass testDrugWorkStation.testDrugWorkStation_C
// 0x0007 (0x04CC - 0x04C5)
class AtestDrugWorkStation_C : public AdrugWorkStation_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	int                                                ActivateTaskID;                                           // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass testDrugWorkStation.testDrugWorkStation_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
