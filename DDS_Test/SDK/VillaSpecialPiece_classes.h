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

// BlueprintGeneratedClass VillaSpecialPiece.VillaSpecialPiece_C
// 0x0010 (0x0378 - 0x0368)
class AVillaSpecialPiece_C : public AVillaPieceMaster_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VillaSpecialPiece.VillaSpecialPiece_C");
		return ptr;
	}


	void UserConstructionScript();
	void SetActivity(bool active);
	void ExecuteUbergraph_VillaSpecialPiece(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
