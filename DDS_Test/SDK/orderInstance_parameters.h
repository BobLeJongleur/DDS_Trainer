#pragma once

#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function orderInstance.orderInstance_C.CheckRama
struct AorderInstance_C_CheckRama_Params
{
};

// Function orderInstance.orderInstance_C.choosePackageIcon
struct AorderInstance_C_choosePackageIcon_Params
{
	TEnumAsByte<EdrugForm>                             Form;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  IconOut;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function orderInstance.orderInstance_C.constructOrderSMS
struct AorderInstance_C_constructOrderSMS_Params
{
	TArray<struct FText>                               MessageTemplates;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       MessageText;                                              // (Parm, OutParm)
};

// Function orderInstance.orderInstance_C.calcPackagingPattern
struct AorderInstance_C_calcPackagingPattern_Params
{
	struct FdrugData                                   drugData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                leftToDivide;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       PackageName;                                              // (Parm, OutParm)
	int                                                PackageQuantity;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PackageSize;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PackageWeight;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                restLeft;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                gramsPerPack;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  packageIcon;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ObjectClass;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function orderInstance.orderInstance_C.generatePackageContents
struct AorderInstance_C_generatePackageContents_Params
{
	TArray<struct FinventoryItemStruct>                OutInventory;                                             // (Parm, OutParm, ZeroConstructor)
	TArray<struct FName>                               OutIDs;                                                   // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        OutQuantity;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        OutAmounts;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<struct FMixProportionsStruct>               OutMixProportions;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function orderInstance.orderInstance_C.spawnOrderPackage
struct AorderInstance_C_spawnOrderPackage_Params
{
	bool                                               spawnAtHome;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function orderInstance.orderInstance_C.calcPrepTime
struct AorderInstance_C_calcPrepTime_Params
{
	float                                              TimeSeconds;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function orderInstance.orderInstance_C.setSmuggleDateTime
struct AorderInstance_C_setSmuggleDateTime_Params
{
};

// Function orderInstance.orderInstance_C.findRandomSmugLocation
struct AorderInstance_C_findRandomSmugLocation_Params
{
	class AsmuggleLocation_C*                          Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function orderInstance.orderInstance_C.getSmuggleLocRef
struct AorderInstance_C_getSmuggleLocRef_Params
{
};

// Function orderInstance.orderInstance_C.UserConstructionScript
struct AorderInstance_C_UserConstructionScript_Params
{
};

// Function orderInstance.orderInstance_C.ReceiveBeginPlay
struct AorderInstance_C_ReceiveBeginPlay_Params
{
};

// Function orderInstance.orderInstance_C.ReceiveTick
struct AorderInstance_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function orderInstance.orderInstance_C.SetupOrder
struct AorderInstance_C_SetupOrder_Params
{
	TArray<struct FdrugData>                           drugData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               DrugIDs;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        DrugQuantities;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              spawnTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function orderInstance.orderInstance_C.checkOrderSpawnTime
struct AorderInstance_C_checkOrderSpawnTime_Params
{
};

// Function orderInstance.orderInstance_C.spawnOrderNow
struct AorderInstance_C_spawnOrderNow_Params
{
};

// Function orderInstance.orderInstance_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
struct AorderInstance_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
{
	class URamaSaveComponent*                          RamaSaveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LevelPackageName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function orderInstance.orderInstance_C.ExecuteUbergraph_orderInstance
struct AorderInstance_C_ExecuteUbergraph_orderInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
