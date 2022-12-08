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

// BlueprintGeneratedClass BP_P_CarOpen.BP_P_CarOpen_C
// 0x003D (0x0365 - 0x0328)
class ABP_P_CarOpen_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CarBodyMatInst;                                           // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FLinearColor>                        CarColorPalette;                                          // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EVehicleType>                          CarType;                                                  // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RandomColor;                                              // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0352(0x0002) MISSED OFFSET
	struct FLinearColor                                ManualCarPaintColor;                                      // 0x0354(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CleanVersion;                                             // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_P_CarOpen.BP_P_CarOpen_C");
		return ptr;
	}


	void RandomGenerator();
	void UserConstructionScript();
	void GenerateCar();
	void ExecuteUbergraph_BP_P_CarOpen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
