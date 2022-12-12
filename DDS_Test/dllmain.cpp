#include <iostream>
#include <fstream>
#include <unordered_set>
#include <windows.h>
#include <stdlib.h>
#include "pch.h"
#include "ScriptDisassembler.h"
#include "utils/mem.h"
//#include "SDK.h"

static FILE* consoleFile;
static BOOLEAN kill;
static SDK::AbaseNPC_C* chosenNPC = nullptr;
static bool lightsEnabled = false;
static int loopCount = 0;

size_t payload1_offset = 0x50E737;
static BYTE payload1[] = {	0xE9, 0xC9, 0xEF, 0xB0, 0xFF, 0x90, 0x90, 0x90, 
							0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
							0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 
							0x90, 0x90, 0x90, 0x90 };

size_t payload2_offset = 0x1D705;
static BYTE payload2[] = {	0x74, 0x1A, 0x0F, 0x10, 0x4C, 0x24, 0x20, 0x0F, 
							0x10, 0x06, 0x0F, 0x11, 0x4C, 0x24, 0x30, 0x0F, 
							0x11, 0x44, 0x24, 0x20, 0x48, 0x8B, 0x4C, 0x24, 
							0x28, 0x0F, 0x11, 0x0E, 0x81, 0xF9, 0xCC, 0xCC, 
							0xCC, 0xCC, 0x75, 0x03, 0x48, 0x29, 0xC9, 0x48, 
							0x85, 0xC9, 0xE9, 0x22, 0x10, 0x4F, 0x00 };

void refreshMenu(int32_t objCount, void* player, void* statsManager)
{
	//system("cls");
	wprintf_s(L"Global obj count: %d; Player addr: 0x%p; statsManager addr: 0x%p\n\n", objCount, player, statsManager);
	wprintf_s(L"Commands: \n\
		Home: Enables debug widets\n\
		Ins: Add psychedelic offers\n\
		End: Check client state\n\
		Page Up: Dump a bunch of scripts\n\
		F1: Dump some function ptr\n\
		F2: Sales Manager data\n\
		F3: Show all available drugs\n\
		F4: Dump some gang info\n\
		F5: Get NPCs that have an active order\n\
		F6: Backpack content\n\
		F7: Open computer interface\n\
		F9: Add $1\n\
		Pause: Unhook from process\n\n");
}

void printFlagData(const char* flagName, SDK::UObject* context, SDK::UBlueprintHelpers_C* bpHelper)
{
	SDK::FFlagStruct flagData;
	bool flagExists;
	auto flagFName = SDK::FName(flagName);
	bpHelper->STATIC_GetBalanceFlag(flagFName, context, &flagData, &flagExists);

	if (flagExists)
		wprintf_s(L"%hs: %d; %.2f\n", flagName, flagData.IntValue_11_FA91B6C3429E0A1C69544190AECC9E7B, flagData.FloatValue_4_84C339BE4BFFA59BE99714B615C3B3F7);
	else
		wprintf_s(L"%hs doesn't exist in flag table\n", flagName);
}

void printDrugData(const char* drugName, SDK::UObject* context, SDK::UBlueprintHelpers_C* bpHelper)
{
	SDK::FNewDrugData newDrugData;
	bool drugExists;
	auto drugFName = SDK::FName(drugName);
	bpHelper->STATIC_GetDrugMeta(drugFName, context, &drugExists, &newDrugData);

	if (drugExists)
	{
		auto drug = newDrugData.DrugProperties_22_E6A8BE7C4BD0A5DE60F298A73A8A53E0;
		wprintf_s(L"\ntox: %.2f;\tstr: %.2f;\tmixStr: %.2f;\taddict: %.2f | %hs", drug.toxicity, drug.strength, drug.mixStr, drug.addictiveness, drugName);
	}
	else
		wprintf_s(L"%hs doesn't exist in drug table\n", drugName);
}

DWORD WINAPI InjectedThread(HANDLE hModule)
{
	kill = FALSE;
	if (AllocConsole())
		freopen_s(&consoleFile, "CONOUT$", "w", stdout);

	wprintf_s(L"Hooked\n");

	//1.2.23
	uintptr_t baseAddr = SDK::InitSdk("DrugDealerSimulator-Win64-Shipping.exe", 0x2EE89A0 - 0x10, 0x2DA5710);
	//uintptr_t* baseAddr = reinterpret_cast<uintptr_t*>(SDK::InitSdk("DrugDealerSimulator-Win64-Shipping.exe", 0x2EE77A0 - 0x10, 0x2EE3460));

	//1.1.0
	// Same as 1.0.8 it seems.
	//uintptr_t* baseAddr = reinterpret_cast<uintptr_t*>(SDK::InitSdk("DrugDealerSimulator-Win64-Shipping.exe", 0x2EE77A0 - 0x10, 0x2EE3460));

	//1.0.8
	// Found 0x2EE77A0 from a pointer search in CheatEngine, it points to the GObjects in memory. The GObject position in memory comes from UFT 3.1.0.
	// We need a FUObjectArray though, there is some metadata before the pointer, 4 int32 (4x4 = 16 = 0x10).
	// Found 0x2EE3460 from a pointer search on the memory position of the GName table given by UFT 3.1.0.
	// yeet
	//uintptr_t *baseAddr = reinterpret_cast<uintptr_t*>(SDK::InitSdk("DrugDealerSimulator-Win64-Shipping.exe", 0x2EE77A0-0x10, 0x2EE3460));

	// 1.0.6
	//uintptr_t baseAddr = SDK::InitSdk("DrugDealerSimulator-Win64-Shipping.exe", 0x2E75B10, 0x2E717E0);

	//std::cout << "BaseAddr: " << std::hex << baseAddr << "; GObjects: " << SDK::UObject::GObjects << "; GNames: " << SDK::FName::GNames << std::dec << std::endl;
	wprintf_s(L"BaseAddr: 0x%p; GObjects: 0x%p; GNames: 0x%p\n", reinterpret_cast<uintptr_t*>(baseAddr), reinterpret_cast<uintptr_t*>(SDK::UObject::GObjects->ObjObjects.Objects), *reinterpret_cast<uintptr_t**>(SDK::FName::GNames));

	SDK::AplayerCharacterBP_C* player = SDK::UObject::FindObjectReversed<SDK::AplayerCharacterBP_C>();
	SDK::AmainComputer_C* computer = SDK::UObject::FindObjectReversed<SDK::AmainComputer_C>();
	SDK::AclothesWardrobeBP_C* wardrobe = SDK::UObject::FindObjectReversed<SDK::AclothesWardrobeBP_C>();
	SDK::AsalesManager_C* salesManager = SDK::UObject::FindObjectReversed<SDK::AsalesManager_C>();
	SDK::AstatisticsManager_C* statsManager = SDK::UObject::FindObjectReversed<SDK::AstatisticsManager_C>();
	auto gangManager = SDK::UObject::FindObjectReversed<SDK::AgangManager_C>();
	auto bpHelper = SDK::UObject::FindObjectReversed<SDK::UBlueprintHelpers_C>();
	auto dataTableLibrary = SDK::UObject::FindObject<SDK::UDataTableFunctionLibrary>();
	auto worldContext = SDK::UObject::FindObject<SDK::UWorld>();

	// this patches an issue with GetDrugMeta
	mem::Patch(reinterpret_cast<BYTE*>(baseAddr + payload1_offset), payload1, 28);
	mem::Patch(reinterpret_cast<BYTE*>(baseAddr + payload2_offset), payload2, 47);

	int32_t objCount = SDK::UObject::GetGlobalObjects().Num();
	refreshMenu(objCount, player, statsManager);

	while (!kill)
	{
		bool updateStatus = false;
		if (GetAsyncKeyState(VK_PAUSE) & 1)
		{
			break;
			kill = TRUE;
		}

		if (GetAsyncKeyState(VK_INSERT) & 1)
			computer->addPsychedelicsOffer();

		if (GetAsyncKeyState(VK_HOME) & 1)
		{
			auto playerHUD = SDK::UObject::FindObjectReversed<SDK::UplayerHUD_C>();;

			playerHUD->debugPanel->SetIsEnabled(true);
			playerHUD->debugPanel->SetVisibility(SDK::ESlateVisibility::ESlateVisibility__Visible);
			playerHUD->debugSkradankowy->SetIsEnabled(true);
			playerHUD->debugSkradankowy->SetVisibility(SDK::ESlateVisibility::ESlateVisibility__Visible);
			//playerHUD->toggleSterowanie();
			playerHUD->statusPanel->SetIsEnabled(true);
			playerHUD->statusPanel->SetVisibility(SDK::ESlateVisibility::ESlateVisibility__Visible);
		}

		if (GetAsyncKeyState(VK_END) & 1)
		{
			salesManager->checkClientState();
			salesManager->tryDisplayClientState();
		}

		if (GetAsyncKeyState(VK_PRIOR) & 1)
		{
			//FKismetBytecodeDisassembler disasm = FKismetBytecodeDisassembler();
			//auto fn = SDK::UObject::FindObject<SDK::UFunction>("Function playerCharacterBP.playerCharacterBP_C.addMoney");
			//auto buffer = disasm.DisassembleStructure(fn->Script);
			//std::cout << buffer << std::endl;

			FKismetBytecodeDisassembler disasm = FKismetBytecodeDisassembler();
			std::vector<std::string> funcNames = std::vector<std::string>();
			funcNames.push_back("Function Engine.DataTableFunctionLibrary.GetDataTableRowFromName");
			funcNames.push_back("Function BlueprintHelpers.BlueprintHelpers_C.GetDrugMeta");
			funcNames.push_back("Function BlueprintHelpers.BlueprintHelpers_C.MixToDrugData");
			funcNames.push_back("Function salesManager.salesManager_C.countMaxDealers");
			funcNames.push_back("Function gangManager.gangManager_C.restartOrderTimer");
			funcNames.push_back("Function gangManager.gangManager_C.testDropForQuantity");
			funcNames.push_back("Function gangManager.gangManager_C.checkOrderDrop");
			funcNames.push_back("Function gangManager.gangManager_C.constructNewGangOrder");
			funcNames.push_back("Function playerCharacterBP.playerCharacterBP_C.addMoney");
			funcNames.push_back("Function salesManager.salesManager_C.addStatsOD");
			funcNames.push_back("Function salesManager.salesManager_C.checkClientState");
			funcNames.push_back("Function baseNPC.baseNPC_C.processReceivedDrugs");
			funcNames.push_back("Function baseNPC.baseNPC_C.drugSaleSuccesfull");
			funcNames.push_back("Function baseNPC.baseNPC_C.gotHome");
			funcNames.push_back("Function mainComputer.mainComputer_C.addPsychedelicsOffer");
			funcNames.push_back("Function baseNPC.baseNPC_C.saleReputationUpdate");
			funcNames.push_back("Function saleAreaManager.saleAreaManager_C.addAreaExposure");
			funcNames.push_back("Function baseNPC.baseNPC_C.saleReputationUpdate");
			funcNames.push_back("Function workStationMixerBase.workStationMixerBase_C.applyMix");
			funcNames.push_back("Function workStationMixerBase.workStationMixerBase_C.processMix");
			funcNames.push_back("Function statisticsManager.statisticsManager_C.modifyReputation");
			funcNames.push_back("Function mainComputer.mainComputer_C.prepareOrderResponse");
			funcNames.push_back("Function salesManager.salesManager_C.tryDisplayClientState");
			funcNames.push_back("Function salesManager.salesManager_C.dealerOfferChance");
			funcNames.push_back("Function salesManager.salesManager_C.odMessageResponse");
			funcNames.push_back("Function salesManager.salesManager_C.affectBadReputation");
			funcNames.push_back("Function salesManager.salesManager_C.clientSendNewOrder");
			funcNames.push_back("Function salesManager.salesManager_C.clientOrderCountdown");
			funcNames.push_back("Function populationManager.populationManager_C.burstMothafuckers");
			funcNames.push_back("Function mainMenuWidget.mainMenuWidget_C.BndEvt__btnTester_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
			funcNames.push_back("Function qaHashKey.qaHashKey_C.asd");
			funcNames.push_back("Function saleAreaManager.saleAreaManager_C.addAreaExposure");
			funcNames.push_back("Function baseNPC.baseNPC_C.drugSaleSuccesfull");
			funcNames.push_back("Function sampleClientBP.sampleClientBP_C.ReceiveBeginPlay");
			funcNames.push_back("Function mainComputer.mainComputer_C.ExecuteUbergraph_mainComputer");
			funcNames.push_back("Function BlueprintHelpers.BlueprintHelpers_C.GetBalanceFlag");

			printf_s("Processing %zu scripts\n", funcNames.size());
			for (auto funcName : funcNames)
			{
				auto fn = SDK::UObject::FindObject<SDK::UFunction>(funcName);
				auto fnName = fn->GetName();
				printf_s("  Dumping %s...", fnName.c_str());

				auto disasmScript = disasm.DisassembleStructure(fn->Script);
				auto filename = std::string(fnName) + ".txt";
				std::ofstream file = std::ofstream(filename.c_str());
				file.write(disasmScript.c_str(), disasmScript.size());
				file.flush();
				file.close();

				printf_s("  => %s\n", filename.c_str());
			}
		}

		if (GetAsyncKeyState(VK_F1) & 1)
		{
			std::vector<std::string> funcNames = std::vector<std::string>();
			funcNames.push_back("Function playerCharacterBP.playerCharacterBP_C.addMoney");
			funcNames.push_back("Function salesManager.salesManager_C.addStatsOD");
			funcNames.push_back("Function salesManager.salesManager_C.checkClientState");
			funcNames.push_back("Function baseNPC.baseNPC_C.processReceivedDrugs");
			funcNames.push_back("Function baseNPC.baseNPC_C.drugSaleSuccesfull");
			funcNames.push_back("Function baseNPC.baseNPC_C.gotHome");
			funcNames.push_back("Function mainComputer.mainComputer_C.addPsychedelicsOffer");
			//funcNames.push_back("");

			wprintf_s(L"\n");
			for (int i = 0; i < funcNames.size(); i++)
			{
				/*
				int32_t                                            FunctionFlags;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	BAD OFFSET? int16_t                                            RepOffset;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
				int8_t                                             NumParms;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
				int16_t                                            ParmsSize;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
				int16_t                                            ReturnValueOffset;                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
				int16_t                                            RPCId;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
				int16_t                                            RPCResponseId;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
				class UProperty*                                   FirstPropertyToInit;                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
				class UFunction*                                   EventGraphFunction;                                       // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
				int32_t                                            EventGraphCallOffset;                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
				void*                                              Func;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
				*/
				auto funcName = funcNames[i];
				SDK::UFunction* fnptr = SDK::UObject::FindObject<SDK::UFunction>(funcName);
				//wprintf_s(L"[0x%p] %s\n\t=> 0x%p; 0x%x; 0x%x\n", fnptr, std::wstring(funcName.begin(), funcName.end()).c_str(), fnptr->Func, fnptr->RepOffset, fnptr->RPCId);
				wprintf_s(L"[0x%p] %s\n", fnptr, std::wstring(funcName.begin(), funcName.end()).c_str());
				wprintf_s(L"\t=> 0x%x; 0x%x; 0x%x; 0x%x; 0x%x; 0x%x; 0x%p; 0x%p; 0x%x\n", fnptr->FunctionFlags, /*fnptr->RepOffset, */fnptr->NumParms, fnptr->ParmsSize, fnptr->ReturnValueOffset, fnptr->RPCId, fnptr->RPCResponseId, fnptr->FirstPropertyToInit, fnptr->EventGraphFunction, fnptr->EventGraphCallOffset);
				wprintf_s(L"\t=> Func: 0x%p\n", fnptr->Func);
				wprintf_s(L"\t=> Script: 0x%p; 0x%p\n", *(uintptr_t*)(&fnptr->Script), &fnptr->Script);
			}
		}

		if (GetAsyncKeyState(VK_F2) & 1)
		{
			wprintf_s(L"\n\nAvail: ");
			for (int i = 0; i < salesManager->clientsAvailable.Num(); i++)
				wprintf_s(L"%6d; ", salesManager->clientsAvailable[i]);
			wprintf_s(L"\nSatis: ");
			for (int i = 0; i < salesManager->clientsSatisfactionGeneral.Num(); i++)
				wprintf_s(L"%6.3f; ", salesManager->clientsSatisfactionGeneral[i]);
			wprintf_s(L"\n Risk: ");
			for (int i = 0; i < salesManager->clientsRiskFactor.Num(); i++)
				wprintf_s(L"%6.3f; ", salesManager->clientsRiskFactor[i]);
			wprintf_s(L"\nAddct: ");
			for (int i = 0; i < salesManager->clientsDrugAddictedTo.Num(); i++)
				wprintf_s(L"%6d; ", salesManager->clientsDrugAddictedTo[i]);
			wprintf_s(L"\n Lost: ");
			for (int i = 0; i < salesManager->clientsLost.Num(); i++)
				wprintf_s(L"%6d; ", salesManager->clientsLost[i]);
			wprintf_s(L"\n   OD: ");
			for (int i = 0; i < salesManager->clientsOD.Num(); i++)
				wprintf_s(L"%6d; ", salesManager->clientsOD[i]);
			wprintf_s(L"\n Deal: ");
			for (int i = 0; i < salesManager->clientIsDealer.Num(); i++)
				wprintf_s(L"%6d; ", salesManager->clientIsDealer[i]);
			//wprintf_s(L"\nOrder List Client ID: \n\t");
			//for (int i = 0; i < salesManager->orderListClientID.Num(); i++)
			//	wprintf_s(L"%d; ", salesManager->orderListClientID[i]);
			wprintf_s(L"\n\nMax Clients Per Area and level: %d, %d\n", salesManager->maxClientsPerArea, salesManager->maxClientsPerLevel);

		}

		if (GetAsyncKeyState(VK_F3) & 1)
		{
			auto dataTable = computer->DrugDatabase;
			SDK::TArray<SDK::FName> rowNames;
			dataTableLibrary->STATIC_GetDataTableRowNames(dataTable, &rowNames);

			for (int i = 0; i < rowNames.Num(); i++)
			{
				auto rowName = rowNames[i];
				printDrugData(rowName.GetName(), worldContext, bpHelper);
			}

			wprintf_s(L"");
		}

		if (GetAsyncKeyState(VK_F4) & 1)
		{
			wprintf_s(L"\nCurrent Order:\n\tSize: %d; Quantity: %d; Quality: %.2f\n\tNext order: %.2f\nInterval range: [%.2f, %.2f]\n\tPrice per gram: %d$\n\tSatisfaction: %.2f; Satisfaction Max: %.2f; Level: %d\n\n",
				gangManager->curOrderPackageSize, gangManager->curOrderPackageQuantity, gangManager->curOrderPackageQuality,
				gangManager->nextOrderCountdown,
				gangManager->gangOrderIntervalMin, gangManager->gangOrderIntervalMax,
				gangManager->ballenaPricePerGram,
				gangManager->gangSatisfaction, gangManager->gangSatisfactionMax, gangManager->gangLevel);


			printFlagData("GANG-INTERVAL-MAX-DROP", worldContext, bpHelper);
			printFlagData("GANG-MAX-LEVEL", worldContext, bpHelper);
			printFlagData("GANG-ORDER-INTERVAL", worldContext, bpHelper);
			wprintf_s(L"\n");
		}

		if (GetAsyncKeyState(VK_F5) & 1)
		{
			auto potentialNPCs = SDK::UObject::FindObjects<SDK::AbaseNPC_C>();
			auto npcsWithActiveOrder = std::vector<SDK::AbaseNPC_C*>();

			for (int i = 0; i < potentialNPCs.size(); i++)
			{
				auto tmp = potentialNPCs[i];
				if (tmp->orderID > 0)
					npcsWithActiveOrder.push_back(tmp);
			}

			if (npcsWithActiveOrder.empty())
				wprintf_s(L"\nNo NPCs with active orders\n");

			for (auto npc : npcsWithActiveOrder)
			{
				wprintf_s(L"\nNPC at 0x%p: OrderId %d\n", npc, npc->orderID);

				for (int i = 0; i < npc->drugsDemanded.Num(); i++)
				{
					SDK::FdrugData* drug = &(npc->drugsDemanded[i]);
					int drugQty = npc->drugsDemandedQuantity[i];
					wchar_t* drugName = drug->DrugName.Get();
					wprintf_s(L"\t%dg of %ls\n", drugQty, drugName == nullptr ? L"[NULLPTR]" : drugName);
				}

				//wprintf_s(L"\n\tThis client ate these wondeful drugs: \n");
				////for (int i = 0; i < npc->drugsUsed.Num(); i++)
				////{
				////	auto drug = &(npc->drugsUsed[i]);
				////	auto drugAddiction = npc->drugsUsedAddicion[i];
				////	wchar_t* drugName = drug->DrugName.Get();
				////	wprintf_s(L"\t\t%ls -> str: %.2f; tox: %.2f; addict: %.2f; addict acc: %.2f\n", drugName == nullptr ? L"[NULLPTR]" : drugName, drug->strength, drug->toxicity, drug->addictiveness, drugAddiction);
				////}
				//for (int i = 0; i < npc->drugsUsedAddicion.Num(); i++)
				//{
				//	float drugAddiction = npc->drugsUsedAddicion[i];
				//	wprintf_s(L"\t\taddict: %.2f\n", drugAddiction);
				//}

				auto receivedDrug = &(npc->drugReceived);
				auto receivedDrugQty = npc->drugReceivedQuantity;
				wchar_t* drugName = receivedDrug->DrugName.Get();
				if (drugName == nullptr)
					drugName = const_cast<wchar_t*>(receivedDrug->StringID.c_str());

				wprintf_s(L"\nNPC 0x%p received the following drugs: \n", npc);
				wprintf_s(L"\n\t%dg of %ls [tox: %.2f; str: %.2f; add: %.2f] => %p\n", receivedDrugQty, drugName == nullptr ? L"[NULLPTR]" : drugName, receivedDrug->toxicity, receivedDrug->strength, receivedDrug->addictiveness, receivedDrug);

				/*auto fn = SDK::UObject::FindObject<SDK::UFunction>("Function baseNPC.baseNPC_C.processReceivedDrugs");
				auto fnptr = SDK::GetVFunction<void(*)(SDK::UObject*, class SDK::UFunction*, void*)>(fn, 64);
				wprintf_s(L"\n\tprocessReceivedDrugs() function addr: 0x%p\n", fnptr);*/
				//auto receivedDrug = &(npc->drugReceived);
				//auto receivedDrugQty = npc->drugReceivedQuantity;
				//wchar_t* drugName = receivedDrug->DrugName.Get();
				//if (drugName == nullptr)
				//	drugName = const_cast<wchar_t*>(receivedDrug->StringID.c_str());

				//wprintf_s(L"\n\t%dg of %ls [tox: %.2f; str: %.2f; add: %.2f]\n", receivedDrugQty, drugName, receivedDrug->toxicity, receivedDrug->strength, receivedDrug->addictiveness);
				chosenNPC = npc;
				wprintf_s(L"\n\tThis NPC has been saved.\n");

				//npc->processReceivedDrugs();
			}
		}

		if (GetAsyncKeyState(VK_F6) & 1)
		{
			auto itemNames = player->InventoryComponent->ItemNames;
			auto inv = player->InventoryComponent;

			SDK::FGuid guid;
			SDK::TArray<struct SDK::FInventoryListStructure> items;
			bool stackExceeded;
			auto categories = SDK::TEnumAsByte<SDK::EitemCategories>(0);

			inv->GetItemList(SDK::FName(), false, categories, guid, true, &items, &stackExceeded);
			wprintf_s(L"\nInventory stuff [%d]:", items.Num());

			for (int i = 0; i < itemNames.Num(); i++)
			{

				wprintf_s(L"\n\t%d: %hs", i, itemNames[i].GetName());
				auto mix = inv->ItemMixProportions[i];
				if (mix.MixContents_4_087C32B1445FBB5223EDA2A1A88D5B16.IsValidIndex(0))
				{
					for (int j = 0; j < mix.MixContents_4_087C32B1445FBB5223EDA2A1A88D5B16.Num(); j++)
					{
						wprintf_s(L"\n%hs", mix.MixContents_4_087C32B1445FBB5223EDA2A1A88D5B16[j].GetName());
					}

					SDK::FdrugData drug;
					bpHelper->STATIC_MixToDrugData(mix, worldContext, &drug);
			}
		}

		if (GetAsyncKeyState(VK_F7) & 1)
		{
			computer->openComputer();
		}

		if (GetAsyncKeyState(VK_F9) & 1)
		{
			bool success = false;
			player->addMoney(1, false, &success);
		}

		if (GetAsyncKeyState(VK_F8) & 1)
		{
			auto popManager = SDK::UObject::FindObjectReversed<SDK::ApopulationManager_C>();
			popManager->burstMothafuckers();
		}

		if (updateStatus)
		{
			bool phoneUp = player->phoneUp;
			bool inventoryOpen = player->inventoryOpen;
			bool crouched = player->IsCrouching;
			bool sneakMode = player->sneakMode;
			SDK::TArray<SDK::FinventoryItemStruct> backpackStuff = player->backpackItems;
			SDK::TArray<int> backpackItemQty = player->backpackItemQuantity;

			if (backpackStuff.Num() <= 0)
			{
				wprintf_s(L"\nNothing in backpack");
			}
			else
			{
				wprintf_s(L"\n");
				for (int i = 0; i < backpackStuff.Num(); i++)
				{
					SDK::FinventoryItemStruct* item = &(backpackStuff[i]);
					wchar_t* itemName = nullptr;
					SDK::EitemCategories itemCategory = item->Category.GetValue();
					int quantity = backpackItemQty[i];

					wprintf_s(L"Slot: %d; ", i);
					if (itemCategory == SDK::EitemCategories::Drug || itemCategory == SDK::EitemCategories::Additives)
					{
						itemName = item->drugData.DrugName.Get();
						if (itemName == nullptr)
							itemName = const_cast<wchar_t*>(item->drugData.StringID.c_str());
						wprintf_s(L"tox: %.2f; str: %.2f; mixStr: %.2f; addict: %.2f; quantity: %dx%dg; ", item->drugData.toxicity, item->drugData.strength, item->drugData.mixStr, item->drugData.addictiveness, quantity, item->gramsPerItem);
						wprintf_s(L"name: %ls\n", itemName == nullptr ? L"[NULLPTR]" : itemName);

						auto drug = item->drugData;
						if (drug.MixStringIDs.Num() > 0)
						{
							wprintf_s(L"\t");
							for (int j = 0; j < drug.MixStringIDs.Num(); j++)
							{
								auto mixStringID = drug.MixStringIDs[j].c_str();
								auto mixStringPercent = drug.MixStringProportions[j];
								wprintf_s(L"%ls: %.2f; ", mixStringID, mixStringPercent);
							}
							wprintf_s(L"\n");
						}

						wprintf_s(L"\t=> %p\n", &(item->drugData));
					}
					else
					{
						itemName = item->Name.Get();
						wprintf_s(L"quantity: %d; category: %d; ", quantity, itemCategory);
						wprintf_s(L"name: %ls\n", itemName == nullptr ? L"[NULLPTR]" : itemName);
					}

					//wprintf_s(L"nameptr: %p; itemptr: %p\n", itemName, item);
				}
			}

			updateStatus = false;
		}

		//std::cout << "Phone: " << phoneUp << "; Inv: " << inventoryOpen << "; Crouched: " << crouched << "; Sneak: " << sneakMode << ";" << std::endl;
		Sleep(10);
	}

	if (consoleFile)
	{
		fclose(consoleFile);
		FreeConsole();
	}

	FreeLibraryAndExitThread(reinterpret_cast<HMODULE>(hModule), 0);
	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	if (ul_reason_for_call == DLL_PROCESS_ATTACH)
	{
		HANDLE hThread = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)InjectedThread, hModule, 0, nullptr);
		if (hThread)
			CloseHandle(hThread);
	}

	return TRUE;
}