#pragma once
#include "equipo.h"
class Torneo{
	protected:
		string nombre;
		int premio;
		equipo* team1;
		equipo* team2;
	public:
		Torneo();
		Torneo(string,int,equipo*,equipo*);
		void setnombre(string);
		void setpremio(int);
		string getnombre();
		int getpremio();

};