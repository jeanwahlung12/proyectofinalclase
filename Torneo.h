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
		virtual void setnombre(string);
		virtual void setpremio();
		virtual void setequipos();
		virtual string getnombre();
		virtual int getpremio();
		virtual equipo* getequipo(int);

};