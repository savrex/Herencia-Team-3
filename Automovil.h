#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

#include <string>
#include <iostream>
#include "Vehiculo.h"

using std::string;
using std::cout;
using std::endl;

class Automovil: public Vehiculo {
    public:
        Automovil(string dueño, string fabricante, string serie, int numero_puertas, string tipo_combustible, bool descapotable): Vehiculo{dueño, fabricante, serie},numero_puertas{numero_puertas}, tipo_combustible{tipo_combustible}, descapotable{descapotable}{
        }
        void abrir_cajuela(){
            cout << "Abriendo cajuela" << endl;
        }
        void descapotar(){
            cout << "Descapotando automovil" << endl;
        }
        void encapotar(){
            cout << "Encapotando automovil" << endl;

        }
    private:
        int numero_puertas;
        string tipo_combustible;
        bool descapotable;


};

#endif