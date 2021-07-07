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

void FEmissaryCompanyChangedEvent::AfterRead()
{
}

void FEmissaryCompanyChangedEvent::BeforeDelete()
{
}

void FEmissaryLedgerVisited::AfterRead()
{
}

void FEmissaryLedgerVisited::BeforeDelete()
{
}

void FEmissaryCompanyActionRewardBoostServiceEvent::AfterRead()
{
}

void FEmissaryCompanyActionRewardBoostServiceEvent::BeforeDelete()
{
}

void FEmissaryGlobalActionRewardBoostEvent::AfterRead()
{
	READ_PTR_FULL(GameEventType, UClass);
}

void FEmissaryGlobalActionRewardBoostEvent::BeforeDelete()
{
	DELE_PTR_FULL(GameEventType);
}

void FEmissaryGlobalActionRewardBoostServiceEvent::AfterRead()
{
	READ_PTR_FULL(FinishedEventType, UClass);
}

void FEmissaryGlobalActionRewardBoostServiceEvent::BeforeDelete()
{
	DELE_PTR_FULL(FinishedEventType);
}

void FEmissaryNonQuestCompanyActionRewardBoostEvent::AfterRead()
{
}

void FEmissaryNonQuestCompanyActionRewardBoostEvent::BeforeDelete()
{
}

void FEmissaryQuestCompanyActionRewardBoostEvent::AfterRead()
{
}

void FEmissaryQuestCompanyActionRewardBoostEvent::BeforeDelete()
{
}

void UEmissaryLevelServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UEmissaryLevelServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UEmissaryParticipantInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UEmissaryParticipantInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
