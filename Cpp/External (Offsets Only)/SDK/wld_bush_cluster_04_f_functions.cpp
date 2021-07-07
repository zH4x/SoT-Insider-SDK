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

// Function wld_bush_cluster_04_f.wld_bush_cluster_04_f_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Awld_bush_cluster_04_f_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wld_bush_cluster_04_f.wld_bush_cluster_04_f_C.UserConstructionScript");

	Awld_bush_cluster_04_f_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awld_bush_cluster_04_f_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wld_rock_medium_01__a_01, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_small_01__d_01, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_small_01__a_01, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_small_01__b_01, UStaticMeshComponent);
	READ_PTR_FULL(wld_plant_03_a_01, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Awld_bush_cluster_04_f_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wld_rock_medium_01__a_01);
	DELE_PTR_FULL(wld_rock_small_01__d_01);
	DELE_PTR_FULL(wld_rock_small_01__a_01);
	DELE_PTR_FULL(wld_rock_small_01__b_01);
	DELE_PTR_FULL(wld_plant_03_a_01);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
