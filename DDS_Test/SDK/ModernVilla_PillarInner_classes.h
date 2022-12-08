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

// BlueprintGeneratedClass ModernVilla_PillarInner.ModernVilla_PillarInner_C
// 0x0010 (0x0388 - 0x0378)
class AModernVilla_PillarInner_C : public AVillaSpecialPiece_C
{
public:
	class UStaticMeshComponent*                        ModernVilla_InnerPillar_Out;                              // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ModernVilla_InnerPillar;                                  // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernVilla_PillarInner.ModernVilla_PillarInner_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
