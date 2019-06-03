#include "pch.h"
#include "house.h"
#include <fstream>
#include <cstdlib>
#include <iostream>


void house::set_header_svg()
{
	std::fstream file2;
	file2.open(".//..//..//projekt_proe.svg", std::ios::in);
	if (file2.is_open())
		std::cout << "otwarto plik svg" << std::endl;
	std::getline(file2, header_svg);
	//std::cout << "otwarto plik svg, a to header_svg::" << std::endl << std::endl << header_svg;

	file2.close();
}

house::house(int x, int y, int width, int height, std::string colour):rectangle(x,y,width,height,colour){}

void house::turn_on_light()
{
	window1.liftCurtains();
	window2.liftCurtains();
}

void house::turn_off_light()
{
	window1.closeCurtains();
	window2.closeCurtains();
}

void house::paint_walls(std::string colour)
{
	this->fill = colour;
}

void house::draw_house(std::string filename)
{
	std::string tytul("<svg xmlns=\"http://www.w3.org/2000/svg\" xmlns:se=\"http://svg-edit.googlecode.com\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xmlns:dc=\"http://purl.org/dc/elements/1.1/\" xmlns:cc=\"http://creativecommons.org/ns#\" xmlns:rdf=\"http://www.w3.org/1999/02/22-rdf-syntax-ns#\" xmlns:inkscape=\"http://www.inkscape.org/namespaces/inkscape\" width=\"777\" height=\"480\">");
	//set_header_svg(); //skopiuj pierwsza linie z pliku projekt proe do header_svg

	filename = std::to_string(draw_counter+1)+"_"+ filename;
	std::ofstream file;
	file.open(".//..//pliki_svg//" + filename);
	if (file.is_open())
		std::cout << "otworzono plik svg do zapisu" << std::endl;
	else
		std::cout << "blad otwarcia pliku" << std::endl;
	using namespace std;
	file << tytul << endl;
	cout << "wspolrzedna X domu to: " << this->x << endl;
	//file << endl;
	//file << "dziala?" << endl;
	file << "<rect x=\"" << this->x << "\" y=\"" << this->y << "\" width=\"" << this->width << "\" height=\"" << this->height << "\" fill=\"" << this->fill << "\" /><!--house-->" << endl;
	file << "<rect x=\"" << this->chimney1.x << "\" y=\"" << this->chimney1.y << "\" width=\"" << this->chimney1.width << "\" height=\"" << this->chimney1.height << "\" fill=\"" << this->chimney1.fill << "\" /><!--chimney-->" << endl;
	file << "<rect x=\"" << this->window1.x << "\" y=\"" << this->window1.y << "\" width=\"" << this->window1.width << "\" height=\"" << this->window1.height << "\" fill=\"" << this->window1.fill << "\" /><!--window1-->" << endl;
	file << "<rect x=\"" << this->window2.x << "\" y=\"" << this->window2.y << "\" width=\"" << this->window2.width << "\" height=\"" << this->window2.height << "\" fill=\"" << this->window2.fill << "\" /><!--window2-->" << endl;

	for(int i=0;i<rain_tab_size;i++)
		file << "<rect x=\"" << this->rain1[i].x << "\" y=\"" << this->rain1[i].y << "\" width=\"" << this->rain1[i].width << "\" height=\"" << this->rain1[i].height << "\" fill=\"" << this->rain1[i].fill << "\" /><!--rain-->" << endl;
	file << "</svg>";
	
	file.close();
	++draw_counter;
}
