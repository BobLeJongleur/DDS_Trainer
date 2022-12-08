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

// BlueprintGeneratedClass Villa_DecorativePlantsModule_SectorB.Villa_DecorativePlantsModule_SectorB_C
// 0x0010 (0x04B8 - 0x04A8)
class AVilla_DecorativePlantsModule_SectorB_C : public AVillaModuleInstance_C
{
public:
	class UStaticMeshComponent*                        SM_Boxes_03a;                                             // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Shovel_01;                                             // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Villa_DecorativePlantsModule_SectorB.Villa_DecorativePlantsModule_SectorB_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
