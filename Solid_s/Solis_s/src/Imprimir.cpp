#include "../include/task.h"
#include "../include/Imprimir.h"

#include <iostream>

void Imprimir::imprimir(Task task)
{
	cout << "Class Imprimir: --> " << task.getTask()<<endl;
}
