#ifndef UNOBSERVADO_H_INCLUDED
#define UNOBSERVADO_H_INCLUDED
#include <string>
#include "Observado.h"
#include "UnObservador.h"

class  UnObservado:public Observado{
    private:
        string estado_observado="";
        string _name;
    public:
        UnObservado(string name): _name(name){};
        string getName(){return _name;};
        string getEstadoObservado(){ return estado_observado;}
        void setEstadoObservado(string estadobservado){ this->estado_observado = estadobservado;}
 };

#endif // UNOBSERVADO_H_INCLUDED
