#pragma once

#include "pch.h"

// Name: DDS, Version: 1.2.23

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function SmuggleBox.SmuggleBox_C.CanAccessContainer
struct ASmuggleBox_C_CanAccessContainer_Params
{
	bool                                               CanAccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DeclineReason;                                            // (Parm, OutParm)
};

// Function SmuggleBox.SmuggleBox_C.UserConstructionScript
struct ASmuggleBox_C_UserConstructionScript_Params
{
};

// Function SmuggleBox.SmuggleBox_C.SmuggleContents
struct ASmuggleBox_C_SmuggleContents_Params
{
};

// Function SmuggleBox.SmuggleBox_C.openEventScript
struct ASmuggleBox_C_openEventScript_Params
{
};

// Function SmuggleBox.SmuggleBox_C.closeEventScript
struct ASmuggleBox_C_closeEventScript_Params
{
};

// Function SmuggleBox.SmuggleBox_C.RamaLoaded
struct ASmuggleBox_C_RamaLoaded_Params
{
};

// Function SmuggleBox.SmuggleBox_C.ExecuteUbergraph_SmuggleBox
struct ASmuggleBox_C_ExecuteUbergraph_SmuggleBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
