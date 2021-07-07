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

// Function BP_WoodPlankProxy.BP_WoodPlankProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_WoodPlankProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodPlankProxy.BP_WoodPlankProxy_C.UserConstructionScript");

	ABP_WoodPlankProxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_WoodPlankProxy_C::AfterRead()
{
	AStaticMeshItemProxy::AfterRead();

	READ_PTR_FULL(TrackedOwner, UTrackedOwnerComponent);
	READ_PTR_FULL(Interactable, UInteractableComponent);
}

void ABP_WoodPlankProxy_C::BeforeDelete()
{
	AStaticMeshItemProxy::BeforeDelete();

	DELE_PTR_FULL(TrackedOwner);
	DELE_PTR_FULL(Interactable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
