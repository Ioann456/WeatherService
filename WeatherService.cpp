#include <iostream>
#include "JsonService.h"
#include "Weather.h"
#include "json.hpp"
#include "XmlService.h"
#include "Weather.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
    w.weatherstatus();
	JsonService js;
	Weather p = js.getWeather("weather.json");
	return 0;
}