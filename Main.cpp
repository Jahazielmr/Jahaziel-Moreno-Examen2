#include "Administrador.h"
#include "Jugador.h"
#include "Persona.h"
#include "Mesa.h"
#include "Repartidor.h"
#include "Carta.h"
#include "Baraja.h"
#include <vector>
#include <string>


using namespace std;

Jugador* JugadorAgregar();
Repartidor* RepartidorAgregar();
Administrador* AdministradorAgregar();

int main(){
	vector <Repartidor*> repartidores;
	vector <Administrador*> administradores;
	vector <Jugador*> jugadores;

	
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
                        	cout<<"4-listar"<<endl;
                        	cout<<"5-salir"<<endl;
                        	cin>>op;

                        	switch(op){

                        		case 1:{
                        			

                        		break;
                        		}

                        		case 2:{

                        		break;
                        		}

                        		case 3:{

                        		break;
                        		}

                        		case 4:{

                        		break;
                        		}

                        		case 5:{

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

        		string usuario, contra;
                cout<<"Ingrese Nombre: "<<endl;
                cin>>usuario;
                cout<<"Ingrese ID: "<<endl;
                cin>>contra;

                for (int i = 0; i < jugadores.size(); ++i){
                		
                		if(usuario==jugadores[i]->getNombre()&&contra==jugadores[i]->getID()){
                			int op;
                			cout<<"Bienvenido al Menu de Jugador"<<endl;
                			cout<<"------------------------------------------"<<endl;
                        	cout<<"1-Jugar"<<endl;
                        	cout<<"2-Salir"<<endl;
                        	op>>cin;

                        	switch(op){

                        		case 1:{

                        		}

                        		case 2:{

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


	Jugador* temp = new Jugador(Nombre,Edad,ID,Procedencia,apodo, 0);

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