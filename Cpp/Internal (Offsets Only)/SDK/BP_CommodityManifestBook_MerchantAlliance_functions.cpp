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

// Function BP_CommodityManifestBook_MerchantAlliance.BP_CommodityManifestBook_MerchantAlliance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CommodityManifestBook_MerchantAlliance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommodityManifestBook_MerchantAlliance.BP_CommodityManifestBook_MerchantAlliance_C.UserConstructionScript");

	ABP_CommodityManifestBook_MerchantAlliance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
