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

// BlueprintGeneratedClass AmericanDream_StairBarrier.AmericanDream_StairBarrier_C
// 0x0008 (0x0380 - 0x0378)
class AAmericanDream_StairBarrier_C : public AVillaSpecialPiece_C
{
public:
	class UStaticMeshComponent*                        AmericanDream_StairBarrier;                               // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AmericanDream_StairBarrier.AmericanDream_StairBarrier_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
