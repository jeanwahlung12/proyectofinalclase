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
		virtual void setjugador(jugador*);
		virtual void setgoles(int);
		virtual int getgoles();
		virtual jugador* getjugador(int);
};