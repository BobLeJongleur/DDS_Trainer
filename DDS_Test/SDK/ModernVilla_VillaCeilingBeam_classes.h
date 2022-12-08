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

// BlueprintGeneratedClass ModernVilla_VillaCeilingBeam.ModernVilla_VillaCeilingBeam_C
// 0x001A (0x03EA - 0x03D0)
class AModernVilla_VillaCeilingBeam_C : public AVillaCeilingPiece_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ModernVilla_CeilingEdge;                                  // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ModernVilla_CeilingEdgeCorner;                            // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               AddEdge;                                                  // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AddCornerEdge;                                            // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernVilla_VillaCeilingBeam.ModernVilla_VillaCeilingBeam_C");
		return ptr;
	}


	void UserConstructionScript();
	void SubclassSetActivity(bool active);
	void ExecuteUbergraph_ModernVilla_VillaCeilingBeam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
