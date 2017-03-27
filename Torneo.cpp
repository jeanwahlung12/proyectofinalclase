#include "Torneo.h"

Torneo::Torneo(){

}
Torneo::Torneo(string name, int prem){
	nombre=name;
	prem=premio;
}

void Torneo::setnombre(string name){
	nombre=name;
}
void Torneo::setpremio(int premi){
	premio = premi;
}
void Torneo::setequipos(equipo* team){
	equipos.push_back(team);
}
string Torneo::getnombre(){
	return nombre;
}
int Torneo::getpremio(){
	return premio;
}
equipo* Torneo::getequipo(int num){
	return equipos[num];
}