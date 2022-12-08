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

// BlueprintGeneratedClass weedProductionFilter.weedProductionFilter_C
// 0x0008 (0x0430 - 0x0428)
class AweedProductionFilter_C : public AinteractiveBaseObject_C
{
public:
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass weedProductionFilter.weedProductionFilter_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
