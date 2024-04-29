#include "Weather.h"


Weather::Weather()
{
	city = "Kirov";
	lon = 49.6601;
	lat = 58.5966;
	temperature = 5.69;
	weather = "rainy";
	windSpeed = 4.27;
	clouds = 100;
}

void Weather::weatherstatus()
{
	std::cout << "City " << city << " ,lon " << lon << " ,lat " << lat << " ,temperature " << temperature << " ,weather " << weather << " ,wind speed " << windSpeed << " ,clouds " << clouds;
}
