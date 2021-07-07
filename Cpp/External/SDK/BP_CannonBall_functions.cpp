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

// Function BP_CannonBall.BP_CannonBall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CannonBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CannonBall.BP_CannonBall_C.UserConstructionScript");

	ABP_CannonBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_CannonBall_C::AfterRead()
{
	ACannonBall::AfterRead();

	READ_PTR_FULL(UsableWieldable, UUsableWieldableComponent);
	READ_PTR_FULL(WieldableInteractable, UWieldableInteractableComponent);
	READ_PTR_FULL(Pickupable, UPickupableComponent);
}

void ABP_CannonBall_C::BeforeDelete()
{
	ACannonBall::BeforeDelete();

	DELE_PTR_FULL(UsableWieldable);
	DELE_PTR_FULL(WieldableInteractable);
	DELE_PTR_FULL(Pickupable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
