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

// Function BP_AISmallShip_StandardHull.BP_AISmallShip_StandardHull_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AISmallShip_StandardHull_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AISmallShip_StandardHull.BP_AISmallShip_StandardHull_C.UserConstructionScript");

	ABP_AISmallShip_StandardHull_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AISmallShip_StandardHull_C::AfterRead()
{
	AHull::AfterRead();

	READ_PTR_FULL(Damage, UChildActorComponent);
	READ_PTR_FULL(Art, UChildActorComponent);
}

void ABP_AISmallShip_StandardHull_C::BeforeDelete()
{
	AHull::BeforeDelete();

	DELE_PTR_FULL(Damage);
	DELE_PTR_FULL(Art);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
