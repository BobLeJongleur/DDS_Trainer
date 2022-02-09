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

// BlueprintGeneratedClass shopAmyGasStaion.shopAmyGasStaion_C
// 0x0008 (0x03E8 - 0x03E0)
class AshopAmyGasStaion_C : public AshopInstance_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass shopAmyGasStaion.shopAmyGasStaion_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void scriptResupplyEvent();
	void ExecuteUbergraph_shopAmyGasStaion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
