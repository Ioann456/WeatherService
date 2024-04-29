#include <iostream>
#include "XmlService.h"
#include "Weather.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
    w.weatherstatus();
}