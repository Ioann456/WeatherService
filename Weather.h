#pragma once
#include <string>
#include <iostream>

class Weather
{
private:
	std::string city; //  Киров
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	std::string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100
public:
	Weather();
	Weather(std::string city, double lon, double lat, double temp, std::string weath, double windspeed, int clouds) : city(city), lon(lon), lat(lat), temperature(temp), weather(weath), windSpeed(windspeed), clouds(clouds) {};
	void weatherstatus();
};

