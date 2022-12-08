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

// BlueprintGeneratedClass Villa_GardenBreast_SectorC.Villa_GardenBreast_SectorC_C
// 0x0008 (0x04B0 - 0x04A8)
class AVilla_GardenBreast_SectorC_C : public AVillaModuleInstance_C
{
public:
	class UStaticMeshComponent*                        SM_TabletPapers_SM_TabletPapers_LOD0;                     // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Villa_GardenBreast_SectorC.Villa_GardenBreast_SectorC_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
