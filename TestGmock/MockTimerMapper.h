#pragma once
#include "TimerMapper.h"
#include <gmock/gmock.h>
class MockTimerMapper:public TimerMapper
{
public:
	MOCK_METHOD1(mapToStringTimer, string(long time));
};
