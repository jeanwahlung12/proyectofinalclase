#include "equipo.h"

equipo::equipo(int gol){
	goles=gol;
}

void equipo::setjugador(jugador* player){
	jugadores.push_back(player);
}
void equipo::setgoles(int num){
	goles=num;
}

int equipo::getgoles(){
	return goles;
}

jugador* equipo:: getjugador(int position){
	return jugadores[position];
}