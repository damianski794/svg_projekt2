#pragma once
#include <string>
class rectangle
{
public:
	int x; //top left corner, x
	int y; //top left corner, y
	int width;
	int height;
	std::string fill;

	rectangle();
	rectangle(int x_, int y_, int width_, int height_, std::string colour);

};