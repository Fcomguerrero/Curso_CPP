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
    void (**ppf)(int, int) = &ptr_afuncion;  // puntero-a-puntero-a-función

    food(5, 3);                      // invocación estándar
    (*food)(5, 3);                   // invocación mediante puntero
    (**ppf)(5, 3);
    (*ptr_afuncion)(5, 3);           // invocación mediante puntero
    ptr_afuncion(5, 3);              // Otra forma de invocación mediante puntero :  es imposible saber que la invocación de la función no es directa, sino indirecta (a través de un puntero).
    //--------------------------------------------------------------------
    int (*ptr)(int, int) = &foo;     //declaracion de puntero a funcion e inicializacion
    cout << ptr(78, 89) << endl;        // Otra forma de invocación mediante puntero  : es imposible saber que la invocación de la función no es directa, sino indirecta (a través de un puntero).
    //--------------------------------------------------------------------
    void (*ptr_aprint)(int);        //declaracion de puntero a funcion
    ptr_aprint = print;             //inicializamos el puntero con & ó sin él & (dos formas)
    (*ptr_aprint)(333);             // invocación mediante puntero

    return 0;
}