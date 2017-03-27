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
		virtual void metergol(int)=0;
		virtual int calcularsuerte()=0;
		virtual int adrenalina(int)=0;
		virtual void defender(int)=0;
		virtual string getnombre();
		virtual int getedad();
		virtual string getpiehabil();
		virtual string getnacionalidad();
		
		virtual int getvelocidad();



};