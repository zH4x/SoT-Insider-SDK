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
// Script Structs
//---------------------------------------------------------------------------

// AnimDataEntryStruct ADS_SkeletonSensing.ADS_SkeletonSensing
// 0x0010
struct FADS_SkeletonSensing
{
	TArray<struct FAthenaAnimationSkeletonSensingAnimations> SkeletonSensing_8_C3B3D3934CED931AA0DDF4BFE901E9B0;        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
