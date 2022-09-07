#include <iostream>
#include "../include/UnObservador.h"
#include "../include/UnObservado.h"

void UnObservador::UnObservado_actualizado(){
    std::cout<<this->getNameUnObservador()<<" recibe notificacion"<<std::endl;
}
string UnObservador::getNameUnObservador(){
    return  _name;
}

string UnObservador::getEstadoObservador(){
    this->estado_Observador;
}
