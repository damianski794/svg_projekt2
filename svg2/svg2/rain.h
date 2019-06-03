#pragma once
#include "rectangle.h"
class rain :public rectangle
{
	static int rain_counter;
public:
	rain(int x = 50 + 100 * rain_counter, int y = 50, int width = 50, int height = 50, std::string colour = "none") :rectangle(x, y, width, height, colour) { rain_counter++; }
	~rain() { rain_counter--; }
	void startRaining();
	void endRaining();

	static int get_rain_counter() { return rain_counter; }
};