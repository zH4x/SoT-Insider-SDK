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

// BlueprintGeneratedClass BP_ipg_costume_cgh_01_Desc.BP_ipg_costume_cgh_01_Desc_C
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UBP_ipg_costume_cgh_01_Desc_C : public UCostumeDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ipg_costume_cgh_01_Desc.BP_ipg_costume_cgh_01_Desc_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
