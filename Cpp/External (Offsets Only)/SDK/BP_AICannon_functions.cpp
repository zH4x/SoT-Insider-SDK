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

// Function BP_AICannon.BP_AICannon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AICannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AICannon.BP_AICannon_C.UserConstructionScript");

	ABP_AICannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AICannon_C::AfterRead()
{
	ABP_Cannon_C::AfterRead();

	READ_PTR_FULL(AthenaAIInteractable, UAthenaAIInteractableComponent);
}

void ABP_AICannon_C::BeforeDelete()
{
	ABP_Cannon_C::BeforeDelete();

	DELE_PTR_FULL(AthenaAIInteractable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
