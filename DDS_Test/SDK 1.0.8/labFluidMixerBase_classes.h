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

// BlueprintGeneratedClass labFluidMixerBase.labFluidMixerBase_C
// 0x000C (0x07A0 - 0x0794)
class AlabFluidMixerBase_C : public AworkStationMixerBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0794(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass labFluidMixerBase.labFluidMixerBase_C");
		return ptr;
	}


	void setEndMixForm(TEnumAsByte<EdrugForm>* EndForm, float* Humidity);
	void checkMixContents(bool* LiquidFound);
	void UserConstructionScript();
	void addSubstance();
	void applyMix();
	void workFinished();
	void tryAddSubstance();
	void ExecuteUbergraph_labFluidMixerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
