#include "../include/Observado.h"
#include "../include/UnObservador.h"


void Observado::agregarObservador(UnObservador _unObservador){
    v_observadores.push_back(_unObservador);
    //notificarObservadores();
}
string Observado::getName(){
            return _name;
}
void Observado::eliminarObservador(UnObservador _unObservador){
    v_observadores.pop_back();
}
void Observado::notificarObservadores(){
    for (int i=0; i<v_observadores.size(); i++){
            v_observadores[i].UnObservado_actualizado();
    }
}
