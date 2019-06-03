#include "pch.h"
#include "animate.h"
#include <string>
#include <iostream>
#include <fstream>
void animation::draw_frame(std::string filename = "proe.svg")
{
	std::string tytul("<svg xmlns=\"http://www.w3.org/2000/svg\" xmlns:se=\"http://svg-edit.googlecode.com\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xmlns:dc=\"http://purl.org/dc/elements/1.1/\" xmlns:cc=\"http://creativecommons.org/ns#\" xmlns:rdf=\"http://www.w3.org/1999/02/22-rdf-syntax-ns#\" xmlns:inkscape=\"http://www.inkscape.org/namespaces/inkscape\" width=\"777\" height=\"480\">");
	//set_header_svg(); //skopiuj pierwsza linie z pliku projekt proe do header_svg

	filename = std::to_string(draw_counter + 1) + "_" + filename;
	std::ofstream file;
	file.open(".//..//pliki_svg//" + filename);
	if (file.is_open())
		std::cout << "otworzono plik svg do zapisu" << std::endl;
	else
		std::cout << "blad otwarcia pliku" << std::endl;
	using namespace std;
	file << tytul << endl;
	cout << "wspolrzedna X domu to: " << this->house1.x << endl;
	//file << endl;
	//file << "dziala?" << endl;
	file << "<rect x=\"" << this->house1.x << "\" y=\"" << this->house1.y << "\" width=\"" << this->house1.width << "\" height=\"" << this->house1.height << "\" fill=\"" << this->house1.fill << "\" /><!--house-->" << endl;
	file << "<rect x=\"" << this->chimney1.x << "\" y=\"" << this->chimney1.y << "\" width=\"" << this->chimney1.width << "\" height=\"" << this->chimney1.height << "\" fill=\"" << this->chimney1.fill << "\" /><!--chimney-->" << endl;
	file << "<rect x=\"" << this->window1.x << "\" y=\"" << this->window1.y << "\" width=\"" << this->window1.width << "\" height=\"" << this->window1.height << "\" fill=\"" << this->window1.fill << "\" /><!--window1-->" << endl;
	file << "<rect x=\"" << this->window2.x << "\" y=\"" << this->window2.y << "\" width=\"" << this->window2.width << "\" height=\"" << this->window2.height << "\" fill=\"" << this->window2.fill << "\" /><!--window2-->" << endl;

	for (int i = 0; i < rain_tab_size; i++)
		file << "<rect x=\"" << this->rain1[i].x << "\" y=\"" << this->rain1[i].y << "\" width=\"" << this->rain1[i].width << "\" height=\"" << this->rain1[i].height << "\" fill=\"" << this->rain1[i].fill << "\" /><!--rain-->" << endl;
	file << "</svg>";

	file.close();
	++draw_counter;
}

void animation::animaction()
{
	chimney chimney1 = chimney(320, 170, 30, 30, "brown");
	window window1 = window(230, 240, 50, 50, "yellow");
	window window2 = window(320, 240, 50, 50, "yellow");
	const static int rain_tab_size = 5;
	rain rain1[rain_tab_size];
	house house1 = house(200, 200, 200, 200, "green");
	
	animacja.push_back(&house1);
	
	//
	house1.draw_house();	// 1. klatka

	house1.turn_off_light();
	house1.draw_house(); // 2. klatka

	house1.turn_on_light();
	house1.draw_house();  // 3. klatka

	house1.paint_walls("purple");
	house1.draw_house(); // 4.klatka

	/*
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
