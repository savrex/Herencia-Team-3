#ifndef VEHICULO_H
#include <string>

using std::string;

class Vehiculo
{
    public:
        Vehiculo();
        Vehiculo(string dueño, string fabricant, string serie);
        string encender();
        string avanzar();
        string apagar();
    private:
        string dueño;
        string fabricante;
        string serie;


};

#endif