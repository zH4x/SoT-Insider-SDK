#pragma once

// Name: SoT-Insider, Version: 1.102.2382.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Music.EAISpawnerMusicZoneState
enum class Music_EAISpawnerMusicZoneState : uint8_t
{
	EAISpawnerMusicZoneState__Passive = 0,
	EAISpawnerMusicZoneState__InCombat = 1,
	EAISpawnerMusicZoneState__BattleWon = 2,
	EAISpawnerMusicZoneState__EAISpawnerMusicZoneState_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Music.MusicZoneDestroyedEvent
// 0x0010
struct FMusicZoneDestroyedEvent
{
	unsigned char                                      UnknownData_M01C[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Music.MusicZoneSpawnedEvent
// 0x0010
struct FMusicZoneSpawnedEvent
{
	unsigned char                                      UnknownData_8BWF[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
