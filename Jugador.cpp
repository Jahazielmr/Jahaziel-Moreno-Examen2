#include "Jugador.h"


Jugador::Jugador(string Nombre,int Edad,string ID, string Procedencia, string Apodo, double Total){
    this->Nombre=Nombre;
    this->Edad=Edad;
    this->ID=ID;
    this->Apodo=Apodo;
    this->Procedencia=Procedencia;
    this->Total=Total;
}

Jugador::Jugador(){

}

void Jugador::setApodo(string Apodo){
   this-> Apodo=Apodo;
}

string Jugador::getApodo(){
   return Apodo;
}

void Jugador::setTotal(double Total){
   this-> Total=Total;
}

void Jugador::setProcedencia(string Procedencia){

 	  	this-> Procedencia=Procedencia;
}

string Jugador::getProcedencia(){
   return Procedencia;
}
