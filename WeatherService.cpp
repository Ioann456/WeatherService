#include <iostream>
#include "JsonService.h"
#include "Weather.h"
#include "json.hpp"

int main()
{
	JsonService js;
	Weather w = js.getWeather("weather.json");
	return 0;
}