#pragma once
#include "Service.h"
#include "Weather.h"
#include <iostream>
#include <fstream>
#include "nlohmann/json.hpp"
#include "nlohmann/json_fwd.hpp"
using nlohmann::json;
class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};


