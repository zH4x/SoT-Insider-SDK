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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_CollectorOfLegendaryChalices.Title_CollectorOfLegendaryChalices_C
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UTitle_CollectorOfLegendaryChalices_C : public UTitleDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Title_CollectorOfLegendaryChalices.Title_CollectorOfLegendaryChalices_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
