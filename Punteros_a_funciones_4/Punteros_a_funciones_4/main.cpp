#include <iostream>

using namespace std;

int Suma(int a, int b) {
    return a + b;
}

int Sum(int a, int b, int(*ptrs)(int, int)) { //int(*ptrs)(int,int) = Suma()
    auto x = [&](int a, int b)->int {
        return a * b;//10
    };
    return x(a, b) + (*ptrs)(a, b); //17  //(*ptrs) es igual a Suma()
}

int main()
{

    int(*ptr)(int, int) = Suma;
    cout << (*ptr)(3, 5) << endl;           //8

    int (*ptr2)(int, int, int(*ptrs)(int, int)) = Sum;
    auto result = (*ptr2)(2, 5, Suma); //result=17
    cout << result << endl; //17

    return 0;
}