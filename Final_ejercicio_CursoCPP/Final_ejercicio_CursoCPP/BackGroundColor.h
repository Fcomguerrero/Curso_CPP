#pragma once
class BackGroundColor
{
private:
	unsigned char _r = 0;
	unsigned char _g = 0;
	unsigned char _b = 0;
public:
	BackGroundColor();
	BackGroundColor(unsigned char r, unsigned char g, unsigned char b);
	~BackGroundColor();
};
BackGroundColor::BackGroundColor()
{
	std::cout << "Creado BGColor" << std::endl;
	_r = 0;
	_g = 0;
	_b = 0;
}
BackGroundColor::BackGroundColor(unsigned char r, unsigned char g, unsigned char b)
{
	std::cout << "Creado BGColor_2" << std::endl;
	_r = r;
	_g = g;
	_b = b;
}

BackGroundColor::~BackGroundColor()
{
}
