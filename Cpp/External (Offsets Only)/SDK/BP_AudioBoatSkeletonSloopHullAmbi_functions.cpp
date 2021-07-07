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

// Function BP_AudioBoatSkeletonSloopHullAmbi.BP_AudioBoatSkeletonSloopHullAmbi_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AudioBoatSkeletonSloopHullAmbi_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioBoatSkeletonSloopHullAmbi.BP_AudioBoatSkeletonSloopHullAmbi_C.UserConstructionScript");

	ABP_AudioBoatSkeletonSloopHullAmbi_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AudioBoatSkeletonSloopHullAmbi_C::AfterRead()
{
	AShipHullAudio::AfterRead();

	READ_PTR_FULL(audio_creak_deck_centre, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_cabin_04, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_back_bridge_left, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_back_bridge_right, UShipAudioEmitterComponent);
	READ_PTR_FULL(DeckHole, UAudioPortalComponent);
	READ_PTR_FULL(audio_creak_deck_mid_left, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_deck_mid_right, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_cabin_03, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_skull_flame_cabin, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_brig_front_short, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_skull_flame_right, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_skull_flame_left, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_torch_flame_left, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_torch_flame_right, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_sail_flaps, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_wake_stern, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_wake_bow, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_wake_side_L, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_wake_side_R, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_deck_FL, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_deck_FR, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_deck_rope_front, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_brig_03, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_brig_02, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_back, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_brig_01, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_cabin_02, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_cabin_01, UShipAudioEmitterComponent);
	READ_PTR_FULL(audio_creak_smallship_global, UShipAudioEmitterComponent);
	READ_PTR_FULL(DeckGrille, UAudioPortalComponent);
	READ_PTR_FULL(BrigDeck, UAudioPortalComponent);
	READ_PTR_FULL(CaptainsCabin_Left, UAudioPortalComponent);
	READ_PTR_FULL(CaptainsCabin_Right, UAudioPortalComponent);
	READ_PTR_FULL(CaptainsCabin_Back, UAudioPortalComponent);
	READ_PTR_FULL(TopToCaptainsCabin, UAudioPortalComponent);
}

void ABP_AudioBoatSkeletonSloopHullAmbi_C::BeforeDelete()
{
	AShipHullAudio::BeforeDelete();

	DELE_PTR_FULL(audio_creak_deck_centre);
	DELE_PTR_FULL(audio_cabin_04);
	DELE_PTR_FULL(audio_creak_back_bridge_left);
	DELE_PTR_FULL(audio_creak_back_bridge_right);
	DELE_PTR_FULL(DeckHole);
	DELE_PTR_FULL(audio_creak_deck_mid_left);
	DELE_PTR_FULL(audio_creak_deck_mid_right);
	DELE_PTR_FULL(audio_creak_cabin_03);
	DELE_PTR_FULL(audio_skull_flame_cabin);
	DELE_PTR_FULL(audio_creak_brig_front_short);
	DELE_PTR_FULL(audio_skull_flame_right);
	DELE_PTR_FULL(audio_skull_flame_left);
	DELE_PTR_FULL(audio_torch_flame_left);
	DELE_PTR_FULL(audio_torch_flame_right);
	DELE_PTR_FULL(audio_sail_flaps);
	DELE_PTR_FULL(audio_wake_stern);
	DELE_PTR_FULL(audio_wake_bow);
	DELE_PTR_FULL(audio_wake_side_L);
	DELE_PTR_FULL(audio_wake_side_R);
	DELE_PTR_FULL(audio_creak_deck_FL);
	DELE_PTR_FULL(audio_creak_deck_FR);
	DELE_PTR_FULL(audio_creak_deck_rope_front);
	DELE_PTR_FULL(audio_creak_brig_03);
	DELE_PTR_FULL(audio_creak_brig_02);
	DELE_PTR_FULL(audio_creak_back);
	DELE_PTR_FULL(audio_creak_brig_01);
	DELE_PTR_FULL(audio_creak_cabin_02);
	DELE_PTR_FULL(audio_creak_cabin_01);
	DELE_PTR_FULL(audio_creak_smallship_global);
	DELE_PTR_FULL(DeckGrille);
	DELE_PTR_FULL(BrigDeck);
	DELE_PTR_FULL(CaptainsCabin_Left);
	DELE_PTR_FULL(CaptainsCabin_Right);
	DELE_PTR_FULL(CaptainsCabin_Back);
	DELE_PTR_FULL(TopToCaptainsCabin);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
