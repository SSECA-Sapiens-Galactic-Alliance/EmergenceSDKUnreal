// Copyright Crucible Networks Ltd 2023. All Rights Reserved.

#include "EmergenceCancelableAsyncBase.h"

void UEmergenceCancelableAsyncBase::Cancel()
{
}

bool UEmergenceCancelableAsyncBase::IsActive() const
{
	return true;
}

bool UEmergenceCancelableAsyncBase::ShouldBroadcastDelegates() const
{
	return true;
}

