#include "Torneo.h"

Torneo::Torneo(){

}
Torneo::Torneo(string name, int prem, equipo* equipo1, equipo* equipo2){
	nombre=name;
	prem=premio;
	team1 = equipo1;
	team2 = equipo2;
}

void Torneo::setnombre(string name){
	nombre=name;
}
void Torneo::setpremio(int premi){
	premio = premi;
}

string Torneo::getnombre(){
	return nombre;
}
int Torneo::getpremio(){
	return premio;
}
