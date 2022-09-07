#ifndef UNOBSERVADOR_H_INCLUDED
#define UNOBSERVADOR_H_INCLUDED
#include <iostream>
#include "Observador.h"

#include <string>

using namespace std;

class UnObservador: public Observador{
    private:
        string estado_Observador;
        string _name;
    public:
        UnObservador(string name): _name(name){/*cout<<"Observador "<<name<<" creado"<<endl;*/};
        string getNameUnObservador();
        void UnObservado_actualizado();
        string getEstadoObservador();
};

#endif // UNOBSERVADOR_H_INCLUDED
