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

// Function BP_ClothingShopkeeper.BP_ClothingShopkeeper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ClothingShopkeeper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClothingShopkeeper.BP_ClothingShopkeeper_C.UserConstructionScript");

	ABP_ClothingShopkeeper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_ClothingShopkeeper_C::AfterRead()
{
	AShopkeeperInteractionProxy::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_ClothingShopkeeper_C::BeforeDelete()
{
	AShopkeeperInteractionProxy::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
