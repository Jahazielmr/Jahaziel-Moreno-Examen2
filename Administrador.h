#include <iostream>
#include <string>
#include "Persona.h"

using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Administrador: public Persona{
    protected:
        
        int AnoTrabajo;
        string Rango;
        double Sueldo;

    public:
        Administrador(string,int,string, int, string, double);
        Administrador();

        int getAnoTrabajo();
        void setAnoTrabajo(int);

        string getRango();
        void setRango(string);

        double getSueldo();
        void setSueldo(double);

};
#endif