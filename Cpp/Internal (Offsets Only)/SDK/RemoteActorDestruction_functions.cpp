// Name: SoT-Insider, Version: 1.102.2382.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyExistingActors
// (Native, Public, HasOutParms)
// Parameters:
// TArray<class UClass*>          ClassesToDestroy               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
void URemoteActorDestructionInterface::DestroyExistingActors(TArray<class UClass*> ClassesToDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyExistingActors");

	URemoteActorDestructionInterface_DestroyExistingActors_Params params;
	params.ClassesToDestroy = ClassesToDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyActor
// (Native, Public, HasOutParms)
// Parameters:
// struct FDestroyActorData       DestroyActorData               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void URemoteActorDestructionInterface::DestroyActor(const struct FDestroyActorData& DestroyActorData)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyActor");

	URemoteActorDestructionInterface_DestroyActor_Params params;
	params.DestroyActorData = DestroyActorData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
