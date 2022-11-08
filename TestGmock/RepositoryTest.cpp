#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Repository.h"
#include "MockMyService.h"
using namespace std;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

TEST(readFromDataBasa, RepositoryTest) {
	MockService serviceTest;
	Repository repository(serviceTest);
	EXPECT_CALL(serviceTest, getNumber).Times(1).WillOnce(Return(1));
	
	//act
	long remainTime = repository.getRemainTime();
	
	//assert
	EXPECT_EQ(remainTime, 1);
}