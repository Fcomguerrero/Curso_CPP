#pragma once
#include <iostream>
#include <string>
#include "Color.h"

using namespace std;

enum class ShapeType { Circle, Square, Rectangle };

class Shape
{
private:
	Color _applyforeColor;
	Color _applybackgroundcolor;
	string uuid;
public:
	Shape();
	~Shape();
	virtual ShapeType getTypeShape() = 0;
	virtual void printShape() = 0;
	void applybackgroundcolor(ShapeType type, Color color);
	void applyforecolor(ShapeType type, Color color);
};
//-----------------------------------------------
Shape::Shape()
{
	std::cout << "Creado Shape" << std::endl;
	uuid = "xxxxxxxxxx";
}

Shape::~Shape()
{
}