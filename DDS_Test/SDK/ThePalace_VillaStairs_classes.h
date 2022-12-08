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

// BlueprintGeneratedClass ThePalace_VillaStairs.ThePalace_VillaStairs_C
// 0x0010 (0x0388 - 0x0378)
class AThePalace_VillaStairs_C : public AVillaSpecialPiece_C
{
public:
	class UStaticMeshComponent*                        Mansion_StairBarrier;                                     // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mansion_Stairs;                                           // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ThePalace_VillaStairs.ThePalace_VillaStairs_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
