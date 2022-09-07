#pragma once
class Punto
{
private:
	int _x;
	int _y;
public:
	Punto();
	Punto(int x, int y);
	~Punto();
};

Punto::Punto()
{
	std::cout << "Creado Punto_1" << std::endl;
	_x = 0;
	_y = 0;
}
Punto::Punto(int x,int y)
{
	std::cout << "Creado Punto_2" << std::endl;
	_x = x;
	_y = y;
}

Punto::~Punto()
{
}