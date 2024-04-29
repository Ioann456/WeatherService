#pragma once
#include "Service.h"
#include <iostream>
#include <fstream>

class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};


