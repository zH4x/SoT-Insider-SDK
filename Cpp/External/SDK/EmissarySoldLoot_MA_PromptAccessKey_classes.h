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

// BlueprintGeneratedClass EmissarySoldLoot_MA_PromptAccessKey.EmissarySoldLoot_MA_PromptAccessKey_C
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UEmissarySoldLoot_MA_PromptAccessKey_C : public UPromptCounterAccessKey
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EmissarySoldLoot_MA_PromptAccessKey.EmissarySoldLoot_MA_PromptAccessKey_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
