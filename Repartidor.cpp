#include "Repartidor.h"

Repartidor::Repartidor(string Nombre,int Edad,string ID, string Dificultad, double Dinero){
    this->Nombre=Nombre;
    this->Edad=Edad;
    this->ID=ID;
    this->Dificultad=Dificultad;
    this->Dinero=Dinero;
}

Repartidor::Repartidor(){

}

void Repartidor::setDificultad(string Dificultad){
   this-> Dificultad=Dificultad;
}

string Repartidor::getDificultad(){
   return Dificultad;
}

void Repartidor::setDinero(double Dinero){
   this-> Dinero=Dinero;
}

double Repartidor::getDinero(){
   return Dinero;
}

Baraja* Repartidor::getBaraja(){
	return baraja;
}

void Repartidor::setBaraja(Baraja* baraja){
	this->baraja=baraja;
}

