﻿// Name: SoT-Insider, Version: 1.102.2382.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function wld_shp_rocks_cluster_02.wld_shp_rocks_cluster_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Awld_shp_rocks_cluster_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wld_shp_rocks_cluster_02.wld_shp_rocks_cluster_02_C.UserConstructionScript");

	Awld_shp_rocks_cluster_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
