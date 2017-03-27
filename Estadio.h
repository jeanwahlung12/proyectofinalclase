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
		virtual void setnombre(string);
		virtual void setcapacidad(int);
		virtual string settipograma(string);
		virtual string getnombre();
		virtual int getcapacidad();
		virtual string gettipograma();
};