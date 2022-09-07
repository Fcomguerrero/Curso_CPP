#include <iostream>

using namespace std;

int Suma(int a, int b) {
    cout << "Esto es Suma" << endl;
    return a + b;
}
int Resta(int a, int b) {
    if (a < b) {
        swap(a, b);
    }
    cout << "Esto es Resta" << endl;
    return a - b;
}
int Multi(int a, int b) {
    cout << "Esto es Multi" << endl;
    return a * b;
}
int divi(int a, int b) { //retorno entero
    if (a < b) {
        swap(a, b);
    }
    cout << "Esto es divi" << endl;
    return a / b;
}
int Foo(int a, int b, int(*ptrs)(int, int)) { //int(*ptrs)(int,int) = Suma()
    auto x = [&](int a, int b)->int {
        cout << "Esto es lambda" << endl;
        return a * b;//10
    };
    cout << "Esto es Foo" << endl;
    return x(a, b) + (*ptrs)(a, b); //17  //(*ptrs) es igual a Suma()
}

int main()
{

    int(*ptr)(int, int) = Suma;
    cout << (*ptr)(3, 5) << endl;           //8

    int (*ptr2)(int, int, int(*ptrs)(int, int)) = Foo;
    auto result = (*ptr2)(2, 5, Suma); //result=17
    cout << "Esto es result" << endl;
    cout << result << endl; //17

    int(*vect[])(int, int) = { Suma,Resta,Multi,divi };
    cout << (vect[0])(4, 7) << endl;
    cout << (vect[1])(4, 7) << endl;
    cout << (vect[2])(4, 7) << endl;
    cout << (vect[3])(4, 7) << endl;

    return 0;
}
