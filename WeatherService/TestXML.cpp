#include "XmlService.h"
int mainXML() {

	XmlService xs;
	Weather w = xs.getWeather("weather.xml");
	w.PrintWeather();
	return 0;
}