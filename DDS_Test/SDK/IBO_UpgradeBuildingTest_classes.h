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

// BlueprintGeneratedClass IBO_UpgradeBuildingTest.IBO_UpgradeBuildingTest_C
// 0x0010 (0x0438 - 0x0428)
class AIBO_UpgradeBuildingTest_C : public AinteractiveBaseObject_C
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_BU_ManagerActor_C*                       BuilingManager;                                           // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IBO_UpgradeBuildingTest.IBO_UpgradeBuildingTest_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
