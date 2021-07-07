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
// Parameters
//---------------------------------------------------------------------------

// Function AnimNotify_ChangePromptsVisibility.AnimNotify_ChangePromptsVisibility_C.GetNotifyName
struct UAnimNotify_ChangePromptsVisibility_C_GetNotifyName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AnimNotify_ChangePromptsVisibility.AnimNotify_ChangePromptsVisibility_C.Received_Notify
struct UAnimNotify_ChangePromptsVisibility_C_Received_Notify_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimSequenceBase*                           Animation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
