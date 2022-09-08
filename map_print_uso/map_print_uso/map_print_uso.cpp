#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	map<int, string> Students;
	//diferentes formas de insertar valores insert() requiere pair

	typedef pair<int, string> My_pair;
	
	Students.insert(std::pair<int, string>(200, "Alice"));
	auto success0 = Students.insert({ 0,"cero" });    //insert devulve true o false si la insercion es correcta
	auto success1 = Students.insert(My_pair(1, "lunes"));		//typedef pair (My_pair) ver linea 11
	auto success2 = Students.insert(make_pair(2, "martes"));
	auto success3 = Students.insert(pair<int, string>(3, "miercoles"));
	auto success4 = Students.insert(map<int, string>::value_type(4, "jueves"));
	auto success5 = Students.emplace(make_pair(5, "viernes"));
	auto success6 = Students.emplace(pair<int, string>(6, "sabado"));
	auto success7 = Students.emplace(map<int, string>::value_type(7, "domingo"));
	auto success8 = Students.emplace(My_pair(8, "otrodia_1"));   //typedef pair (My_pair) ver linea 11
	auto success9 = Students.emplace(9, "otrodia_2");
	auto success10 = Students[10] = "otrodia_3";

	//acceso con iterator para buscar un elemento e imprimir por pantalla
	std::map<int, string>::iterator it = Students.find(201);
	if (it != Students.end()) {
		std::cout << endl << "Key 201 has the value: => " << Students.find(201)->second << '\n';
	}
	cout << "-------------------------------------------------------------" << endl;
	for (map<int, string>::iterator its = Students.begin(); its != Students.end(); its++) {

		cout << (*its).first << ": " << (*its).second << endl;
		cout << its->first << ": " << its->second << " <--" << endl;
	}
	cout << "-------------------------------------------------------------" << endl;
	map<int, string>::iterator itr = Students.begin();
	for (; itr != Students.end(); ++itr) {
		cout << itr->first << '\t' << itr->second << '\n';
	}
	cout << "-------------------------------------------------------------" << endl;
	if (Students.find(205) != Students.end()) {
		//if the element is found before the end of the map
		cout << "found Value -> " << Students[205] << endl;
		//if the element is present then you can access it using the index
	}
	else cout << " : Not found" << endl;
	cout << "-------------------------------------------------------------" << endl;


	return 0;
}
