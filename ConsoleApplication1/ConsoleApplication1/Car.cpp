#include "Car.h"

Car::Car(string color) {
    _color = color;
}

string Car::getColor() {
    return _color;
}
bool Car::equals(Car car) {
    return _color == car.getColor();
}
bool Car::equals(Car *car) {
    return this == car;
}
