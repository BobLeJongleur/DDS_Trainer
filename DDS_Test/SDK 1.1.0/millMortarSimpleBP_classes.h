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

// BlueprintGeneratedClass millMortarSimpleBP.millMortarSimpleBP_C
// 0x001C (0x07F4 - 0x07D8)
class AmillMortarSimpleBP_C : public AdrugMillBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Contents;                                                 // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     baseContentScale;                                         // 0x07E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass millMortarSimpleBP.millMortarSimpleBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void quantityChanged();
	void ExecuteUbergraph_millMortarSimpleBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
