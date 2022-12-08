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

// BlueprintGeneratedClass tempMixerTacka.tempMixerTacka_C
// 0x001C (0x0858 - 0x083C)
class AtempMixerTacka_C : public AworkStationMixerBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x083C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0840(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        mixModel;                                                 // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              mixModelMinScale;                                         // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mixModelMaxScale;                                         // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass tempMixerTacka.tempMixerTacka_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void quantityChanged();
	void ExecuteUbergraph_tempMixerTacka(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
