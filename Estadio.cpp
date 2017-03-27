#include "Estadio.h"

Estadio::Estadio(string name,int capacity,string type){
	nombre=name;
	capacidad=capacity;
	tipograma=type;
}

 Estadio::Estadio(){

}

void Estadio::setnombre(string name){
	nombre=name;
}

void Estadio::setcapacidad(int cap){
	capacidad=cap;
}

void Estadio::settipograma(string type){
	tipograma=type;
}

string Estadio::getnombre(){
	return nombre;
}

int Estadio::getcapacidad(){
	return capacidad;
}

string Estadio::gettipograma(){
	return tipograma;
}