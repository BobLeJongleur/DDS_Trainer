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

// BlueprintGeneratedClass TrashBin_LargeContainer.TrashBin_LargeContainer_C
// 0x0014 (0x0520 - 0x050C)
class ATrashBin_LargeContainer_C : public AInteractiveTrashBin_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        Trash_Container_Green;                                    // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterial*                                   ContainerMaterial;                                        // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TrashBin_LargeContainer.TrashBin_LargeContainer_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
