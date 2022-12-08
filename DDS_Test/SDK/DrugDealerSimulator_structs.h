#pragma once

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DrugDealerSimulator.AddictionMark
// 0x001C
struct FAddictionMark
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct DrugDealerSimulator.BU_UnseenDetailsSets
// 0x0018
struct FBU_UnseenDetailsSets
{
	struct FString                                     SetName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                LastSeenLevel;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NewLevels;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DrugDealerSimulator.BU_UnseenUL
// 0x0020
struct FBU_UnseenUL
{
	class ABU_UpgradeLineActor*                        UpgradeLine;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBU_UnseenDetailsSets>               UnseenDetailsSet;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                UnseenCount;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct DrugDealerSimulator.BU_UpgradeDetailsStruct
// 0x0020
struct FBU_UpgradeDetailsStruct
{
	int                                                UpgradeLevel;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UMaterialInterface*                          MaterialForSet;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaterialSetIndex;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Price;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DoManipulateExistance;                                    // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UpgradeExistanceTargetState;                              // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct DrugDealerSimulator.BU_ObjectsToDetailsBridge
// 0x00A0
struct FBU_ObjectsToDetailsBridge
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.BU_ObjectsToDetailsBridge.TargetStaticMeshes
	unsigned char                                      UnknownData01[0x50];                                      // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.BU_ObjectsToDetailsBridge.UpgradeDetails
};

// ScriptStruct DrugDealerSimulator.TS_EntrenceData
// 0x0028
struct FTS_EntrenceData
{
	struct FVector                                     EntrenaceLoc;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     EntrenceName;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                EntranceActorIndex;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct DrugDealerSimulator.TS_PayData
// 0x0008
struct FTS_PayData
{
	float                                              PayTime;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PayedAmount;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DrugDealerSimulator.TS_UpgradeBuyData
// 0x0008
struct FTS_UpgradeBuyData
{
	float                                              BuyTime;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UpgradeIndex;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DrugDealerSimulator.TS_ConnectionData
// 0x00A8
struct FTS_ConnectionData
{
	int                                                ConnectionIndex;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EntIndexA;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EntIndexB;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalDistance;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DugDistance;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoneyForDig;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoneySpend;                                               // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentDigSpeedPerHour;                                   // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentHourCost;                                          // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentMeterCost;                                         // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentWorkersWalkSpeed;                                  // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentWorkDigTime;                                       // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentDEASeekSpeedFactor;                                // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentWorkersEffieciency;                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BaseWorkersCount;                                         // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CreationTime;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTS_PayData>                         PayLog;                                                   // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FTS_UpgradeBuyData>                  UpgradesLog;                                              // 0x0050(0x0010) (ZeroConstructor)
	bool                                               Done;                                                     // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                RaidedCount;                                              // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastReportedProgress;                                     // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NextProgressReport;                                       // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastReportedRaidProgress;                                 // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NextRaidProgressReport;                                   // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BeeingRaided;                                             // 0x0078(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              RaidedDistance;                                           // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RaidedPerc;                                               // 0x0080(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RaidedEntranceA;                                          // 0x0084(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RaidedEntranceB;                                          // 0x0085(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0086(0x0002) MISSED OFFSET
	float                                              RaidTime;                                                 // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DoubleRaidTime;                                           // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DoubleRaidProgress;                                       // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndRaidTime;                                              // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RaidChainIndex;                                           // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OldConnectionIndex;                                       // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RaidLeftTime;                                             // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct DrugDealerSimulator.TS_ConnectionWorkUpgrade
// 0x00B0
struct FTS_ConnectionWorkUpgrade
{
	float                                              calcDigSpeed;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UpgradeIndex;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                forceBuild;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     UpgradeName;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              UpgradePrice;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpgradePriceForAlreadyDugMeter;                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UnlockProgress;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CheckForDistance;                                         // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              MinUnlockDistance;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AdditionalWorkersCount;                                   // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdditionalWorkersEfficiency;                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdditionalCostPerHour;                                    // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdditionalCostPerMeter;                                   // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DEARaidSeekSpeedFactor;                                   // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorkersWalkSpeedFactor;                                   // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorkProlongFactor;                                        // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanUpgradeBeUsedParallel;                                 // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanUpgradeBeCancelled;                                    // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DEARaided;                                                // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DEARecoveryPossible;                                      // 0x0053(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DEARecoveryCost;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	int                                                UsingConnectionIndex;                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0060(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.TS_ConnectionWorkUpgrade.WorkingInConnections
};

// ScriptStruct DrugDealerSimulator.TS_RaidLog
// 0x0014
struct FTS_RaidLog
{
	float                                              Timestamp;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TypeIndex;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IndexA;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IndexB;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              adtValue;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DrugDealerSimulator.TS_AvailableDestinations
// 0x000C
struct FTS_AvailableDestinations
{
	int                                                StartEntrenceIndex;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndEntrenceIndex;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TunnelLength;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DrugDealerSimulator.TS_ConnState
// 0x0068
struct FTS_ConnState
{
	int                                                ConnectionIndex;                                          // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               FindResult;                                               // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                EntIndexA;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EntIndexB;                                                // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ValidEntA;                                                // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ValidEntB;                                                // 0x0011(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FString                                     EntNameA;                                                 // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     EntNameB;                                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FVector                                     EntLocA;                                                  // 0x0038(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EntLocB;                                                  // 0x0044(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RaidedEntA;                                               // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RaidedEntB;                                               // 0x0051(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	float                                              TotalDistance;                                            // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DugDistance;                                              // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoneyForDig;                                              // 0x005C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               BeeingRaided;                                             // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              RaidedPerc;                                               // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DrugDealerSimulator.SubstanceMeta
// 0x0018
struct FSubstanceMeta
{
	int                                                substanceIndex;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              takeDayFloatTime;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              takenPower;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              endEffectTime;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              recoveryOffset;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              recoveryTime;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DrugDealerSimulator.DrugsSubData
// 0x0008
struct FDrugsSubData
{
	float                                              speedMultiplier;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              staminaMultiplier;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
