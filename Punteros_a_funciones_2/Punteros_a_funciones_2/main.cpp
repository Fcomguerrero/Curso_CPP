#include <iostream>

using namespace std;


int foo(int a, int b) {
    return a + b;
}
void print(int resultado) {
    cout << resultado << endl;
}
void food(int a, int b) {
    int x = foo(a, b);
    print(x);

}
//-----------------------------------
int main()
{
    void (*ptr_afuncion)(int, int);  //declaracion de puntero a funcion
    ptr_afuncion = &food;           //inicializamos el puntero
    void (**ppf)(int, int) = &ptr_afuncion;  // puntero-a-puntero-a-funci�n

    food(5, 3);                      // invocaci�n est�ndar
    (*food)(5, 3);                   // invocaci�n mediante puntero
    (**ppf)(5, 3);
    (*ptr_afuncion)(5, 3);           // invocaci�n mediante puntero
    ptr_afuncion(5, 3);              // Otra forma de invocaci�n mediante puntero :  es imposible saber que la invocaci�n de la funci�n no es directa, sino indirecta (a trav�s de un puntero).
    //--------------------------------------------------------------------
    int (*ptr)(int, int) = &foo;     //declaracion de puntero a funcion e inicializacion
    cout << ptr(78, 89) << endl;        // Otra forma de invocaci�n mediante puntero  : es imposible saber que la invocaci�n de la funci�n no es directa, sino indirecta (a trav�s de un puntero).
    //--------------------------------------------------------------------
    void (*ptr_aprint)(int);        //declaracion de puntero a funcion
    ptr_aprint = print;             //inicializamos el puntero con & � sin �l & (dos formas)
    (*ptr_aprint)(333);             // invocaci�n mediante puntero

    return 0;
}