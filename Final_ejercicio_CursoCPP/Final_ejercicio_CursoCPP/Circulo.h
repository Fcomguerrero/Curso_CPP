#pragma once
#include "Punto.h"
#include "Shape.h"

class Circulo : public Shape
{
private:
	Punto _centro;
	int _radio;
public:
	Circulo();
	~Circulo();
	ShapeType getTypeShape();
	void printShape() {
		std::cout << "Soy un circulo" << std::endl;
	}
};
//-----------------------------------------------
Circulo::Circulo()
{
	std::cout << "Creado Circulo" << std::endl;
	_radio = 0;
}

Circulo::~Circulo()
{
}

ShapeType Circulo::getTypeShape()
{
	return ShapeType::Circle;
}