#include "Persona.h"

Persona::Persona(string Nombre,int Edad,string ID){
    this->Nombre=Nombre;
    this->Edad=Edad;
    this->ID=ID;
}

Persona::Persona(){

}

void Persona::setNombre(string Nombre){
   this-> Nombre=Nombre;
}

string Persona::getNombre(){
   return Nombre;
}

void Persona::setEdad(int Edad){
   this-> Edad=Edad;
}

int Persona::getEdad(){
   return Edad;
}

void Persona::setID(string ID){

	if(ID.size()>0&&ID.size()<4){
 	  	this-> ID=ID;
 	}

}

string Persona::getID(){
   return ID;
}
