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

// BlueprintGeneratedClass VillaWallPiece.VillaWallPiece_C
// 0x0070 (0x03D8 - 0x0368)
class AVillaWallPiece_C : public AVillaPieceMaster_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        villaPlaceholder_RoofBarrier;                             // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        villaPlaceholder_FloorFinish_Out;                         // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        villaPlaceholder_FloorFinish_Inn;                         // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        villaPlaceholder_WallTopFinish;                           // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WallPartRought;                                           // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WallBack;                                                 // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WallFront;                                                // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       FrontMaterial;                                            // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BackMaterial;                                             // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isOuter;                                                  // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Top;                                                      // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Balcony;                                                  // 0x03CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03CB(0x0005) MISSED OFFSET
	class UMaterialInterface*                          DefaultElevationMat;                                      // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VillaWallPiece.VillaWallPiece_C");
		return ptr;
	}


	void CanPaintComponent(class UPrimitiveComponent* Component, bool* CanPaint, struct FString* FailReason);
	void CheckCanApplySurface(const struct FName& NewSurface, class UPrimitiveComponent* Comp, bool* CanApply, struct FString* FailReason);
	void ComponentPainted(class UPrimitiveComponent* Comp, bool* Painted);
	void UpdateSurfaces();
	void GetSurfaceConfig(struct FString* ConfigString, struct FGuid* PieceGuid);
	void ChangeSurfaceMaterial(class UPrimitiveComponent* Component, const struct FName& NewMaterial);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetActivity(bool Visibility);
	void ApplySurface(const struct FString& HitElementID, const struct FName& NewSurface, class UPrimitiveComponent* Component);
	void UpdateSavedSetting(class AVillaPropertyInstance_C* PropertyInstance);
	void ParentApplySurface(const struct FName& NewSurface, class UPrimitiveComponent* Component);
	void SubclassSetActivity(bool Visible);
	void ToggleWindowMeshes(bool Show);
	void ExecuteUbergraph_VillaWallPiece(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
