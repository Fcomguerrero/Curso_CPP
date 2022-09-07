#include <iostream>
#include "ToolBar.h"
#include "Shape.h"
#include "Punto.h"

using namespace std;

int main() {
	
	Punto init = Punto(0, 0);
	Punto fin = Punto(100, 100);
	Rectangulo restang = Rectangulo(init, fin);
	ForeColor forecolor = ForeColor();
	BackGroundColor backgroundcolor = BackGroundColor();

	ToolBar tb = ToolBar();
	
	tb.create(restang,init,fin,forecolor,backgroundcolor);
	

	cout << "test OK;" << endl;

	return 0;
}
