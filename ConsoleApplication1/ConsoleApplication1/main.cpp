#include <iostream>
#include "Car.h"

int main()
{
    Car car = Car("red");
    Car car1 = Car("blue");

    cout << "color de mi coche  -->  " << car.getColor() << "\n";
    cout << "igual color -->  " << car1.equals(car) << "\n";
    cout << "son iguales coches -->  " << car1.equals(&car) << "\n";
    cout << "direcciones memoria: \n"<<"Car --> " << &car <<"\n" << "Car1 --> " << &car1 << "\n";

    return 0;
}