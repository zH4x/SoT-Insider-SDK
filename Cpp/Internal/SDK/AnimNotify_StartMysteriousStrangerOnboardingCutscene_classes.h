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

// BlueprintGeneratedClass AnimNotify_StartMysteriousStrangerOnboardingCutscene.AnimNotify_StartMysteriousStrangerOnboardingCutscene_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAnimNotify_StartMysteriousStrangerOnboardingCutscene_C : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_StartMysteriousStrangerOnboardingCutscene.AnimNotify_StartMysteriousStrangerOnboardingCutscene_C");
		return ptr;
	}



	struct FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
