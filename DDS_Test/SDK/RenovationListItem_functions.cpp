
#include "pch.h"

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function RenovationListItem.RenovationListItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URenovationListItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenovationListItem.RenovationListItem_C.Tick");

	URenovationListItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RenovationListItem.RenovationListItem_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URenovationListItem_C::setup(class UTexture2D* Icon, int Price, bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenovationListItem.RenovationListItem_C.setup");

	URenovationListItem_C_setup_Params params;
	params.Icon = Icon;
	params.Price = Price;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RenovationListItem.RenovationListItem_C.ExecuteUbergraph_RenovationListItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URenovationListItem_C::ExecuteUbergraph_RenovationListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenovationListItem.RenovationListItem_C.ExecuteUbergraph_RenovationListItem");

	URenovationListItem_C_ExecuteUbergraph_RenovationListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
