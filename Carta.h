#include <iostream>
#include <string>

using namespace std;

#ifndef CARTA_H
#define CARTA_H
class Carta{
    protected:
        string Valor;
        string Color;
        string Simbolo;
    public:
        Carta(string,string,string);
        Carta();
        string getValor();
        void setValor(string);

        string getColor();
        void setColor(string);

        string getSimbolo();
        void setSimbolo(string);

        int getValorInt();

};
#endif