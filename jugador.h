#include <iostream>
#pragma once
#include <string>

using namespace std;

class jugador{
	protected:
		string nombre;
		int edad;
		string piehabil;
		string nacionalidad;
		int velocidad;
	public:
		jugador(string,int,string,string,int);
		virtual bool metergol(int)=0;
		virtual int calcularsuerte()=0;
		virtual int adrenalina(int)=0;
		virtual bool defender(int)=0;
		string getnombre();
		int getedad();
		string getpiehabil();
		string getnacionalidad();
		
		int getvelocidad();



};