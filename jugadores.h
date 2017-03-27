#include <iostream>
#pragma once
#include <string>
using namespace std;

class jugadores{
	protected:
		string nombre;
		int edad;
		string piehabil;
		string nacionalidad;
		string equipo;
		int velocidad;
	public:
		jugadores()
		virtual void metergol(int)=0;
		virtual int calcularsuerte()=0;
		virtual void adrenalina(int)=0;
		virtual void defender(int)=0;



}