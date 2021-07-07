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

// Function BP_Projectile_CannonBall_Grenade_Scatter_Thrown.BP_Projectile_CannonBall_Grenade_Scatter_Thrown_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Projectile_CannonBall_Grenade_Scatter_Thrown_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_CannonBall_Grenade_Scatter_Thrown.BP_Projectile_CannonBall_Grenade_Scatter_Thrown_C.UserConstructionScript");

	ABP_Projectile_CannonBall_Grenade_Scatter_Thrown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Projectile_CannonBall_Grenade_Scatter_Thrown_C::AfterRead()
{
	ABP_Projectile_CannonBall_Cursed_ComplexWaterHits_C::AfterRead();

	READ_PTR_FULL(Explosive, UExplosiveComponent);
}

void ABP_Projectile_CannonBall_Grenade_Scatter_Thrown_C::BeforeDelete()
{
	ABP_Projectile_CannonBall_Cursed_ComplexWaterHits_C::BeforeDelete();

	DELE_PTR_FULL(Explosive);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif