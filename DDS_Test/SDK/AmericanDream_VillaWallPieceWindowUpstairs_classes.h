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

// BlueprintGeneratedClass AmericanDream_VillaWallPieceWindowUpstairs.AmericanDream_VillaWallPieceWindowUpstairs_C
// 0x0008 (0x03F0 - 0x03E8)
class AAmericanDream_VillaWallPieceWindowUpstairs_C : public AVillaWallPieceWindow_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AmericanDream_VillaWallPieceWindowUpstairs.AmericanDream_VillaWallPieceWindowUpstairs_C");
		return ptr;
	}


	void UserConstructionScript();
	void SubclassSetActivity(bool Visible);
	void ExecuteUbergraph_AmericanDream_VillaWallPieceWindowUpstairs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
