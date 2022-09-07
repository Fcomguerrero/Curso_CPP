#pragma once
#include "Color.h"

class ForeColor : public Color
{
private:
	unsigned char _r = 255;
	unsigned char _g = 255;
	unsigned char _b = 255;
public:
	ForeColor();
	ForeColor(unsigned char r, unsigned char g, unsigned char b);
	~ForeColor();
};
ForeColor::ForeColor()
{
	std::cout << "Creado FRColor" << std::endl;
	_r = 255;
	_g = 255;
	_b = 255;
}
ForeColor::ForeColor(unsigned char r, unsigned char g, unsigned char b)
{
	std::cout << "Creado FRColor_2" << std::endl;
	_r = r;
	_g = g;
	_b = b;
}

ForeColor::~ForeColor()
{
}
