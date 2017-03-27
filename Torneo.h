#pragma once
#include "equipo.h"
class Torneo{
	protected:
		string nombre;
		int premio;
		vector<equipo*> equipos;
	public:
		Torneo();
		Torneo(string,int);
		void setnombre(string);
		void setpremio(int);
		void setequipos(equipo*);
		string getnombre();
		int getpremio();
		equipo* getequipo(int);

};