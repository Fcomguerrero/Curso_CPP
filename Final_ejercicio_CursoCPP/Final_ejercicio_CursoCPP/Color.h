#pragma once

class Color
{
private:
	unsigned char _r = 0;
	unsigned char _g = 0;
	unsigned char _b = 0;
public:
	Color();
	Color(unsigned char r, unsigned char g, unsigned char b);
	~Color();
};
Color::Color()
{
	std::cout << "Creado Color_1" << std::endl;
	_r = 0;
	_g = 0;
	_b = 0;
}
Color::Color(unsigned char r, unsigned char g, unsigned char b)
{
	std::cout << "Creado Color_2" << std::endl;
	_r = r;
	_g = g;
	_b = b;
}

Color::~Color()
{
}
