#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "rectangle.h"
#include "house.h"
#include "rain.h"
#include "window.h"
#include "chimney.h"
using namespace std;
//string tytul("<svg xmlns=\"http://www.w3.org/2000/svg\" xmlns:se=\"http://svg-edit.googlecode.com\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xmlns:dc=\"http://purl.org/dc/elements/1.1/\" xmlns:cc=\"http://creativecommons.org/ns#\" xmlns:rdf=\"http://www.w3.org/1999/02/22-rdf-syntax-ns#\" xmlns:inkscape=\"http://www.inkscape.org/namespaces/inkscape\" width=\"777\" height=\"480\">");
class animation {
	vector<rectangle*> animacja;
	chimney chimney1 = chimney(320, 170, 30, 30, "brown");
	window window1 = window(230, 240, 50, 50, "yellow");
	window window2 = window(320, 240, 50, 50, "yellow");
	const static int rain_tab_size = 5;
	rain rain1[rain_tab_size];
	house house1=house(200, 200, 200, 200, "green");

	int draw_counter = 0;
	void draw_frame(std::string filename);
public:
	void animaction();
};