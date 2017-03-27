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
		void setnombre(string);
		void setpoblacion(int);
		void setestadios(Estadio*);
		string getnombre();
		int getpoblacion();
		Estadio* getestadio(int);


};