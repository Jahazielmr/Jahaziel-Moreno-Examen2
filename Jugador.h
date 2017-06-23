#include <iostream>
#include <string>
#include "Persona.h"

using namespace std;

#ifndef JUGADOR_H
#define JUGADOR_H

class Jugador: public Persona{
    protected:

        string Procedencia;
        double Total;
        string Apodo;


    public:
        Jugador(string,int,string,string, string,double);
        Jugador();

        string getProcedencia();
        void setProcedencia(string);

        double getTotal();
        void setTotal(double);

        string getApodo();
        void setApodo(string);



};
#endif