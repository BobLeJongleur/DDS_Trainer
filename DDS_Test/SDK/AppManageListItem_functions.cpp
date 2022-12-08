
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

// Function AppManageListItem.AppManageListItem_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UAppManageListItem_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageListItem.AppManageListItem_C.GetVisibility_1");

	UAppManageListItem_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppManageListItem.AppManageListItem_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UAppManageListItem_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageListItem.AppManageListItem_C.GetText_1");

	UAppManageListItem_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppManageListItem.AppManageListItem_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAppManageListItem_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageListItem.AppManageListItem_C.OnDragDetected");

	UAppManageListItem_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function AppManageListItem.AppManageListItem_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAppManageListItem_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageListItem.AppManageListItem_C.OnMouseButtonDown");

	UAppManageListItem_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppManageListItem.AppManageListItem_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FappartmentEquipment    EqMeta                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            SourceIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAppManageList_C*        MyList                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Quan                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAppManageListItem_C::setup(const struct FappartmentEquipment& EqMeta, int SourceIndex, class UAppManageList_C* MyList, int Quan)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageListItem.AppManageListItem_C.setup");

	UAppManageListItem_C_setup_Params params;
	params.EqMeta = EqMeta;
	params.SourceIndex = SourceIndex;
	params.MyList = MyList;
	params.Quan = Quan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppManageListItem.AppManageListItem_C.ExecuteUbergraph_AppManageListItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAppManageListItem_C::ExecuteUbergraph_AppManageListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppManageListItem.AppManageListItem_C.ExecuteUbergraph_AppManageListItem");

	UAppManageListItem_C_ExecuteUbergraph_AppManageListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
