#pragma once
#include "Punto.h"
#include "Shape.h"

class Cuadrado : public Shape
{
private:
	Punto _init;
	Punto _final;
public:
	Cuadrado();
	Cuadrado(Punto init, Punto fin);
	~Cuadrado();
	ShapeType getTypeShape();
	void printShape() {
		std::cout << "Soy un cuadrado" << std::endl;
	}
};
//-----------------------------------------------
Cuadrado::Cuadrado()
{
	std::cout << "Creado Cuadrado1" << std::endl;
}
Cuadrado::Cuadrado(Punto init, Punto fin)
{
	std::cout << "Creado Cuadrado2" << std::endl;
}

Cuadrado::~Cuadrado()
{
}

ShapeType Cuadrado::getTypeShape()
{	
	return ShapeType::Square;
}
