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

// Function BP_fod_BananaFresh_00_a_Wieldable.BP_fod_BananaFresh_00_a_Wieldable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_fod_BananaFresh_00_a_Wieldable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_fod_BananaFresh_00_a_Wieldable.BP_fod_BananaFresh_00_a_Wieldable_C.UserConstructionScript");

	ABP_fod_BananaFresh_00_a_Wieldable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_fod_BananaFresh_00_a_Wieldable_C::AfterRead()
{
	ABP_StaticWieldableIngestible_C::AfterRead();

}

void ABP_fod_BananaFresh_00_a_Wieldable_C::BeforeDelete()
{
	ABP_StaticWieldableIngestible_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
