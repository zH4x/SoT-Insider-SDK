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

// BlueprintGeneratedClass BP_tls_bucket_smp_01_a_Wieldable.BP_tls_bucket_smp_01_a_Wieldable_C
// 0x0000 (FullSize[0x08B0] - InheritedSize[0x08B0])
class ABP_tls_bucket_smp_01_a_Wieldable_C : public ABP_Bucket_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_tls_bucket_smp_01_a_Wieldable.BP_tls_bucket_smp_01_a_Wieldable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
