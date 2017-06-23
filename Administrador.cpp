#include "Administrador.h"

Administrador::Administrador(string Nombre,int Edad,string ID, int AnoTrabajo, string Rango, double Sueldo){
    this->Nombre=Nombre;
    this->Edad=Edad;
    this->ID=ID;
    this->AnoTrabajo=AnoTrabajo;
    this->Rango=Rango;
    this->Sueldo=Sueldo;
}

Administrador::Administrador(){

}

void Administrador::setAnoTrabajo(int AnoTrabajo){
   this-> AnoTrabajo=AnoTrabajo;
}

int Administrador::getAnoTrabajo(){
   return AnoTrabajo;
}

void Administrador::setRango(string Rango){
   this-> Rango=Rango;
}

string Administrador::getRango(){
   return Rango;
}

void Administrador::setSueldo(double Sueldo){
 	  	this-> Sueldo=Sueldo;
}

double Administrador::getSueldo(){
   return Sueldo;
}
