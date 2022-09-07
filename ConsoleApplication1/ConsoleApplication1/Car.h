#pragma once
#include <string>
using namespace std;

class Car{

private:
    string _color;
public:
    Car(string color);
    string getColor();
    bool equals(Car car);
    bool equals(Car* car);
};