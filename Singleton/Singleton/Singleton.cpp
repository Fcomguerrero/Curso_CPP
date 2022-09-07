#include <iostream>
#include "../Singleton/include/task.h"

Task* Task::_instancia = 0;   //inicializamos el puntero de instancia

void foo()
{
    cout << "foo: " << Task::instancia("uno")->getName() << endl; //Una sola instancia
    Task::instancia("uno")->setValor(1);                       //se modifica siempre para la primera instancia
    cout << "foo: " << Task::instancia("uno")->getValor() << endl;
}
void bar()
{
    cout << "bar: " << Task::instancia("dos")->getName() << endl; //Una sola instancia
    Task::instancia("dos")->setValor(2);                //se modifica siempre para la primera instancia       
    cout << "bar: " << Task::instancia("dos")->getValor() << endl;
}

int main() {
	

	//Task task = Task("Homework"); //no se puede acceder al constructor es privado  "Singleton"
    cout << "main Instancia_Global " << Task::instancia("")->getValor() << endl;;
    foo();
    bar();
}
