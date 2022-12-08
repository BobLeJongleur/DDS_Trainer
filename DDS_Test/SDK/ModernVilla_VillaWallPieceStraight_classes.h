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

// BlueprintGeneratedClass ModernVilla_VillaWallPieceStraight.ModernVilla_VillaWallPieceStraight_C
// 0x0002 (0x03DA - 0x03D8)
class AModernVilla_VillaWallPieceStraight_C : public AVillaWallPieceStraight_C
{
public:
	bool                                               Finish;                                                   // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FinishRightSide;                                          // 0x03D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernVilla_VillaWallPieceStraight.ModernVilla_VillaWallPieceStraight_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
