// Name: SoT-Insider, Version: 1.102.2382.0

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

// Function BP_Grenade_Wieldable.BP_Grenade_Wieldable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Grenade_Wieldable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Wieldable.BP_Grenade_Wieldable_C.UserConstructionScript");

	ABP_Grenade_Wieldable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Grenade_Wieldable_C::AfterRead()
{
	AGrenade::AfterRead();

	READ_PTR_FULL(UsableWieldable, UUsableWieldableComponent);
	READ_PTR_FULL(WieldableInteractable, UWieldableInteractableComponent);
	READ_PTR_FULL(Pickupable, UPickupableComponent);
}

void ABP_Grenade_Wieldable_C::BeforeDelete()
{
	AGrenade::BeforeDelete();

	DELE_PTR_FULL(UsableWieldable);
	DELE_PTR_FULL(WieldableInteractable);
	DELE_PTR_FULL(Pickupable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
