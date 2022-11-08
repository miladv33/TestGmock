#include "service.h"
class Repository {
	Service& service;
public:
	Repository(Service& _service) :service(_service) {};
	long getRemainTime();
};
