#pragma once

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass additiveContainerBase.additiveContainerBase_C
// 0x005C (0x0794 - 0x0738)
class AadditiveContainerBase_C : public AworkStationEquipmentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0738(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             frontArrow;                                               // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            labelWidget;                                              // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       label;                                                    // 0x0750(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               canHoldLiquids;                                           // 0x0768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0769(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    dynamicMaterial;                                          // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                lastSelectedLabel;                                        // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               labelDisableCancel;                                       // 0x077C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x077D(0x0003) MISSED OFFSET
	struct FLinearColor                                labelColor;                                               // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxCapOverride;                                           // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass additiveContainerBase.additiveContainerBase_C");
		return ptr;
	}


	void changeLabel(bool setEmpty, const struct FText& NewLabel, const struct FLinearColor& NewColor, int Index);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void addSubstance();
	void setLabel();
	void showLabel();
	void hideLabel();
	void customiseLabel();
	void tryAddSubstance();
	void ExecuteUbergraph_additiveContainerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
