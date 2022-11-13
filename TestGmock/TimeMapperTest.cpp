#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "MockTimerMapper.h"
using namespace std;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

TEST(getTimerToShowToTheUser, TimerMapper) {
	//arrange
	MockTimerMapper timerMapper;

	//act
	string remainTimeToShow = timerMapper.mapToStringTimer(12);

	//assert
	EXPECT_EQ(remainTimeToShow, "00:00:12");
}