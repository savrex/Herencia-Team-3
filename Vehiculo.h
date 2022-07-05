#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Vehiculo
{
    public:
        Vehiculo(string dueño, string fabricante, string serie): dueño{dueño}, fabricante{fabricante}, serie{serie}{
        }
        void encender(){
            cout << "Encendiendo vehiculo" << endl;
        }
        void avanzar(){
            cout << "Vehiculo avanzando" << endl;
        }
        void apagar(){
            cout << "Apagando vehiculo" << endl;

        }
    protected:
        string dueño;
        string fabricante;
        string serie;


};

#endif