#pragma once
#include <iostream>
#include <string>
#include "Color.h"
#include "ForeColor.h"
#include "BackGroundColor.h"
#include "Punto.h"
#include "Rectangulo.h"
#include "Shape.h"

using namespace std;

template <typename T, typename... Args>
T* CreateNew(Args&&... args) {
	return new T(std::forward<Args>(args)...);
};

class ToolBar{
	private:
		//map<string,funtion>
		//map<>Color
	public:
		ToolBar();
		~ToolBar();
		void create(Rectangulo type, Punto initpoint, Punto finalpoint, ForeColor forecolor, BackGroundColor backgroundcolor);
		Shape* getShape(string shape);
		void ApplyForeColor(ShapeType type, Color color);
		void ApplyBackgroundColor(ShapeType type, Color color);
};

ToolBar::ToolBar(){}

void ToolBar::create(Rectangulo type, Punto initpoint, Punto finalpoint,
	ForeColor forecolor, BackGroundColor backgroundcolor) {
	
	auto createPunto1 = [&]() {
		return CreateNew<Punto>(initpoint);
	};
	auto createPunto2 = [&]() {
		return CreateNew<Punto>(finalpoint);
	};
	auto createShape = [&]() {
		 return CreateNew<Rectangulo>(type);
	};
	auto createForecolor = [&]() {
		return CreateNew<ForeColor>(forecolor);
	};
	auto createBackColor = [&]() {
		return CreateNew<BackGroundColor>(backgroundcolor);
	};

	auto p1 = createPunto1();
	auto p2 = createPunto2();
	auto sh = createShape();
	auto fcolor = createForecolor();
	auto bColor = createBackColor();
}

ToolBar::~ToolBar()
{
}

Shape* ToolBar::getShape(string type)
{
	return 0;
}
void ToolBar::ApplyForeColor(ShapeType type, Color color) {
		
	//return type;
}
void ToolBar::ApplyBackgroundColor(ShapeType type, Color color) {

	//return type;
}