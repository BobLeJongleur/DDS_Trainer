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

// BlueprintGeneratedClass VillaRenovationInterface.VillaRenovationInterface_C
// 0x0000 (0x0028 - 0x0028)
class UVillaRenovationInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VillaRenovationInterface.VillaRenovationInterface_C");
		return ptr;
	}


	void CheckCanApplySurface(const struct FName& NewSurface, class UPrimitiveComponent* Comp, bool* CanApply, struct FString* FailReason);
	void CurFocusComponent(class UPrimitiveComponent* Comp, class UMaterialInstance* PreviewMat);
	void UpdateSavedSetting(class AVillaPropertyInstance_C* PropertyInstance);
	void LostFocus();
	void ApplySurface(const struct FString& HitElementID, const struct FName& NewSurface, class UPrimitiveComponent* Component);
	void TraceHit(class UPrimitiveComponent* HitComponent, const struct FName& CurHighlightedMaterial, struct FString* HitElementID, struct FName* HitElementCurSurface, struct FVillaSurfaceFinish* SurfaceData, class UDataTable** SurfaceDataTable);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
