#pragma once
#include "Repository.h"
#include "service.h"

class MockRepository:public Repository {
	Service& service;
	public:
		MockRepository(Service& _service) :service(_service){};
};