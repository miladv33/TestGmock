#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "MyService.h"
#include "PlayTimer.h"
#include "MockMyService.h"

using namespace std;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;


TEST(GetTime, ServiceTest) {
	//arrange
	MockService serviceTest;
	//act 
	long number = serviceTest.getNumber();
	//assert
	EXPECT_EQ(number, 0);
}

TEST(GetTime, ServiceTestWithMock) {
	//arrange
	MockService serviceTest;
	EXPECT_CALL(serviceTest, getNumber()).Times(1).WillOnce(Return(1));
	//act 
	long number = serviceTest.getNumber();
	//assert
	EXPECT_EQ(number, 1);
}