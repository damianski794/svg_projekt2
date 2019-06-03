#pragma once
#include <string>
#include "rectangle.h"
class window:public virtual rectangle
{
public:
	window(int x,int y,int width, int height,std::string colour):rectangle(x,y,width,height,colour){}
	void closeCurtains();
	void liftCurtains();
};