#include "Carta.h"

Carta::Carta(string Valor,string Color,string Simbolo){
    this->Valor=Valor;
    this->Color=Color;
    this->Simbolo=Simbolo;
}
Carta::Carta(){

}void Carta::setValor(string Valor){
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
