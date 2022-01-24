
#include "pch.h"
#include <Windows.h>

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{

TNameEntryArray* FName::GNames = nullptr;
FUObjectArray* UObject::GObjects = nullptr;

//---------------------------------------------------------------------------
uintptr_t InitSdk(const std::string& moduleName, const size_t gObjectsOffset, const size_t gNamesOffset)
{
	uintptr_t mBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleA(moduleName.c_str()));

	//uintptr_t* firstChunk = reinterpret_cast<uintptr_t*>(mBaseAddress + gObjectsOffset);
	//UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>(*firstChunk);
	UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>(mBaseAddress + gObjectsOffset);
	FName::GNames = reinterpret_cast<SDK::TNameEntryArray*>(mBaseAddress + gNamesOffset);
	return mBaseAddress;
}
//---------------------------------------------------------------------------
bool FWeakObjectPtr::IsValid() const
{
	if (ObjectSerialNumber == 0)
	{
		return false;
	}
	if (ObjectIndex < 0)
	{
		return false;
	}
	auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
	if (!ObjectItem)
	{
		return false;
	}
	if (!SerialNumbersMatch(ObjectItem))
	{
		return false;
	}
	return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
}
//---------------------------------------------------------------------------
UObject* FWeakObjectPtr::Get() const
{
	if (IsValid())
	{
		auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
		if (ObjectItem)
		{
			return ObjectItem->Object;
		}
	}
	return nullptr;
}
//---------------------------------------------------------------------------
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
