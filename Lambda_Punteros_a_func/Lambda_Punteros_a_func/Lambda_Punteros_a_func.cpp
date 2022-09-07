#include <iostream>

using namespace std;

int resta(int a, int b);
typedef int(*res)(int, int);

int multi(int a, int b);
typedef int(*mul)(int, int);

typedef int(*sum)(int, int);
int opecion(int a, int b, sum d, res r, mul t);
int(*pOpeci)(int, int, sum, res, mul) = opecion;
//--------------------------------------
int suma(int a, int b) {
    return a + b;
}
int resta(int a, int b) {
    return a - b;
}
int multi(int a, int b) {
    return a * b;
}
int opecion(int a, int b, int(*sum)(int, int), int(*res)(int, int), int(*multi)(int, int)) {

    auto x = [=](int, int)->int {
        return a + b + sum(a, b) - res(a, b) + multi(a, b);
    };
    return x(a, b);
}


int main()
{
    int x = 8, c = 4;
    cout << (*pOpeci)(x, c, suma, resta, multi) << endl;


    return 0;
}
