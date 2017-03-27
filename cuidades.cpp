#include "cuidades.h"

cuidades::cuidades(string name,int poblation){
	nombre=name;
	poblacion=poblation;
}
cuidades::cuidades(){

}

void cuidades::setnombre(string name){
	nombre=name;
}
void cuidades::setpoblacio(int num){
	poblacion=num;
}
void cuidades::setestadios(Estadio* stadium){
	estadios.push_back(stadium);
}
string cuidades::getnombre(){
	return nombre;
}
int cuidades::getpoblacion(){
	return poblacion;
}

Estadio* cuidades::getestadio(int num){
	return estadios[num];
}