#include <iostream>
#include <string>
#include "jugador.h"
#pragma once
#include <vector>

class equipo{
	protected:
		int goles;
		vector <jugador*> jugadores;
	public:
		equipo(int);
		 void setjugador(jugador*);
		 void setgoles(int);
		 int getgoles();
		 jugador* getjugador(int);
};