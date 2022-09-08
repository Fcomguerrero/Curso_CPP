#include "../include/task.h"

#include <iostream>

using namespace std;

string Task::getTask()
{
	return task_name_;
}
void Task::setTask(string task_name)
{
	task_name_ = task_name;
}
void Task::printTask()
{
	cout << "Class Task Print: --> " << task_name_<<endl;
}