#include "jugador.h"


jugador::jugador(string name,int age,string pie,string nacio,int vel){
	nombre=name;
	edad=age;
	piehabil=pie;
	nacionalidad=nacio;
	
	velocidad=vel;
};

string jugador::getnombre(){
	return nombre;
}

int jugador::getedad(){
	return edad;
}

string jugador::getpiehabil(){
	return piehabil;

}

string jugador::getnacionalidad(){
	return nacionalidad;
}




int jugador::getvelocidad(){
	return velocidad;
}