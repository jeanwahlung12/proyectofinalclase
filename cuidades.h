#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Estadio.h"
using namespace std;
class cuidades{
	protected:
		string nombre;
		int poblacion;
		vector<Estadio*> estadios;
	public:
		cuidades();
		cuidades(string,int);
		virtual void setnombre(string);
		virtual void setpoblacion(int);
		virtual void setestadios(Estadio*);
		virtual string getnombre();
		virtual int getpoblacion();
		virtual Estadio* getestadio(int);


};