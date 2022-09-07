#include <iostream>
#include "../include/task.h"

string Task::getName() {
	return task_name_;
}
void Task::setName(string name) {
	task_name_ = name;
}
int Task::getValor()
{
    return _valor;
}
void Task::setValor(int v)
{
    _valor = v;
}
Task* Task::instancia(const string& task_name)
{
	if (!_instancia) {							//si no instancias, Creamos una nueva
		_instancia = new Task(task_name);
	}
    return _instancia;		//retornamos la instancia creada
}