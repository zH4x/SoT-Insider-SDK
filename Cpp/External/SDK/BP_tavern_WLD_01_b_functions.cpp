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

// Function BP_tavern_WLD_01_b.BP_tavern_WLD_01_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_tavern_WLD_01_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_tavern_WLD_01_b.BP_tavern_WLD_01_b_C.UserConstructionScript");

	ABP_tavern_WLD_01_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_tavern_WLD_01_b_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SpotLight8, USpotLightComponent);
	READ_PTR_FULL(SpotLight7, USpotLightComponent);
	READ_PTR_FULL(SpotLight6, USpotLightComponent);
	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(RainBlockerUnderground, UStaticMeshComponent);
	READ_PTR_FULL(NavBlocker5, UBoxComponent);
	READ_PTR_FULL(NavBlocker4, UBoxComponent);
	READ_PTR_FULL(NavBlocker3, UBoxComponent);
	READ_PTR_FULL(NavBlocker2, UBoxComponent);
	READ_PTR_FULL(NavBlocker, UBoxComponent);
	READ_PTR_FULL(gmp_bar_stor_01_a, UStaticMeshComponent);
	READ_PTR_FULL(Roof_collision, UBoxComponent);
	READ_PTR_FULL(Onboarding_Intro_Table, UChildActorComponent);
	READ_PTR_FULL(SpotLight5, USpotLightComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(bld_tvn_entrance_01_a, UStaticMeshComponent);
	READ_PTR_FULL(BP_MusicBox, UChildActorComponent);
	READ_PTR_FULL(BP_Island_Bell, UChildActorComponent);
	READ_PTR_FULL(BP_IslandStorageBarrel_Outpost_4, UChildActorComponent);
	READ_PTR_FULL(BP_IslandStorageBarrel_Outpost_3, UChildActorComponent);
	READ_PTR_FULL(BP_IslandStorageBarrel_Outpost_2, UChildActorComponent);
	READ_PTR_FULL(SpotLight1, USpotLightComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(StaticMesh5, UStaticMeshComponent);
	READ_PTR_FULL(Rain_Blocker, UStaticMeshComponent);
	READ_PTR_FULL(ChildActor11, UChildActorComponent);
	READ_PTR_FULL(ChildActor10, UChildActorComponent);
	READ_PTR_FULL(Torch_6, UChildActorComponent);
	READ_PTR_FULL(Torch_5, UChildActorComponent);
	READ_PTR_FULL(Torch_3, UChildActorComponent);
	READ_PTR_FULL(Torch_2, UChildActorComponent);
	READ_PTR_FULL(ChildActor9, UChildActorComponent);
	READ_PTR_FULL(ChildActor8, UChildActorComponent);
	READ_PTR_FULL(ChildActor5, UChildActorComponent);
	READ_PTR_FULL(ChildActor4, UChildActorComponent);
	READ_PTR_FULL(ChildActor3, UChildActorComponent);
	READ_PTR_FULL(ChildActor2, UChildActorComponent);
	READ_PTR_FULL(ChildActor1, UChildActorComponent);
	READ_PTR_FULL(ChildActor, UChildActorComponent);
	READ_PTR_FULL(PointLight7, UPointLightComponent);
	READ_PTR_FULL(PointLight2, UPointLightComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(bld_horn_wld_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(bld_horn_wld_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(bld_horn_wld_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_horn_wld_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_a10, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_a9, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_a8, UStaticMeshComponent);
	READ_PTR_FULL(cmn_harpoon_03_a1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_a7, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_a6, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_large_shelf_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_torch_a, UChildActorComponent);
	READ_PTR_FULL(cmn_harpoon_01_a4, UStaticMeshComponent);
	READ_PTR_FULL(cmn_harpoon_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(cmn_harpoon_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(cmn_man_cage_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_brazier_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_a5, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_a4, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_man_cage_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_harpoon_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_harpoon_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_harpoon_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_brazier_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_kraken_skin_wld_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_entrance_wld_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh10, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_hook_01_a, UStaticMeshComponent);
	READ_PTR_FULL(ParticleSystem12, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem8, UParticleSystemComponent);
	READ_PTR_FULL(StaticMesh49, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh48, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh47, UStaticMeshComponent);
	READ_PTR_FULL(PointLight5, UPointLightComponent);
	READ_PTR_FULL(StaticMesh45, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh39, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_aged_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_02_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh35, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh34, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh32, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh22, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh20, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh19, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh16, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh15, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh14, UStaticMeshComponent);
	READ_PTR_FULL(cap_book_stand_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_boar_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_rifle_rack_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_pistol_rack_01_a, UStaticMeshComponent);
	READ_PTR_FULL(PointLight11, UPointLightComponent);
	READ_PTR_FULL(SpotLight4, USpotLightComponent);
	READ_PTR_FULL(SpotLight3, USpotLightComponent);
	READ_PTR_FULL(PointLight8, UPointLightComponent);
	READ_PTR_FULL(BP_Tavern_B_AudioLayer, UChildActorComponent);
	READ_PTR_FULL(PointLight6, UPointLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(vfx_fireplace_tavern, UParticleSystemComponent);
	READ_PTR_FULL(StaticMesh9, UStaticMeshComponent);
	READ_PTR_FULL(cap_skull_candle_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh54, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh50, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh44, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh43, UStaticMeshComponent);
	READ_PTR_FULL(gmp_mess_bot_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh38, UStaticMeshComponent);
	READ_PTR_FULL(fod_rum_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh36, UStaticMeshComponent);
	READ_PTR_FULL(shp_rope_coil_02_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_rope_coil_03_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh31, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh30, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh29, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh27, UStaticMeshComponent);
	READ_PTR_FULL(shp_fry_pan_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_b, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh21, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh11, UStaticMeshComponent);
	READ_PTR_FULL(ParticleSystem10, UParticleSystemComponent);
	READ_PTR_FULL(cmn_rowboat_oar_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_kitchen_table_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh4, UStaticMeshComponent);
	READ_PTR_FULL(shp_kitchen_shelf_02_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(cap_shark_jaws_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_wooden_plaque_01_a, UStaticMeshComponent);
	READ_PTR_FULL(Light_fire, USpotLightComponent);
	READ_PTR_FULL(ParticleSystem5, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem3, UParticleSystemComponent);
	READ_PTR_FULL(Light_candle_5, UPointLightComponent);
	READ_PTR_FULL(candle, UStaticMeshComponent);
	READ_PTR_FULL(light_ceiling_4, USpotLightComponent);
	READ_PTR_FULL(light_ceiling_5, USpotLightComponent);
	READ_PTR_FULL(Light_candle_6, UPointLightComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(Light_candle_7, UPointLightComponent);
	READ_PTR_FULL(Light_candle_4, UPointLightComponent);
	READ_PTR_FULL(Light_candle, UPointLightComponent);
	READ_PTR_FULL(ParticleSystem9, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem7, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem6, UParticleSystemComponent);
	READ_PTR_FULL(Light_lantern_2, UPointLightComponent);
	READ_PTR_FULL(light_ceiling_3, USpotLightComponent);
	READ_PTR_FULL(ParticleSystem2, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(vfx_tavern_torch_looping_03, UParticleSystemComponent);
	READ_PTR_FULL(vfx_tavern_torch_looping_02, UParticleSystemComponent);
	READ_PTR_FULL(light_ceiling_2, USpotLightComponent);
	READ_PTR_FULL(vfx_tavern_torch_looping_01, UParticleSystemComponent);
	READ_PTR_FULL(bld_tavern_tile_beams_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tavern_porch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tavern_floor_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bench_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(cmn_rug_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_interior_stairs_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_drapes_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_chimney_awning_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_wood_details_01_b, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_c, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_d, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_e, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_barrels_01_b_02, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_barrels_01_a_2, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_beam_sail_cloth_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_arches_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_top_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_chandelier_01_a_2, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_ceiling_rose_01_a_2, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_barrels_01_b_2, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_roof_window_01_a_2, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_veranda_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_stone_chimney_top_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_stone_chimney_base_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_roof_window_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_metal_chimney_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_exterior_stairs_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_chandelier_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_ceiling_rose_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_racks_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_base_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_barrels_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_barrels_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tavern_roof_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_rug_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_rug_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_stool_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(cmn_stool_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_post_01_c1, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_post_01_c, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_post_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_rug_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_animal_rug_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_stool_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_beam_sail_cloth_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_post_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bench_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bench_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_low_arch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_round_table_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_table_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_exterior_door_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_wood_holder_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_fireplace_grate_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_exterior_door_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_exterior_door_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_window_01_b5, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_window_01_b4, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_window_01_b3, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_window_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_window_01_b2, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_window_01_b1, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_window_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_window_01_c, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_window_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_fireplace_rail_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_fireplace_plinth_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_fireplace_surround_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tavern_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_tavern_WLD_01_b_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SpotLight8);
	DELE_PTR_FULL(SpotLight7);
	DELE_PTR_FULL(SpotLight6);
	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(RainBlockerUnderground);
	DELE_PTR_FULL(NavBlocker5);
	DELE_PTR_FULL(NavBlocker4);
	DELE_PTR_FULL(NavBlocker3);
	DELE_PTR_FULL(NavBlocker2);
	DELE_PTR_FULL(NavBlocker);
	DELE_PTR_FULL(gmp_bar_stor_01_a);
	DELE_PTR_FULL(Roof_collision);
	DELE_PTR_FULL(Onboarding_Intro_Table);
	DELE_PTR_FULL(SpotLight5);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(bld_tvn_entrance_01_a);
	DELE_PTR_FULL(BP_MusicBox);
	DELE_PTR_FULL(BP_Island_Bell);
	DELE_PTR_FULL(BP_IslandStorageBarrel_Outpost_4);
	DELE_PTR_FULL(BP_IslandStorageBarrel_Outpost_3);
	DELE_PTR_FULL(BP_IslandStorageBarrel_Outpost_2);
	DELE_PTR_FULL(SpotLight1);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(StaticMesh5);
	DELE_PTR_FULL(Rain_Blocker);
	DELE_PTR_FULL(ChildActor11);
	DELE_PTR_FULL(ChildActor10);
	DELE_PTR_FULL(Torch_6);
	DELE_PTR_FULL(Torch_5);
	DELE_PTR_FULL(Torch_3);
	DELE_PTR_FULL(Torch_2);
	DELE_PTR_FULL(ChildActor9);
	DELE_PTR_FULL(ChildActor8);
	DELE_PTR_FULL(ChildActor5);
	DELE_PTR_FULL(ChildActor4);
	DELE_PTR_FULL(ChildActor3);
	DELE_PTR_FULL(ChildActor2);
	DELE_PTR_FULL(ChildActor1);
	DELE_PTR_FULL(ChildActor);
	DELE_PTR_FULL(PointLight7);
	DELE_PTR_FULL(PointLight2);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(bld_horn_wld_01_a3);
	DELE_PTR_FULL(bld_horn_wld_01_a2);
	DELE_PTR_FULL(bld_horn_wld_01_a1);
	DELE_PTR_FULL(bld_horn_wld_01_a);
	DELE_PTR_FULL(cmn_skeleton_head_01_a10);
	DELE_PTR_FULL(cmn_skeleton_head_01_a9);
	DELE_PTR_FULL(cmn_skeleton_head_01_a8);
	DELE_PTR_FULL(cmn_harpoon_03_a1);
	DELE_PTR_FULL(cmn_skeleton_head_01_a7);
	DELE_PTR_FULL(cmn_skeleton_head_01_a6);
	DELE_PTR_FULL(bld_int_large_shelf_03_a);
	DELE_PTR_FULL(cmn_torch_a);
	DELE_PTR_FULL(cmn_harpoon_01_a4);
	DELE_PTR_FULL(cmn_harpoon_01_a3);
	DELE_PTR_FULL(cmn_harpoon_01_a2);
	DELE_PTR_FULL(cmn_man_cage_01_a1);
	DELE_PTR_FULL(cmn_brazier_01_a1);
	DELE_PTR_FULL(cmn_skeleton_head_01_a5);
	DELE_PTR_FULL(cmn_skeleton_head_01_a4);
	DELE_PTR_FULL(cmn_skeleton_head_01_a3);
	DELE_PTR_FULL(cmn_skeleton_head_01_a2);
	DELE_PTR_FULL(cmn_skeleton_head_01_a1);
	DELE_PTR_FULL(cmn_skeleton_head_01_a);
	DELE_PTR_FULL(cmn_man_cage_01_a);
	DELE_PTR_FULL(cmn_harpoon_01_a1);
	DELE_PTR_FULL(cmn_harpoon_01_a);
	DELE_PTR_FULL(cmn_harpoon_03_a);
	DELE_PTR_FULL(cmn_brazier_01_a);
	DELE_PTR_FULL(bld_tvn_kraken_skin_wld_01_a);
	DELE_PTR_FULL(bld_tvn_entrance_wld_01_a);
	DELE_PTR_FULL(StaticMesh10);
	DELE_PTR_FULL(shp_int_hook_01_a);
	DELE_PTR_FULL(ParticleSystem12);
	DELE_PTR_FULL(ParticleSystem8);
	DELE_PTR_FULL(StaticMesh49);
	DELE_PTR_FULL(StaticMesh48);
	DELE_PTR_FULL(StaticMesh47);
	DELE_PTR_FULL(PointLight5);
	DELE_PTR_FULL(StaticMesh45);
	DELE_PTR_FULL(StaticMesh39);
	DELE_PTR_FULL(cap_cabin_books_03_a);
	DELE_PTR_FULL(cap_cabin_books_01_a);
	DELE_PTR_FULL(cap_cabin_books_aged_01_a);
	DELE_PTR_FULL(cap_cabin_books_02_a);
	DELE_PTR_FULL(StaticMesh35);
	DELE_PTR_FULL(StaticMesh34);
	DELE_PTR_FULL(StaticMesh32);
	DELE_PTR_FULL(StaticMesh22);
	DELE_PTR_FULL(StaticMesh20);
	DELE_PTR_FULL(StaticMesh19);
	DELE_PTR_FULL(StaticMesh16);
	DELE_PTR_FULL(StaticMesh15);
	DELE_PTR_FULL(StaticMesh14);
	DELE_PTR_FULL(cap_book_stand_01_a);
	DELE_PTR_FULL(cmn_skeleton_head_boar_01_a);
	DELE_PTR_FULL(shp_rifle_rack_01_a);
	DELE_PTR_FULL(shp_pistol_rack_01_a);
	DELE_PTR_FULL(PointLight11);
	DELE_PTR_FULL(SpotLight4);
	DELE_PTR_FULL(SpotLight3);
	DELE_PTR_FULL(PointLight8);
	DELE_PTR_FULL(BP_Tavern_B_AudioLayer);
	DELE_PTR_FULL(PointLight6);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(vfx_fireplace_tavern);
	DELE_PTR_FULL(StaticMesh9);
	DELE_PTR_FULL(cap_skull_candle_01_a);
	DELE_PTR_FULL(StaticMesh54);
	DELE_PTR_FULL(StaticMesh50);
	DELE_PTR_FULL(StaticMesh44);
	DELE_PTR_FULL(StaticMesh43);
	DELE_PTR_FULL(gmp_mess_bot_01_a);
	DELE_PTR_FULL(StaticMesh38);
	DELE_PTR_FULL(fod_rum_01_a);
	DELE_PTR_FULL(StaticMesh36);
	DELE_PTR_FULL(shp_rope_coil_02_a);
	DELE_PTR_FULL(shp_rope_coil_03_a);
	DELE_PTR_FULL(StaticMesh31);
	DELE_PTR_FULL(StaticMesh30);
	DELE_PTR_FULL(StaticMesh29);
	DELE_PTR_FULL(StaticMesh27);
	DELE_PTR_FULL(shp_fry_pan_01_a);
	DELE_PTR_FULL(cmn_candle_01_b);
	DELE_PTR_FULL(StaticMesh21);
	DELE_PTR_FULL(StaticMesh11);
	DELE_PTR_FULL(ParticleSystem10);
	DELE_PTR_FULL(cmn_rowboat_oar_01_a);
	DELE_PTR_FULL(shp_kitchen_table_01_a);
	DELE_PTR_FULL(StaticMesh4);
	DELE_PTR_FULL(shp_kitchen_shelf_02_a);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(cap_shark_jaws_01_a);
	DELE_PTR_FULL(cap_wooden_plaque_01_a);
	DELE_PTR_FULL(Light_fire);
	DELE_PTR_FULL(ParticleSystem5);
	DELE_PTR_FULL(ParticleSystem3);
	DELE_PTR_FULL(Light_candle_5);
	DELE_PTR_FULL(candle);
	DELE_PTR_FULL(light_ceiling_4);
	DELE_PTR_FULL(light_ceiling_5);
	DELE_PTR_FULL(Light_candle_6);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(Light_candle_7);
	DELE_PTR_FULL(Light_candle_4);
	DELE_PTR_FULL(Light_candle);
	DELE_PTR_FULL(ParticleSystem9);
	DELE_PTR_FULL(ParticleSystem7);
	DELE_PTR_FULL(ParticleSystem6);
	DELE_PTR_FULL(Light_lantern_2);
	DELE_PTR_FULL(light_ceiling_3);
	DELE_PTR_FULL(ParticleSystem2);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(vfx_tavern_torch_looping_03);
	DELE_PTR_FULL(vfx_tavern_torch_looping_02);
	DELE_PTR_FULL(light_ceiling_2);
	DELE_PTR_FULL(vfx_tavern_torch_looping_01);
	DELE_PTR_FULL(bld_tavern_tile_beams_01_a);
	DELE_PTR_FULL(bld_tavern_porch_01_a);
	DELE_PTR_FULL(bld_tavern_floor_01_a);
	DELE_PTR_FULL(bld_tvn_bench_01_a2);
	DELE_PTR_FULL(cmn_rug_01_a1);
	DELE_PTR_FULL(bld_tvn_interior_stairs_01_a);
	DELE_PTR_FULL(bld_tvn_drapes_01_a);
	DELE_PTR_FULL(bld_tvn_chimney_awning_01_a);
	DELE_PTR_FULL(bld_tvn_wood_details_01_b);
	DELE_PTR_FULL(cmn_candle_01_c);
	DELE_PTR_FULL(cmn_candle_01_d);
	DELE_PTR_FULL(cmn_candle_01_e);
	DELE_PTR_FULL(bld_tvn_bar_barrels_01_b_02);
	DELE_PTR_FULL(bld_tvn_bar_barrels_01_a_2);
	DELE_PTR_FULL(bld_tvn_beam_sail_cloth_01_b);
	DELE_PTR_FULL(bld_tvn_bar_arches_01_a);
	DELE_PTR_FULL(bld_tvn_bar_top_01_a);
	DELE_PTR_FULL(bld_tvn_chandelier_01_a_2);
	DELE_PTR_FULL(bld_tvn_ceiling_rose_01_a_2);
	DELE_PTR_FULL(bld_tvn_bar_barrels_01_b_2);
	DELE_PTR_FULL(bld_tvn_roof_window_01_a_2);
	DELE_PTR_FULL(bld_tvn_veranda_01_a);
	DELE_PTR_FULL(bld_tvn_stone_chimney_top_01_a);
	DELE_PTR_FULL(bld_tvn_stone_chimney_base_01_a);
	DELE_PTR_FULL(bld_tvn_roof_window_01_a);
	DELE_PTR_FULL(bld_tvn_metal_chimney_01_a);
	DELE_PTR_FULL(bld_tvn_exterior_stairs_01_a);
	DELE_PTR_FULL(bld_tvn_chandelier_01_a);
	DELE_PTR_FULL(bld_tvn_ceiling_rose_01_a);
	DELE_PTR_FULL(bld_tvn_bar_racks_01_a);
	DELE_PTR_FULL(bld_tvn_bar_base_01_a);
	DELE_PTR_FULL(bld_tvn_bar_barrels_01_b);
	DELE_PTR_FULL(bld_tvn_bar_barrels_01_a);
	DELE_PTR_FULL(bld_tavern_roof_01_a);
	DELE_PTR_FULL(bld_tvn_rug_01_a2);
	DELE_PTR_FULL(bld_tvn_rug_01_a1);
	DELE_PTR_FULL(cmn_stool_01_a3);
	DELE_PTR_FULL(cmn_stool_01_a1);
	DELE_PTR_FULL(bld_tvn_post_01_c1);
	DELE_PTR_FULL(bld_tvn_post_01_c);
	DELE_PTR_FULL(bld_tvn_post_01_b);
	DELE_PTR_FULL(bld_tvn_rug_01_a);
	DELE_PTR_FULL(bld_tvn_animal_rug_01_a);
	DELE_PTR_FULL(cmn_stool_01_a);
	DELE_PTR_FULL(bld_tvn_beam_sail_cloth_01_a);
	DELE_PTR_FULL(bld_tvn_post_01_a);
	DELE_PTR_FULL(bld_tvn_bench_01_a1);
	DELE_PTR_FULL(bld_tvn_bench_01_a);
	DELE_PTR_FULL(bld_tvn_low_arch_01_a);
	DELE_PTR_FULL(bld_tvn_round_table_01_a);
	DELE_PTR_FULL(bld_tvn_table_01_a);
	DELE_PTR_FULL(bld_tvn_exterior_door_01_a2);
	DELE_PTR_FULL(bld_tvn_wood_holder_01_a);
	DELE_PTR_FULL(bld_tvn_fireplace_grate_01_a);
	DELE_PTR_FULL(bld_tvn_exterior_door_01_a1);
	DELE_PTR_FULL(bld_tvn_exterior_door_01_a);
	DELE_PTR_FULL(bld_tvn_window_01_b5);
	DELE_PTR_FULL(bld_tvn_window_01_b4);
	DELE_PTR_FULL(bld_tvn_window_01_b3);
	DELE_PTR_FULL(bld_tvn_window_01_a1);
	DELE_PTR_FULL(bld_tvn_window_01_b2);
	DELE_PTR_FULL(bld_tvn_window_01_b1);
	DELE_PTR_FULL(bld_tvn_window_01_b);
	DELE_PTR_FULL(bld_tvn_window_01_c);
	DELE_PTR_FULL(bld_tvn_window_01_a);
	DELE_PTR_FULL(bld_tvn_fireplace_rail_01_a);
	DELE_PTR_FULL(bld_tvn_fireplace_plinth_01_a);
	DELE_PTR_FULL(bld_tvn_fireplace_surround_01_a);
	DELE_PTR_FULL(bld_tavern_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif