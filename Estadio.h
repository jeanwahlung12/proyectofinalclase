#pragma once
#include <iostream>
#include <string>
using namespace std;
class Estadio{
	protected:
		string nombre;
		int capacidad;
		string tipograma;
	public:
		Estadio(string,int,string);
		Estadio();
		void setnombre(string);
		void setcapacidad(int);
		void settipograma(string);
		string getnombre();
		int getcapacidad();
		string gettipograma();
};