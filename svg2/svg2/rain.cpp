#include "pch.h"
#include "rain.h"

int rain::rain_counter = 0;
void rain::startRaining()
{
	fill = "blue";
}

void rain::endRaining()
{
	fill = "none";
}
