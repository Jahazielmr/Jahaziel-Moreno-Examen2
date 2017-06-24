#include <iostream>
#include <string>
#include "Carta.h"
#include <vector>

using namespace std;

#ifndef BARAJA_H
#define BARAJA_H

class Baraja{
    protected:

        vector <Carta*>* cartas;
        
    public:
        Baraja(int i);
        Baraja();



        vector<Carta*>* getCartas();
    

};
#endif