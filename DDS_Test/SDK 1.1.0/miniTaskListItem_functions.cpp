
#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function miniTaskListItem.miniTaskListItem_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   taskName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           taskDone                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TaskID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           taskFailed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           taskSpecial                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           taskAwaitingDelivery           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UminiTaskListItem_C::Setup(const struct FText& taskName, bool taskDone, int TaskID, bool taskFailed, bool taskSpecial, bool taskAwaitingDelivery)
{
	static auto fn = UObject::FindObject<UFunction>("Function miniTaskListItem.miniTaskListItem_C.Setup");

	UminiTaskListItem_C_Setup_Params params;
	params.taskName = taskName;
	params.taskDone = taskDone;
	params.TaskID = TaskID;
	params.taskFailed = taskFailed;
	params.taskSpecial = taskSpecial;
	params.taskAwaitingDelivery = taskAwaitingDelivery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function miniTaskListItem.miniTaskListItem_C.ExecuteUbergraph_miniTaskListItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UminiTaskListItem_C::ExecuteUbergraph_miniTaskListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function miniTaskListItem.miniTaskListItem_C.ExecuteUbergraph_miniTaskListItem");

	UminiTaskListItem_C_ExecuteUbergraph_miniTaskListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
