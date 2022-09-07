#pragma once
#include <iostream>

using namespace std;

class Task
{
	private:
		string task_name_;
		int _valor;
		static Task* _instancia;					//Puntero de instancia de clase Privada;
		Task(const string& task_name,int valor=0) { //Constructor privado
			task_name_ = "Primera_instancia";		//<-- Primera y unica instancia
			_valor = valor;							//valor a modificar en la instancia
		}
	public:
		string getName();
		void setName(string name);
		int getValor();
		void setValor(int v);
		static Task* instancia(const string& task_name);
};
