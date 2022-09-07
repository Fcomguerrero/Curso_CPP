#include <iostream>
#include <functional>
#include <algorithm>
#include <cmath>

using namespace std;



void sumar(int a, int b, void (*pPrint)(int)) //tercer parametro Puntero a funcion
{
    (*pPrint)(a + b);
}
void procesar(function<void()> func) //#include <functional>
{
    func();
}
function<int(int)> foo(int a)
{
    return [a](int b)->int { return a + b; };
}
auto answer = [](int n, int m)
{
    return m + n;
};

int main()
{
    int x = 3;
    int y = 7;

    sumar(5, 4, [](int x)->void{ cout << x << endl; } ); //tercer parametro funcion lambda
    cout << "----------------------------------------------------------------------" << endl;
    procesar( [&]()->void{ cout << "Suma:" << x + y << endl; } );  //paso de lambda
    procesar( [&]()throw()->void { cout << "Resta:" << x - y << endl; } ); //paso de lambda
    cout << "----------------------------------------------------------------------" << endl;
    int response = answer(10,9);
    cout << response << endl;
    cout << "----------------------------------------------------------------------" << endl;
    function<int(int)> sum = foo(x); 
    cout << sum(7) << endl;     //10
    cout << sum(30) << endl;    //33
    cout << sum(70) << endl;    //73
    return 0;
}