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

// BlueprintGeneratedClass shopExpositionModel.shopExpositionModel_C
// 0x0020 (0x0448 - 0x0428)
class AshopExpositionModel_C : public AinteractiveBaseObject_C
{
public:
	struct FText                                       DisplayName;                                              // 0x0428(0x0018) (Edit, BlueprintVisible)
	class UStaticMesh*                                 ProductModel;                                             // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass shopExpositionModel.shopExpositionModel_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
