#pragma once
#include <string>
#include "rectangle.h"
class chimney:public virtual rectangle
{
public:
	chimney(int x, int y, int width, int height, std::string colour) :rectangle(x,y,width,height,colour) {}
};