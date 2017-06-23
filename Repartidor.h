#include <iostream>
#include <string>
#include "Persona.h"
#include "Baraja.h"

using namespace std;

#ifndef REPARTIDOR_H
#define REPARTIDOR_H

class Repartidor: public Persona{
    protected:
        string Dificultad;
        double Dinero;

        Baraja* baraja;

    public:
        Repartidor(string,int,string, string, double);
        Repartidor();

        string getDificultad();
        void setDificultad(string);

        double getDinero();
        void setDinero(double);

        Baraja* getBaraja();
        void setBaraja(Baraja*);


};
#endif