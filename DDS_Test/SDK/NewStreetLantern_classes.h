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

// BlueprintGeneratedClass NewStreetLantern.NewStreetLantern_C
// 0x0024 (0x03A0 - 0x037C)
class ANewStreetLantern_C : public ANewLightBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynMat;                                                   // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NewStreetLantern.NewStreetLantern_C");
		return ptr;
	}


	void UserConstructionScript();
	void LightStateChanged(bool LightVisible, bool CastShadows);
	void ExecuteUbergraph_NewStreetLantern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
