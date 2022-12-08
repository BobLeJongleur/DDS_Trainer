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

// BlueprintGeneratedClass blockEntranceLight.blockEntranceLight_C
// 0x0024 (0x0398 - 0x0374)
class AblockEntranceLight_C : public AenviroLightBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 lightModel;                                               // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass blockEntranceLight.blockEntranceLight_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void turnLightOn();
	void turnLightOff();
	void ToggleShadows(bool on);
	void ExecuteUbergraph_blockEntranceLight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
