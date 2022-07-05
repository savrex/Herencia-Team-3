#ifndef Pickup_H
#define Pickup_H

#include <string>
#include <iostream>
#include "Vehiculo.h"

using std::string;
using std::cout;
using std::endl;

class Pickup: public Vehiculo
{
    public:
        Pickup(string dueño, string fabricante, string serie, int carga_maxima, bool doble_cabina): Vehiculo(dueño, fabricante, serie), carga_maxima{carga_maxima}, doble_cabina{doble_cabina}{
        }
        int cargar(){
            cout << "Encendiendo vehiculo" << endl;
        }
        int descargar(){
            cout << "Vehiculo avanzando" << endl;
        }
    private:
        int carga_maxima;
        bool doble_cabina;


};

#endif