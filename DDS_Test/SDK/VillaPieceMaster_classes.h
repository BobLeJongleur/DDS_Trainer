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

// BlueprintGeneratedClass VillaPieceMaster.VillaPieceMaster_C
// 0x0040 (0x0368 - 0x0328)
class AVillaPieceMaster_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDataTable*                                  SurfaceSource;                                            // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGuid                                       PieceGuid;                                                // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynMat;                                                   // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimitiveComponent*                         CurFocusComp;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          SourceMat;                                                // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VillaPieceMaster.VillaPieceMaster_C");
		return ptr;
	}


	void CheckCanApplySurface(const struct FName& NewSurface, class UPrimitiveComponent* Comp, bool* CanApply, struct FString* FailReason);
	void TraceHit(class UPrimitiveComponent* HitComponent, const struct FName& CurHighlightedMaterial, struct FString* HitElementID, struct FName* HitElementCurSurface, struct FVillaSurfaceFinish* SurfaceData, class UDataTable** SurfaceDataTable);
	void ComponentPainted(class UPrimitiveComponent* Comp, bool* Painted);
	void GetSurfaceConfig(struct FString* ConfigString, struct FGuid* PieceGuid);
	void UserConstructionScript();
	void LostFocus();
	void CurFocusComponent(class UPrimitiveComponent* Comp, class UMaterialInstance* PreviewMat);
	void UpdateSavedSetting(class AVillaPropertyInstance_C* PropertyInstance);
	void ApplySurface(const struct FString& HitElementID, const struct FName& NewSurface, class UPrimitiveComponent* Component);
	void ExecuteUbergraph_VillaPieceMaster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
