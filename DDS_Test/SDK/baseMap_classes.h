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

// BlueprintGeneratedClass baseMap.baseMap_C
// 0x0018 (0x0348 - 0x0330)
class AbaseMap_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FString                                     NewVar_1;                                                 // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass baseMap.baseMap_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_baseMap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
