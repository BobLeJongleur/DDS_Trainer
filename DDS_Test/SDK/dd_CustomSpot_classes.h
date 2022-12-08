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

// BlueprintGeneratedClass dd_CustomSpot.dd_CustomSpot_C
// 0x0034 (0x054C - 0x0518)
class Add_CustomSpot_C : public AdeadDropBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box_1;                                                    // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       CustomStotName;                                           // 0x0528(0x0018) (Edit, BlueprintVisible)
	struct FVector                                     colliderExtent;                                           // 0x0540(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass dd_CustomSpot.dd_CustomSpot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_dd_CustomSpot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
