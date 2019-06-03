#include "pch.h"
#include <string>
#include "rectangle.h"

rectangle::rectangle():x(0),y(0),width(0),height(0),fill("")
{
}

rectangle::rectangle(int x_, int y_, int width_, int height_, std::string colour)
{
	x = x_;
	y = y_;
	width = width_;
	height = height_;
	fill = colour;
}
