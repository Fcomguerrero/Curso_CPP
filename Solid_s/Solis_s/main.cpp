#include <iostream>
#include "include/task.h"
#include "include/Imprimir.h"

using namespace std;

int main() {

	Task task = Task();
	Imprimir impresora = Imprimir();

	task.setTask("Homework");
	string getTaskk = task.getTask();

	//cout << "funcion getTaskk --> " << getTaskk << endl;

	task.printTask();  //Mal Solid (S)

	impresora.imprimir(task); //Buena Solid (S)

	return 0; 
}