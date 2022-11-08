#pragma once
#include "Service.h"
class MockService :public Service {
public:
	MOCK_METHOD0(getNumber, long());
};