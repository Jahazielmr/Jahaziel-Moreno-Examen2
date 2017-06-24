#include "Baraja.h"

Baraja::Baraja(int Z){
	
	//ESPADA;

	for (int i = 2; i <=10 ; ++i){
		
		string y=""+i;

		Carta* c = new Carta(y,"Negro","Espada");

		cartas->push_back(c);

	}

	for (int i = 0; i <4 ; ++i){
		string y=""+i;

		if(i==0){
			Carta* c = new Carta("J","Negro","Espada");

			cartas->push_back(c);
		}

		if(i==1){
			Carta* c = new Carta("Q","Negro","Espada");

			cartas->push_back(c);	
		}

		if(i==2){
			Carta* c = new Carta("K","Negro","Espada");

			cartas->push_back(c);	
		}

		if(i==3){
			Carta* c = new Carta("A","Negro","Espada");

			cartas->push_back(c);	
		}

	}

	//TREBOL
	for (int i = 2; i <=10 ; ++i){
		string y=""+i;

		Carta* c = new Carta(y,"Negro","Trebol");

		cartas->push_back(c);

	}

	for (int i = 0; i <4 ; ++i){
		string y=""+i;
		
		if(i==0){
			Carta* c = new Carta("J","Negro","Trebol");

			cartas->push_back(c);
		}

		if(i==1){
			Carta* c = new Carta("Q","Negro","Trebol");

			cartas->push_back(c);	
		}

		if(i==2){
			Carta* c = new Carta("K","Negro","Trebol");

			cartas->push_back(c);	
		}

		if(i==3){
			Carta* c = new Carta("A","Negro","Trebol");

			cartas->push_back(c);	
		}

	}

	//DIAMANTE

	for (int i = 2; i <=10 ; ++i){
		
		string y=""+i;

		Carta* c = new Carta(y,"Rojo","Diamante");

		cartas->push_back(c);

	}

	for (int i = 0; i <4 ; ++i){
		string y=""+i;
		if(i==0){
			Carta* c = new Carta("J","Rojo","Diamante");

			cartas->push_back(c);
		}

		if(i==1){
			Carta* c = new Carta("Q","Rojo","Diamante");

			cartas->push_back(c);	
		}

		if(i==2){
			Carta* c = new Carta("K","Rojo","Diamante");

			cartas->push_back(c);	
		}

		if(i==3){
			Carta* c = new Carta("A","Rojo","Diamante");

			cartas->push_back(c);	
		}

	}

	//ROJO CORAZON


	for (int i = 2; i <=10 ; ++i){
		string y=""+i;

		Carta* c = new Carta(y,"Rojo","Corazones");

		cartas->push_back(c);

	}

	for (int i = 0; i <4 ; ++i){
		string y=""+i;
		
		if(i==0){
			Carta* c = new Carta("J","Rojo","Corazones");

			cartas->push_back(c);
		}

		if(i==1){
			Carta* c = new Carta("Q","Rojo","Corazones");

			cartas->push_back(c);	
		}

		if(i==2){
			Carta* c = new Carta("K","Rojo","Corazones");

			cartas->push_back(c);	
		}

		if(i==3){
			Carta* c = new Carta("A","Rojo","Corazones");

			cartas->push_back(c);	
		}

	}


}

vector<Carta*>* Baraja::getCartas(){
	return cartas;
}

Baraja::Baraja(){

	
}