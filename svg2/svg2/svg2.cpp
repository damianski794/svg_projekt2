// svg2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>
#include <iostream>
#include "house.h"
#include "rain.h"
#include "animate.h"
using namespace std;
int main()
{
	animation a1;
	a1.animaction();
	/*
	house house1(200, 200, 200, 200, "green");
	house1.draw_house();	// 1. klatka

	house1.turn_off_light();
	house1.draw_house(); // 2. klatka

	house1.turn_on_light();
	house1.draw_house();  // 3. klatka

	house1.paint_walls("purple");
	house1.draw_house(); // 4.klatka

	for (int i = 0; i < rain::get_rain_counter(); i++)
	{
		house1.rain1[i].y += 50;
		house1.rain1[i].startRaining();
	}
	house1.draw_house(); // 5. klatka

	for (int i = 0; i < rain::get_rain_counter(); i++)
		house1.rain1[i].y += 100;
	house1.draw_house(); // 6. klatka

	for (int i = 0; i < rain::get_rain_counter(); i++)
		house1.rain1[i].y += 150;
	house1.draw_house(); // 7. klatka 
	*/
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
