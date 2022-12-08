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

// BlueprintGeneratedClass Villa_FrontPlants_SectorA.Villa_FrontPlants_SectorA_C
// 0x0008 (0x04B0 - 0x04A8)
class AVilla_FrontPlants_SectorA_C : public AVillaModuleInstance_C
{
public:
	class UStaticMeshComponent*                        SM_Wheelbarrow;                                           // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Villa_FrontPlants_SectorA.Villa_FrontPlants_SectorA_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
