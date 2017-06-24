#include "Carta.h"
#include <stdio.h>
#include <stdlib.h>

Carta::Carta(string Valor,string Color,string Simbolo){
    this->Valor=Valor;
    this->Color=Color;
    this->Simbolo=Simbolo;
}
Carta::Carta(){

}
void Carta::setValor(string Valor){
   this-> Valor=Valor;
}
string Carta::getValor(){
   return Valor;
}
void Carta::setColor(string Color){
   this-> Color=Color;
}
string Carta::getColor(){
   return Color;
}
void Carta::setSimbolo(string Simbolo){
   this-> Simbolo=Simbolo;
}
string Carta::getSimbolo(){
   return Simbolo;
}

int Carta::getValorInt(){

	int temp;

	if(Valor==("J")){
		temp= 11;

	}else if(Valor==("Q")){
		temp= 12;

	} else if(Valor==("K")){
		temp= 13;

	}else if(Valor==("A") ){
		temp=1;
	}else{
		temp = atoi(Valor.c_str());
	}

	return temp;

}