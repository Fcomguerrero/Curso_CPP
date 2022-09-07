#ifndef OBSERVADO_H_INCLUDED
#define OBSERVADO_H_INCLUDED
#include <vector>
#include "Observador.h"
#include "UnObservador.h"

class Observado{

    private:
        std::vector<UnObservador> v_observadores;
        string _name;
    public:
        void agregarObservador(UnObservador _unObservador);    //agregar Observador
        void eliminarObservador(UnObservador _unObservador);   //Eliminar Observador
        void notificarObservadores();                          //Notifica a todos sus observadores
        string getName();
};

#endif // OBSERVADO_H_INCLUDED
