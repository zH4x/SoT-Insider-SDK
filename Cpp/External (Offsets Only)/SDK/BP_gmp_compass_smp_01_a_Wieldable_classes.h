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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_gmp_compass_smp_01_a_Wieldable.BP_gmp_compass_smp_01_a_Wieldable_C
// 0x0000 (FullSize[0x0858] - InheritedSize[0x0858])
class ABP_gmp_compass_smp_01_a_Wieldable_C : public ABP_Compass_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_gmp_compass_smp_01_a_Wieldable.BP_gmp_compass_smp_01_a_Wieldable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
