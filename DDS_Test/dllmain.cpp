#include <iostream>
#include <fstream>
#include <unordered_set>
#include <windows.h>
#include <stdlib.h>
#include "pch.h"
#include "ScriptDisassembler.h"
//#include "utils/mem.h"
//#include "SDK.h"

static FILE* consoleFile;
static BOOLEAN kill;
static SDK::AbaseNPC_C* chosenNPC = nullptr;
static bool lightsEnabled = false;
static int loopCount = 0;

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
		F10: Burst Mothafuckers\n\
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

DWORD WINAPI InjectedThread(HANDLE hModule)
{
	kill = FALSE;
	if (AllocConsole())
		freopen_s(&consoleFile, "CONOUT$", "w", stdout);

	wprintf_s(L"Hooked\n");

	//1.2.23
	uintptr_t* baseAddr = reinterpret_cast<uintptr_t*>(SDK::InitSdk("DrugDealerSimulator-Win64-Shipping.exe", 0x2EE89A0 - 0x10, 0x2DA5710));
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
	wprintf_s(L"BaseAddr: 0x%p; GObjects: 0x%p; GNames: 0x%p\n", baseAddr, reinterpret_cast<uintptr_t*>(SDK::UObject::GObjects->ObjObjects.Objects), *reinterpret_cast<uintptr_t**>(SDK::FName::GNames));

	SDK::AplayerCharacterBP_C* player = SDK::UObject::FindObjectReversed<SDK::AplayerCharacterBP_C>();
	SDK::AmainComputer_C* computer = SDK::UObject::FindObjectReversed<SDK::AmainComputer_C>();
	SDK::AclothesWardrobeBP_C* wardrobe = SDK::UObject::FindObjectReversed<SDK::AclothesWardrobeBP_C>();
	SDK::AsalesManager_C* salesManager = SDK::UObject::FindObjectReversed<SDK::AsalesManager_C>();
	SDK::AstatisticsManager_C* statsManager = SDK::UObject::FindObjectReversed<SDK::AstatisticsManager_C>();
	auto gangManager = SDK::UObject::FindObjectReversed<SDK::AgangManager_C>();
	auto bpHelper = SDK::UObject::FindObjectReversed<SDK::UBlueprintHelpers_C>();

	int32_t objCount = SDK::UObject::GetGlobalObjects().Num();
	refreshMenu(objCount, player, statsManager);
	//wprintf_s(L"Global obj count: %d; Player addr: 0x%p; statsManager addr: 0x%p\n\n", objCount, player, statsManager);
	//wprintf_s(L"Commands: \n\
	//	Home: Enables debug widets\n\
	//	Ins: Add psychedelic offers\n\
	//	End: Check client state\n\
	//	Page Up: Dump a bunch of scripts\n\
	//	F1: Dump some function ptr\n\
	//	F2: Sales Manager data\n\
	//	F3: Show all available drugs\n\
	//	F4: Give 0xFF exp\n\
	//	F5: Get NPCs that have an active order\n\
	//	F6: Backpack content\n\
	//	F7: Open computer interface\n\
	//	F9: Add $1\n\
	//	Pause: Unhook from process\n\n");
	while (!kill)
	{
		bool updateStatus = false;
		if (GetAsyncKeyState(VK_PAUSE) & 1)
		{
			break;
			kill = TRUE;
		}

		//loopCount++;
		//if (loopCount > 100)
		//{
		//	loopCount = 0;
		//	//statsManager->checkStatuses();
		//	//statsManager->levelUpFunctions();
		//}

		//if (false && (GetAsyncKeyState(VK_F3) & 1))
		//{
		//	if (chosenNPC == nullptr)
		//		wprintf_s(L"\nNo NPC has been saved. Press F5 to save an NPC.\n");
		//	else
		//	{
		//		wprintf_s(L"\nTriggering processReceivedDrugs() on NPC 0x%p...\n", chosenNPC);
		//		chosenNPC->processReceivedDrugs();
		//		wprintf_s(L"Done!");
		//	}
		//}

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
			funcNames.push_back("Function workStationMixerBase.workStationMixerBase_C.processMix"); //=> !CRASHES!
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
			funcNames.push_back("Function mainComputer.mainComputer_C.ExecuteUbergraph_mainComputer"); //=> !CRASHES! maybe look into it? read on ubergraph functions first

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
				SDK::UFunction *fnptr = SDK::UObject::FindObject<SDK::UFunction>(funcName);
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
			auto availDrugs = computer->drugsAvailable;

			wprintf_s(L"\n== DRUGS ==\n");
			for (int i = 0; i < availDrugs.Num(); i++)
			{
				auto drug = &(availDrugs[i]);
				const wchar_t* drugName = drug->MixStringIDs[0].c_str();

				if (drugName == nullptr)
					drugName = drug->DrugName.Get();

				wprintf_s(L"tox: %.2f; str: %.2f; mixStr: %.2f; addict: %.2f; ", drug->toxicity, drug->strength, drug->mixStr, drug->addictiveness);
				wprintf_s(L"name: %ls\n", drugName == nullptr ? L"[NULL]" : drugName);
				//wprintf_s(L"\t=> %p\n", drug);
			}

			auto additives = std::unordered_set<SDK::FinventoryItemStruct, SDK::FinventoryItemStruct>();

			auto shopPharmacyInstances = SDK::UObject::FindObjects<SDK::AshopPharmacy_C>();
			for (auto shop : shopPharmacyInstances)
			{
				auto inventory = shop->currentInventory;
				for (int i = 0; i < inventory.Num(); i++)
				{
					auto item = &inventory[i];
					if (item->Category == SDK::EitemCategories::Drug  || item->Category == SDK::EitemCategories::Additives)
						additives.insert(*item);
				}
			}

			auto shopGasStationInstances = SDK::UObject::FindObjects<SDK::AshopAmyGasStaion_C>();
			for (auto shop : shopGasStationInstances)
			{
				auto inventory = shop->currentInventory;
				for (int i = 0; i < inventory.Num(); i++)
				{
					auto item = &inventory[i];
					//if (item->Category == SDK::EitemCategories::Drug || item->Category == SDK::EitemCategories::Additives)
					additives.insert(*item);
				}
			}

			wprintf_s(L"\n== ADDITIVES ==\n");
			for (auto additive : additives)
			{
				auto drug = &additive.drugData;
				const wchar_t* drugName = drug->MixStringIDs[0].c_str();

				if (drugName == nullptr)
					drugName = drug->DrugName.Get();

				if (drugName == nullptr)
					drugName = additive.Name.Get();

				wprintf_s(L"tox: %.2f; str: %.2f; mixStr: %.2f; addict: %.2f; ", drug->toxicity, drug->strength, drug->mixStr, drug->addictiveness);
				wprintf_s(L"name: %ls; cat: %d\n", drugName == nullptr ? L"[NULL]" : drugName, additive.Category);
				//wprintf_s(L"\t=> %p\n", drug);
			}
		}

		//if (GetAsyncKeyState(VK_F4) & 1)
		//{
		//	if (chosenNPC == nullptr)
		//		wprintf_s(L"\nNo NPC has been saved. Press F5 to save an NPC.\n");
		//	else
		//	{
		//		auto receivedDrug = &(chosenNPC->drugReceived);
		//		auto receivedDrugQty = chosenNPC->drugReceivedQuantity;
		//		wchar_t* drugName = receivedDrug->DrugName.Get();
		//		if (drugName == nullptr)
		//			drugName = const_cast<wchar_t*>(receivedDrug->StringID.c_str());

		//		wprintf_s(L"\nNPC 0x%p: \n", chosenNPC);
		//		wprintf_s(L"\n\t%dg of %ls [tox: %.2f; str: %.2f; add: %.2f] => %p\n", receivedDrugQty, drugName == nullptr ? L"[NULLPTR]" : drugName, receivedDrug->toxicity, receivedDrug->strength, receivedDrug->addictiveness, receivedDrug);
		//	}
		//}
		//if (GetAsyncKeyState(VK_F4) & 1)
		//{
		//	/*auto drugStoreUnlocker = SDK::UObject::FindObjectReversed<SDK::AdrugStoreUnlocker_C>();
		//	drugStoreUnlocker->UnlockStore();*/
		//	//auto statsManager = SDK::UObject::FindObjectReversed<SDK::AstatisticsManager_C>();
		//	statsManager->addExp(0xFF);
		//}

		if (GetAsyncKeyState(VK_F4) & 1)
		{			
			wprintf_s(L"\nCurrent Order:\n\tSize: %d; Quantity: %d; Quality: %.2f\n\tNext order: %.2f\nInterval range: [%.2f, %.2f]\n\tPrice per gram: %d$\n\tSatisfaction: %.2f; Satisfaction Max: %.2f; Level: %d\n\n",
				gangManager->curOrderPackageSize, gangManager->curOrderPackageQuantity, gangManager->curOrderPackageQuality,
				gangManager->nextOrderCountdown,
				gangManager->gangOrderIntervalMin, gangManager->gangOrderIntervalMax,
				gangManager->ballenaPricePerGram,
				gangManager->gangSatisfaction, gangManager->gangSatisfactionMax, gangManager->gangLevel);

			auto context = SDK::UObject::FindObject<SDK::UWorld>();
			printFlagData("GANG-INTERVAL-MAX-DROP", context, bpHelper);
			printFlagData("GANG-MAX-LEVEL", context, bpHelper);
			printFlagData("GANG-ORDER-INTERVAL", context, bpHelper);
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
			//updateStatus = true;
			auto itemNames = player->InventoryComponent->ItemNames;
			auto inv = player->InventoryComponent;
			wprintf_s(L"\nInventory stuff [%d]:", itemNames.Num());

			for (int i = 0; i < itemNames.Num(); i++)
			{
				wprintf_s(L"\n\t%d: %hs (%d; %d)", i, itemNames[i].GetName(), inv->itemQuantities[i], inv->ItemCurAmount[i]);
			}

			wprintf_s(L"\n");
		}

		if (GetAsyncKeyState(VK_F7) & 1)
		{
			computer->openComputer();
			//auto dayTimeController = SDK::UObject::FindObjectReversed<SDK::AdayTimeControler_C>();

			//if (lightsEnabled)
			//{
			//	dayTimeController->disableStreetLight();
			//	lightsEnabled = false;
			//}
			//else
			//{
			//	dayTimeController->enableStreetLight();
			//	lightsEnabled = true;
			//}
		}

		//if (GetAsyncKeyState(VK_F8) & 1)
		//	wardrobe->ChangeClothes();

		if (GetAsyncKeyState(VK_F8) & 1 && false)
		{
			//auto cheatWidget = SDK::UObject::FindObjectReversed<SDK::UcheatManagerWidget_C>();
			auto cheatWidgets = SDK::UObject::FindObjects<SDK::UcheatManagerWidget_C>();
			//auto compassWidgets = SDK::UObject::FindObjects<SDK::UcompassMarkerWidget_C>();

			//for (int i = 0; i < compassWidgets.size(); i++)
			//{
			//	auto compassWidget = compassWidgets[i];
			//	compassWidget->SetPositionInViewport(SDK::FVector2D(32, 64 * i + 16), false);
			//}

			//auto containerWidget = SDK::UObject::FindObjectReversed<SDK::UcontainerListWidget_C>();
			//containerWidget->SetVisibility(SDK::ESlateVisibility::ESlateVisibility__Visible);
			auto containerWidgets = SDK::UObject::FindObjects<SDK::UdruPriceListingItem_C>();
			for (int i = 0; i < containerWidgets.size(); i++)
			{
				auto containerWidget = containerWidgets[i];
				wprintf_s(L"#%d => visible %d; enabled %d; in viewport %d; visibility enum %d; parent 0x%p\n", i, containerWidget->GetIsVisible(), containerWidget->GetIsEnabled(), containerWidget->IsInViewport(), containerWidget->GetVisibility(), containerWidget->GetParent());
			}

			if (cheatWidgets.empty())
			{
				wprintf_s(L"No UcheatManagerWidget_C instance found\n");
			}
			else
			{
				wprintf_s(L"Trying to launch %d cheat widget...\n", cheatWidgets.size());
				//for (int i = 0; i < cheatWidgets.size(); i++)
				//{
				//	auto cheatWidget = cheatWidgets[i];
				//	cheatWidget->AddToViewport(512);
				//	cheatWidget->SetPositionInViewport(SDK::FVector2D(10, 64 * i + 16), false);
				//	cheatWidget->SetVisibility(SDK::ESlateVisibility::ESlateVisibility__Visible);
				//	cheatWidget->SetIsEnabled(true);
				//	auto rootWidget = cheatWidget->WidgetTree->RootWidget;
				//	wprintf_s(L"#%d => visible: %d; enabled: %d; on viewport: %d; visibility enum: %d; parent addr: 0x%p; widget tree: 0x%p\n", i, cheatWidget->GetIsVisible(), cheatWidget->GetIsEnabled(), cheatWidget->IsInViewport(), cheatWidget->GetVisibility(), cheatWidget->GetParent(), cheatWidget->WidgetTree);
				//	//wprintf_s(L"\troot => enabled: %d; visibility enum: %d; parent addr: 0x%p\n", rootWidget->GetIsEnabled(), rootWidget->GetVisibility(), rootWidget->GetParent());
				//	wprintf_s(L"\troot => ");
				//	wprintf_s(L"enabled: %d;", rootWidget->GetIsEnabled());
				//	wprintf_s(L"visibility enum: %d;", rootWidget->GetVisibility());
				//	wprintf_s(L"parent addr: 0x%p\n", rootWidget->GetParent());
				//}
				//wprintf_s(L"\n");
				 
				auto cheatWidget = cheatWidgets[0];
				auto rootWidget = cheatWidget->WidgetTree->RootWidget;
				//auto allWidgets = cheatWidget->WidgetTree->AllWidgets;
				//wprintf_s(L"widget count: %d; root widget: 0x%p\n", allWidgets.Num(), rootWidget);
				//rootWidget->SetVisibility(SDK::ESlateVisibility::ESlateVisibility__Visible);
				//cheatWidget->AddToViewport(512);
				//cheatWidget->SetPositionInViewport(SDK::FVector2D(10, 16), false);
				//cheatWidget->SetVisibility(SDK::ESlateVisibility::ESlateVisibility__Visible);
				//cheatWidget->SetIsEnabled(true);
				//cheatWidget->Construct();
				wprintf_s(L"visible: %d; enabled: %d; on viewport: %d; visibility enum: %d; parent addr: 0x%p; widget tree: 0x%p\n", cheatWidget->GetIsVisible(), cheatWidget->GetIsEnabled(), cheatWidget->IsInViewport(), cheatWidget->GetVisibility(), cheatWidget->GetParent(), cheatWidget->WidgetTree);
				wprintf_s(L"\troot => root addr: 0x%p; enabled: %d; visibility enum: %d; parent addr: 0x%p\n", &cheatWidget->WidgetTree->RootWidget, rootWidget->GetIsEnabled(), rootWidget->GetVisibility(), rootWidget->GetParent());
				
				//cheatWidget->AddToPlayerScreen(MAXINT);
				//cheatWidget->BndEvt__btnProfileStart_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
				//Sleep(2000);
				//cheatWidget->BndEvt__btnProfileEnd_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
				//cheatWidget->BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
				//cheatWidget->AddToViewport(0);
				
				//wprintf_s(L"Cheat Widget: enabled %d; visible %d\n", cheatWidget->GetIsEnabled(), cheatWidget->IsVisible());

				// widget might be on a special menu, need to try and find out hierarchy
				// also need to find out which cheat widget instance to grab, there are multiple ones
				//if (cheatWidget->IsVisible())
				//{
				//	wprintf_s(L"Visibility was 1, changed to ");
				//	cheatWidget->SetVisibility(SDK::ESlateVisibility::ESlateVisibility__Hidden);
				//	wprintf_s(L"%d\n", cheatWidget->IsVisible());
				//}
				//else
				//{
				//	wprintf_s(L"Visibility was 0, changed to ");
				//	cheatWidget->SetVisibility(SDK::ESlateVisibility::ESlateVisibility__Visible);
				//	wprintf_s(L"%d\n", cheatWidget->IsVisible());
				//}

				//SDK::UWidget* currentWidget = cheatWidget;
				//std::vector<SDK::UWidget*> widgets = std::vector<SDK::UWidget*>();
				//wprintf_s(L"Is in viewport? %d\n", cheatWidget->IsInViewport());

				//while (currentWidget) 
				//{
				//	widgets.push_back(currentWidget);
				//	currentWidget = currentWidget->GetParent();
				//}

				//wprintf_s(L"Widget count: %d\nWidget hierarchy visibility: ", widgets.size());
				//for (auto widget : widgets)
				//{
				//	wprintf_s(L"%d; ", widget->IsVisible());
				//}
				//wprintf_s(L"\n");
				/*cheatWidget->AddToViewport(512);
				cheatWidget->SetVisibility(SDK::ESlateVisibility::ESlateVisibility__Visible);
				cheatWidget->SetIsEnabled(true);*/
				//cheatWidget->
				//wprintf_s(L"visible: %d; enabled: %d; on viewport: %d; visibility enum: %d\n", cheatWidget->GetIsVisible(), cheatWidget->GetIsEnabled(), cheatWidget->IsInViewport(), cheatWidget->GetVisibility());
			}
		}

		if (GetAsyncKeyState(VK_F9) & 1)
		{
			bool success = false;
			player->addMoney(1, false, &success);
		}

		if (GetAsyncKeyState(VK_F10) & 1)
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
					SDK::FinventoryItemStruct *item = &(backpackStuff[i]);
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