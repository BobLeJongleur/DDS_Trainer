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

// BlueprintGeneratedClass ModernVilla_VillaWallGlassCorner.ModernVilla_VillaWallGlassCorner_C
// 0x0038 (0x0410 - 0x03D8)
class AModernVilla_VillaWallGlassCorner_C : public AVillaWallPieceStraight_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box2;                                                     // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Window02;                                                 // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Window01;                                                 // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EGlassWallType>                        Variant;                                                  // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	class UChildActorComponent*                        DoorActor;                                                // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernVilla_VillaWallGlassCorner.ModernVilla_VillaWallGlassCorner_C");
		return ptr;
	}


	void CanPaintComponent(class UPrimitiveComponent* Component, bool* CanPaint, struct FString* FailReason);
	void UserConstructionScript();
	void SubclassSetActivity(bool Visible);
	void ToggleWindowMeshes(bool Show);
	void ExecuteUbergraph_ModernVilla_VillaWallGlassCorner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
