#include "Administrador.h"
#include "Jugador.h"
#include "Persona.h"
#include "Mesa.h"
#include "Repartidor.h"
#include "Carta.h"
#include "Baraja.h"
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

Jugador* JugadorAgregar();
Repartidor* RepartidorAgregar();
Administrador* AdministradorAgregar();

int main(){
	vector <Repartidor*> repartidores;
	vector <Administrador*> administradores;
	vector <Jugador*> jugadores;
	vector <Mesa*> mesas;

	
	char resp ='s';
	int option;
	while(resp=='s'||resp=='S'){
		cout <<"Menu"<<endl;
		cout <<"1-Ingresar como Administrador"<<endl;
		cout <<"2-Ingresar como Usuario"<<endl;
		cout <<"3-Crear Cuenta Administrador"<<endl;
		cout <<"4-Crear Cuenta Repartidor"<<endl;
		cout <<"5-Crear Cuenta Jugador"<<endl;
		cout <<"6-salir"<<endl;
		cin>> option;
		switch (option){
			case 1:{
            	//log in si es el admin se le presenta un menu, si no  no;
				string usuario, contra;
				cout<<"Ingrese Nombre: "<<endl;
				cin>>usuario;
				cout<<"Ingrese ID: "<<endl;
				cin>>contra;

				for (int i = 0; i < administradores.size(); ++i){

					if(usuario==administradores[i]->getNombre()&&contra==administradores[i]->getID()){
						int op;

						cout<<"Bienvenido al Menu de Administrador"<<endl;
						cout<<"------------------------------------------"<<endl;
						cout<<"1-Agregar Mesa"<<endl;
						cout<<"2-Modificar Mesa"<<endl;
						cout<<"3-Eliminar Mesa"<<endl;
						cout<<"4-Salir"<<endl;
						cin>>op;

						switch(op){

							case 1:{
                        			//agregar Mesas;
								if(jugadores.size()==0||repartidores.size()==0){
									cout <<"Tiene que agregar jugadores y repartidores"<<endl;

								} else{

									int jugador;
									int repartidor;
									int numero;
									string tipo;

									cout<<"ELija un repartidor"<<endl;
									cout<<"--------------------------------"<<endl;
									for (int i = 0; i < repartidores.size(); ++i){

										cout<<i<<"-)"<<"Repartidor: "<<repartidores[i]->getNombre()<<endl;

									}

									cin>>repartidor;

									cout<<"ELija un jugador"<<endl;
									cout<<"--------------------------------"<<endl;
									for (int i = 0; i < jugadores.size(); ++i){

										cout<<i<<"-)"<<"Jugador: "<<jugadores[i]->getNombre()<<endl;

									}               

									cin>>jugador;    				

									cout<<"Ingrese Numero de Mesa: "<<endl;
									cin>>numero;
									cout<<"Ingrese Tipo: "<<endl;
									cin>>tipo;

									Mesa* temp = new Mesa(numero,tipo);

									temp->setJugador(jugadores[jugador]);
									temp->setRepartidor(repartidores[repartidor]);


									mesas.push_back(temp);

								}


								break;
							}

							case 2:{
                        			//Modificacion;

								int jugador;
								int repartidor;
								int numero;
								string tipo;
								int mesa;


								cout<<"ELija Mesa a modificar"<<endl;
								cout<<"--------------------------------"<<endl;
								for (int i = 0; i < mesas.size(); ++i){

									cout<<i<<"-)"<<"Mesa Numero: "<<mesas[i]->getNumero()<<endl;

								}

								cin>>mesa;

								cout<<"ELija un nuevo repartidor"<<endl;
								cout<<"--------------------------------"<<endl;
								for (int i = 0; i < repartidores.size(); ++i){

									cout<<i<<"-)"<<"Repartidor: "<<repartidores[i]->getNombre()<<endl;

								}

								cin>>repartidor;

								cout<<"ELija un nuevo jugador"<<endl;
								cout<<"--------------------------------"<<endl;
								for (int i = 0; i < jugadores.size(); ++i){

									cout<<i<<"-)"<<"Jugador: "<<jugadores[i]->getNombre()<<endl;

								}               


								cin>>jugador; 

								cout<<"Ingrese nuevo Numero de Mesa: "<<endl;
								cin>>numero;
								cout<<"Ingrese nuevo Tipo: "<<endl;
								cin>>tipo;

								

								mesas[mesa]->setJugador(jugadores[jugador]);
								mesas[mesa]->setRepartidor(repartidores[repartidor]);
								mesas[mesa]->setNumero(numero);
								mesas[mesa]->setTipo(tipo);

								break;
							}

							case 3:{

								int mesa;
								cout<<"ELija Mesa a Eliminar"<<endl;
								cout<<"--------------------------------"<<endl;
								for (int i = 0; i < mesas.size(); ++i){

									cout<<i<<"-)"<<"Mesa Numero: "<<mesas[i]->getNumero()<<endl;

								}

								cin>>mesa;

								mesas.erase(mesas.begin()+mesa);


								break;
							}

							case 4:{

								//salir
								break;
							}


                        	}//fin switch

                		}//fin if
                		else{
                			cout<<"La cuenta no existe"<<endl;
                		}

                }//fi for


                break;
            }

            case 2:{
        		//ingresar como usuario

            	string usuario1, contra1;
            	cout<<"Ingrese Nombre: "<<endl;
            	cin>>usuario1;
            	cout<<"Ingrese ID: "<<endl;
            	cin>>contra1;

            	for (int i = 0; i < jugadores.size(); ++i){

            		if(usuario1==jugadores[i]->getNombre()&&contra1==jugadores[i]->getID()){
            			int op2;
            			cout<<"Bienvenido al Menu de Jugador"<<endl;
            			cout<<"------------------------------------------"<<endl;
            			cout<<"1-Jugar"<<endl;
            			cout<<"2-Salir"<<endl;
            			cin>>op2;

            			switch(op2){

            				case 1:{
            					//Jugar

            					for (int i = 0; i < mesas.size(); ++i){

            						if(usuario1==mesas[i]->getJugador()->getNombre()){

            							double apuesta;

            							int carta1J, carta2J, carta1R,carta2R;
            							int cont=0;

            							Baraja* temp = new Baraja();


            							temp = mesas[i]->getRepartidor()->getBaraja();

            							cout<<"Bienvenido Jugador: "<<usuario1<<endl;

            							cout<<"A jugar: "<<endl;

            							cout<<"Ingrese su apuesta"<<endl;

            							for (int j = 0; j < 2; ++j){
            								
            								int random = rand()%52+1;
            								vector <Carta*>* aux= temp->getCartas();

            								if(aux->at(random)->getValor()=="J"){
            									carta1J=11;
            								}

            								if(aux->at(random)->getValor()=="A"){
            									carta1J=1;

            								}

            								if(aux->at(random)->getValor()=="Q"){
            									carta1J=12;
            								}

            								if(aux->at(random)->getValor()=="K"){
            									carta1J=13;

            								}

            								if(aux->at(random)->getValor()=="2"){
            									carta1J=2;
            								}

            								if(aux->at(random)->getValor()=="3"){
            									carta1J=3;

            								}

            								if(aux->at(random)->getValor()=="4"){
            									carta1J=4;
            								}

            								if(aux->at(random)->getValor()=="5"){
            									carta1J=5;

            								}


            								if(aux->at(random)->getValor()=="6"){
            									carta1J=6;
            								}

            								if(aux->at(random)->getValor()=="7"){
            									carta1J=7;

            								}

            								if(aux->at(random)->getValor()=="8"){
            									carta1J=8;
            								}

            								if(aux->at(random)->getValor()=="9"){
            									carta1J=9;

            								}

            								if(aux->at(random)->getValor()=="10"){
            									carta1J=10;

            								}

            								}//
            								//carta 2
            								for (int m = 0; m < 2; ++m){

            									int random = rand()%52+1;

            									vector <Carta*>* aux= temp->getCartas();

            									if(aux->at(random)->getValor()=="J"){
            										carta2J=11;
            									}

            									if(aux->at(random)->getValor()=="A"){
            										carta2J=1;

            									}

            									if(aux->at(random)->getValor()=="Q"){
            										carta2J=12;
            									}

            									if(aux->at(random)->getValor()=="K"){
            										carta2J=13;

            									}

            									if(aux->at(random)->getValor()=="2"){
            										carta2J=2;
            									}

            									if(aux->at(random)->getValor()=="3"){
            										carta2J=3;

            									}

            									if(aux->at(random)->getValor()=="4"){
            										carta2J=4;
            									}

            									if(aux->at(random)->getValor()=="5"){
            										carta2J=5;

            									}


            									if(aux->at(random)->getValor()=="6"){
            										carta2J=6;
            									}

            									if(aux->at(random)->getValor()=="7"){
            										carta2J=7;

            									}

            									if(aux->at(random)->getValor()=="8"){
            										carta2J=8;
            									}

            									if(aux->at(random)->getValor()=="9"){
            										carta2J=9;

            									}

            									if(aux->at(random)->getValor()=="10"){
            										carta2J=10;

            									}         


            								}

            								//cartas repartidor

            								for (int j = 0; j < 2; ++j){

            									int random = rand()%52+1;
            									vector <Carta*>* aux= temp->getCartas();

            									if(aux->at(random)->getValor()=="J"){
            										carta2R=11;
            									}

            									if(aux->at(random)->getValor()=="A"){
            										carta2R=1;

            									}

            									if(aux->at(random)->getValor()=="Q"){
            										carta2R=12;
            									}

            									if(aux->at(random)->getValor()=="K"){
            										carta2R=13;

            									}

            									if(aux->at(random)->getValor()=="2"){
            										carta2R=2;
            									}

            									if(aux->at(random)->getValor()=="3"){
            										carta2R=3;

            									}

            									if(aux->at(random)->getValor()=="4"){
            										carta2R=4;
            									}

            									if(aux->at(random)->getValor()=="5"){
            										carta2R=5;

            									}


            									if(aux->at(random)->getValor()=="6"){
            										carta2R=6;
            									}

            									if(aux->at(random)->getValor()=="7"){
            										carta2R=7;

            									}

            									if(aux->at(random)->getValor()=="8"){
            										carta2R=8;
            									}

            									if(aux->at(random)->getValor()=="9"){
            										carta2R=9;

            									}

            									if(aux->at(random)->getValor()=="10"){
            										carta2R=10;

            									}

            								}//
            								//carta 2
            								for (int n = 0; n < 2; ++n){

            									int random = rand()%52+1;

            									vector <Carta*>* aux= temp->getCartas();

            									if(aux->at(random)->getValor()=="J"){
            										carta1R=11;
            									}

            									if(aux->at(random)->getValor()=="A"){
            										carta1R=1;

            									}

            									if(aux->at(random)->getValor()=="Q"){
            										carta1R=12;
            									}

            									if(aux->at(random)->getValor()=="K"){
            										carta1R=13;

            									}

            									if(aux->at(random)->getValor()=="2"){
            										carta1R=2;
            									}

            									if(aux->at(random)->getValor()=="3"){
            										carta1R=3;

            									}

            									if(aux->at(random)->getValor()=="4"){
            										carta1R=4;
            									}

            									if(aux->at(random)->getValor()=="5"){
            										carta1R=5;

            									}


            									if(aux->at(random)->getValor()=="6"){
            										carta1R=6;
            									}

            									if(aux->at(random)->getValor()=="7"){
            										carta1R=7;

            									}

            									if(aux->at(random)->getValor()=="8"){
            										carta1R=8;
            									}

            									if(aux->at(random)->getValor()=="9"){
            										carta1R=9;

            									}

            									if(aux->at(random)->getValor()=="10"){
            										carta1R=10;

            									}

            								}

            									if(apuesta<= mesas[i]->getJugador()->getTotal()){
												//Juego
            										while(total1==21||total1>2||total2==21||total2>21){
            											if(cont%2==0){
													//turno Repartidor
            												
            												cout<<"Estas son sus carta Repartidor"<<endl;

            												cout<<"Este es el valor de su primera carta: "<< carta1R<<endl;
            												cout<<"Este es el valor de su segunda carta: "<< carta2R<<endl;
            												cout<<"Esta es la suma de sus cartas: "<<carta1R+carta2R<<endl;

            												cout<<"Estas son las carta de su rival"<<endl;

            												cout<<"Este es el valor de la primera carta: "<< carta1J<<endl;
            												cout<<"Este es el valor de la segunda carta: "<<"Oculto"<<endl;

            												cout<<"1-Para agregar carta"<<endl;
            												cout<<"2-Pasar turno"<<endl;

            												int accion;

            												if(accion==1){


            												}else if(accion==2){

            												}





            											} else{
													//turno Jugador

            											}




            										}

            										cout<<"El juego a acabado"<<endl;


            									} else{
            										cout<<"No tiene suficiente dinero para jugar"<<endl;
            									}


            								}else{

            									cout<<"Tiene que agregar sus jugadores a las mesas para poder jugar"<<endl;
            								}

            							}            					


            						}

            						case 2:{
            					//salir


            						}

            					}

            				}

            			}

            			break;
            		}

            		case 3:{
        		//agregar Admin
            			administradores.push_back(AdministradorAgregar());

            			break;
            		}

            		case 4:{
        		//Agregar Repartidor
            			repartidores.push_back(RepartidorAgregar());

            			break;
            		}


            		case 5:{
        		//Agregar Jugador
            			jugadores.push_back(JugadorAgregar());


            			break;
            		}


            		case 6:{
        		//salir


            			break;
            		}

            	}

            	cout <<"Desea continuar s/n"<<endl;
            	cin>>resp;
            }



            return 0;
        }

        Administrador* AdministradorAgregar(){
        	string Nombre;
        	string ID;
        	int Edad;
        	string Rango;
        	int AContratacion;
        	double Sueldo;
        	int m;

        	cout<< " Ingrese Nombre:  " <<endl;	
        	cin>> Nombre;
        	cout<< " Ingrese ID:  " <<endl;
        	cin>> ID;
        	cout<< " Ingrese Edad:  " <<endl;
        	cin>> Edad;
        	cout<< " Ingrese Rango:  "<<endl;
        	cout<<"1-Gerente Tiempo Completo"<<endl;
        	cout<<"2-Gerente Medio Tiempo"<<endl;
        	cout<<"3-Gerente General"<<endl;
        	cin >>m;

        	if(m==1){
        		Rango="Gerente Tiempo Completo";
        	}


        	if(m==2){
        		Rango="Gerente Tiempo Medio";
        	}


        	if(m==3){
        		Rango="Gerente General";
        	}

        	cout<< " Ingrese Año Trabajo:  " <<endl;
        	cin>> AContratacion;
        	cout<< " Ingrese Sueldo:  " <<endl;
        	cin>> Sueldo;

        	Administrador* temp = new Administrador(Nombre,Edad,ID,AContratacion,Rango, Sueldo);

        	return temp;

        }

        Jugador* JugadorAgregar(){
        	string Nombre;
        	string ID;
        	int Edad;
        	string Procedencia;
        	double Sueldo;
        	string apodo;

        	cout<< " Ingrese Nombre:  " <<endl;	
        	cin>> Nombre;
        	cout<< " Ingrese ID:  " <<endl;
        	cin>> ID;
        	cout<< " Ingrese Edad:  " <<endl;
        	cin>> Edad;
        	cout<< " Ingrese Procedencia:  "<<endl;
        	cin >>Procedencia;
        	cout<< " Ingrese Apodo:  " <<endl;
        	cin>> apodo;
        	cout<<"Ingrese Dinero: "<<endl;
        	cin >> Sueldo;

        	Jugador* temp = new Jugador(Nombre,Edad,ID,Procedencia,apodo, Sueldo);

        	return temp;

        }

        Repartidor* RepartidorAgregar(){
        	string Nombre;
        	string ID;
        	int Edad;
        	double Dinero;
        	int m;
        	string Dificultad;

        	cout<< " Ingrese Nombre:  " <<endl;	
        	cin>> Nombre;
        	cout<< " Ingrese ID:  " <<endl;
        	cin>> ID;
        	cout<< " Ingrese Edad:  " <<endl;
        	cin>> Edad;
        	cout<< " Ingrese Dinero:  " <<endl;
        	cin>> Dinero;

        	cout<< " Ingrese Dificultad:  "<<endl;
        	cout<<"1-Dificil"<<endl;
        	cout<<"2-Intermedio"<<endl;
        	cout<<"3-Facil"<<endl;
        	cin >>m;

        	if(m==1){
        		Dificultad="Dificil";
        	}


        	if(m==2){
        		Dificultad="Intermerdio";
        	}


        	if(m==3){
        		Dificultad="Facil";
        	}

        	Repartidor* temp = new Repartidor(Nombre,Edad,ID,Dificultad,Dinero);

        	return temp;

        }