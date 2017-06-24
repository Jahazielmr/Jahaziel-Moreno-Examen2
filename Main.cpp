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
            					
            					for (int i = 0; i < mesas.size(); ++i){

            						if(usuario1==mesas[i]->getJugador()->getNombre()){
            							double apuesta;

            							int carta1J, carta2J, carta1R,carta2R;
            							int cont=0;
            							
            							cout<<"Bienvenido Jugador: "<<usuario1<<endl;

            							cout<<"A jugar: "<<endl;
            							int apuesta1;
            							cout<<"Ingrese su apuesta"<<endl;
            							cin >>apuesta1;

            							int random = rand()%50+1;
            							int random2 = rand()%50+1;
            							int random3= rand()%50+1;
            							int random4 = rand()%50+1;	
            							
            							/*carta1J = mesas[i]->getRepartidor()->getBaraja()->getCartas()->at(random)->getValorInt();
            							carta2J = mesas[i]->getRepartidor()->getBaraja()->getCartas()->at(random2)->getValorInt();
            							carta1R = mesas[i]->getRepartidor()->getBaraja()->getCartas()->at(random3)->getValorInt();
            							carta2R = mesas[i]->getRepartidor()->getBaraja()->getCartas()->at(random4)->getValorInt();
										*/

										carta1J=4;
										carta2J=7;
										carta1R=2;
										carta2R=12;
										//HOLA 

            							cout<<"Hola";
            							if(apuesta1<= mesas[i]->getJugador()->getTotal()){

            								int total1, total2;
            								while(total1==21||total1<2||total2==21||total2<21){
            									if(cont%2==0){

  		                                            //turno Repartidor 

            										cout<<"Estas son sus carta Repartidor"<<endl;

            										cout<<"Este es el valor de su primera carta: "<< carta1R<<endl;
            										cout<<"Este es el valor de su segunda carta: "<< carta2R<<endl;
            										total1 += carta1R+carta2R;
            										cout<<"Esta es la suma de sus cartas: "<<total1<<endl;

            										cout<<"Estas son las carta de su rival"<<endl;

            										cout<<"Este es el valor de la primera carta: "<< carta1J<<endl;
            										cout<<"Este es el valor de la segunda carta: "<<"Oculto"<<endl;

            										cout<<"1-Para agregar carta"<<endl;
            										cout<<"2-Pasar turno"<<endl;

            										int accion;

            										if(accion==1){
            											int random = rand()%52+1;

            											cout <<"El valor de la carta que saco es: "<<random<<endl;

            											total1+=random;



            										}else if(accion==2){
            											break;
            										}

            									}//Fin if turno

            									else{
                                                                                          //turno Jugador
            										cout<<"Estas son sus carta Jugador"<<endl;

            										cout<<"Este es el valor de su primera carta: "<< carta1J<<endl;
            										cout<<"Este es el valor de su segunda carta: "<< carta2J<<endl;
            										total2 += carta1J+carta2J;
            										cout<<"Esta es la suma de sus cartas: "<<total2<<endl;

            										cout<<"Estas son las carta de su rival"<<endl;

            										cout<<"Este es el valor de la primera carta: "<< carta1R<<endl;
            										cout<<"Este es el valor de la segunda carta: "<<"Oculto"<<endl;

            										cout<<"1-Para agregar carta"<<endl;
            										cout<<"2-Pasar turno"<<endl;

            										int accion;

            										if(accion==1){
            											int random = rand()%52+1;

            											cout <<"El valor de la carta que saco es: "<<random<<endl;

            											total2+=random;



            										}else if(accion==2){
            											break;
            										}


            									}


            								}//FIN WHILE TURNOS
            								cout<<"El juego a acabado"<<endl;

            							}//if mesas

            							else{
            								cout<<"No tiene suficiente dinero para jugar"<<endl;
            							}

            						}else{
            							cout<<"Tiene que agregar sus jugadores a las mesas para poder jugar"<<endl;
            						}

            					}//fin for mesas

            					break;	
            				}//fin case 1
            				case 2:{
            					break;
            				}

            			}


            		}

            	}

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