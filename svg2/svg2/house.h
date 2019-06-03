#pragma once
#include <string>

#include "chimney.h"
#include "rectangle.h"
#include "window.h"
#include "rain.h"

class house:public virtual rectangle
{
private:
	const static int rain_tab_size = 5;
	std::string header_svg;
	int draw_counter = 0;
	void set_header_svg();
public:
	house(int x, int y, int width, int height, std::string colour);
	chimney chimney1 = chimney(320, 170, 30, 30, "brown");
	window window1=window(230,240,50,50,"yellow");
	window window2 = window(320, 240, 50, 50, "yellow");
	rain rain1[rain_tab_size];
	void turn_on_light();
	void turn_off_light();

	void paint_walls(std::string colour);

	void draw_house(std::string filename="proe.svg");
};