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

void FCrewTrackedItemOwnershipChanged::AfterRead()
{
	READ_PTR_FULL(Item, AActor);
}

void FCrewTrackedItemOwnershipChanged::BeforeDelete()
{
	DELE_PTR_FULL(Item);
}

void FOwnerListEntry::AfterRead()
{
}

void FOwnerListEntry::BeforeDelete()
{
}

void FTrackItemOwnershipEvent::AfterRead()
{
	READ_PTR_FULL(TrackedItem, AActor);
}

void FTrackItemOwnershipEvent::BeforeDelete()
{
	DELE_PTR_FULL(TrackedItem);
}

void FCrewTrackedItemOwnershipSet::AfterRead()
{
	READ_PTR_FULL(Item, AActor);
}

void FCrewTrackedItemOwnershipSet::BeforeDelete()
{
	DELE_PTR_FULL(Item);
}

void UCrewOwnershipTrackingInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCrewOwnershipTrackingInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCrewSpawnOwnershipTrackingInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCrewSpawnOwnershipTrackingInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCustomCrewTrackingInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCustomCrewTrackingInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCrewOwnershipTrackingComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UCrewOwnershipTrackingComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UCrewOwnershipTrackingControlInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCrewOwnershipTrackingControlInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
