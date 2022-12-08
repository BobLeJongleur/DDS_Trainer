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

// BlueprintGeneratedClass shopExpositionModel_HangingPlant.shopExpositionModel_HangingPlant_C
// 0x0030 (0x0458 - 0x0428)
class AshopExpositionModel_HangingPlant_C : public AinteractiveBaseObject_C
{
public:
	class UStaticMeshComponent*                        SM_HFullPot;                                              // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0438(0x0018) (Edit, BlueprintVisible)
	class UStaticMesh*                                 ProductModel;                                             // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass shopExpositionModel_HangingPlant.shopExpositionModel_HangingPlant_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
