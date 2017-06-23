#include <iostream>
#include <string>

using namespace std;

#ifndef PERSONA_H
#define PERSONA_H
class Persona{
    protected:
        string Nombre;
        int Edad;
        string ID;
    public:
        Persona(string,int,string);
        Persona();

        string getNombre();
        void setNombre(string);

        int getEdad();
        void setEdad(int);

        string getID();
        void setID(string);

};
#endif