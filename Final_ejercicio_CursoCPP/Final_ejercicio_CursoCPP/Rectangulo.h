#pragma once
#include "Punto.h"
#include "Shape.h"

class Rectangulo : public Shape
{
private:
	Punto _init;
	Punto _final;
public:
	Rectangulo();
	Rectangulo(Punto p1, Punto p2);
	~Rectangulo();
	ShapeType getTypeShape();
	void printShape() {
		std::cout << "Soy un rectangulo" << std::endl;
	}
};
//-----------------------------------------------
Rectangulo::Rectangulo()
{
	std::cout << "Creado Rectangulo" << std::endl;
}

Rectangulo::Rectangulo(Punto p1, Punto p2)
{
	std::cout << "Creado Rectangulo con puntos" << std::endl;
}

Rectangulo::~Rectangulo()
{
}

ShapeType Rectangulo::getTypeShape()
{
	return ShapeType::Rectangle;
}