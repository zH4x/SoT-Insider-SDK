﻿// Name: SoT-Insider, Version: 1.102.2382.0

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

void UMockPostPhysicsTickerComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UMockPostPhysicsTickerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UPostPhysicsTickerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPostPhysicsTickerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif