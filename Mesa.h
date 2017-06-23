#include <iostream>
#include <string>
#include "Jugador.h"
#include "Repartidor.h"
#include "Baraja.h"

using namespace std;

#ifndef MESA_H
#define MESA_H

class Mesa{
    protected:

        Jugador* jugador;
        Repartidor* repartidor;
        int numero;
        string tipo;

        
    public:
        Mesa(int, string);
        Mesa();
        
        int getNumero();
        void setNumero(int);

        string getTipo();
        void setTipo(string);

        Jugador* getJugador();
        void setJugador(Jugador*);

        Repartidor* getRepartidor();
        void setRepartidor(Repartidor*);
    

};
#endif