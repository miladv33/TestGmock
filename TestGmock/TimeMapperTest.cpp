#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "TimerMapper.h"
using namespace std;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

TEST(TimerMapper, getTimerToShowToTheUser) {
	//arrange
	TimerMapper timerMapper;
	

	//act
	string remainTimeToShow = timerMapper.mapToStringTimer(12);

	//assert
	EXPECT_EQ(remainTimeToShow, "00:00:12");
}