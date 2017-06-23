#include "Mesa.h"

Mesa::Mesa(int numero,string tipo){
    this->numero=numero;
    this->tipo=tipo;
}

Mesa::Mesa(){

}

void Mesa::setTipo(string tipo){
   this-> tipo=tipo;
}

string Mesa::getTipo(){
   return tipo;
}

void Mesa::setNumero(int numero){
   this-> numero=numero;
}

int Mesa::getNumero(){
   return numero;
}

Jugador* Mesa::getJugador(){
	return jugador;
}

void Mesa::setJugador(Jugador* jugador){
	this-> jugador=jugador;
}

Repartidor* Mesa::getRepartidor(){
	return repartidor;
}

void Mesa::setRepartidor(Repartidor* repartidor){
	this->repartidor=repartidor;
}