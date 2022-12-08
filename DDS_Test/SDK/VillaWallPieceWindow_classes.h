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

// BlueprintGeneratedClass VillaWallPieceWindow.VillaWallPieceWindow_C
// 0x0010 (0x03E8 - 0x03D8)
class AVillaWallPieceWindow_C : public AVillaWallPiece_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        WindowMesh;                                               // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VillaWallPieceWindow.VillaWallPieceWindow_C");
		return ptr;
	}


	void CanPaintComponent(class UPrimitiveComponent* Component, bool* CanPaint, struct FString* FailReason);
	void ShowWindows(bool Show);
	void UserConstructionScript();
	void SubclassSetActivity(bool Visible);
	void ExecuteUbergraph_VillaWallPieceWindow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
