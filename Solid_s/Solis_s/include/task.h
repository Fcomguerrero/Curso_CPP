#ifndef TASK_LIBRARY_TASK_HPP__
#define TASK_LIBRARY_TASK_HPP__

#include <iostream>
using namespace std;

class Task {
public:
	string getTask();
	void setTask(string task_name);
	void printTask();

private:
	string task_name_;
};

#endif  // TASK_LIBRARY_TASK_HPP__