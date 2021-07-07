﻿#pragma once

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

// Enum SafeZoneReservationFramework.ESafeZoneState
enum class SafeZoneReservationFramework_ESafeZoneState : uint8_t
{
	ESafeZoneState__Initial        = 0,
	ESafeZoneState__Activated      = 1,
	ESafeZoneState__Deactivated    = 2,
	ESafeZoneState__ESafeZoneState_MAX = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
