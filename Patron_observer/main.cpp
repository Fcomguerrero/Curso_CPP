#include <iostream>
#include "include/Observador.h"
#include "include/Observado.h"
#include "include/UnObservador.h"
#include "include/UnObservado.h"

using namespace std;

int main()
{
    UnObservado  Observado_1("OBSERVADO_1");
    UnObservado  Observado_2("OBSERVADO_2");
    UnObservado  Observado_3("OBSERVADO_3");

    UnObservador Observador_1("Observador_1");
    UnObservador Observador_2("Observador_2");
    UnObservador Observador_3("Observador_3");

    Observado_1.agregarObservador(Observador_1);
    Observado_2.agregarObservador(Observador_2);
    //Observado_2.eliminarObservador(Observador_2);
    Observado_3.agregarObservador(Observador_3);
    Observado_3.agregarObservador(Observador_1);
    Observado_3.agregarObservador(Observador_2);


    //Observado_2.agregarObservador(Observador_2);
    //Observado_2.agregarObservador(Observador_2);
    //un_Observado.agregarObservador(un_Observador_3);
    Observado_1.notificarObservadores();
    Observado_2.notificarObservadores();
    Observado_3.notificarObservadores();



    return 0;
}
