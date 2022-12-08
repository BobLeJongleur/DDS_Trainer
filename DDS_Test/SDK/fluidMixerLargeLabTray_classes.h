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

// BlueprintGeneratedClass fluidMixerLargeLabTray.fluidMixerLargeLabTray_C
// 0x001C (0x0864 - 0x0848)
class AfluidMixerLargeLabTray_C : public AlabFluidMixerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0848(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        contentMesh;                                              // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     contentScale;                                             // 0x0858(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass fluidMixerLargeLabTray.fluidMixerLargeLabTray_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void quantityChanged();
	void ExecuteUbergraph_fluidMixerLargeLabTray(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
