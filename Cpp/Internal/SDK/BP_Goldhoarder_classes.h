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

// BlueprintGeneratedClass BP_Goldhoarder.BP_Goldhoarder_C
// 0x0028 (FullSize[0x05E0] - InheritedSize[0x05B8])
class ABP_Goldhoarder_C : public ACompanyShopkeeper
{
public:
	class UEmissaryMaxRankQuestProvider*               EmissaryMaxRankQuestProvider;                              // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCapsuleComponent*                           SolidHits;                                                 // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UNPCDialogComponent*                         NPCDialog;                                                 // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                    // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Goldhoarder.BP_Goldhoarder_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
