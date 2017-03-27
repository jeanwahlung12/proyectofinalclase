#pragma once
#include "jugador.h"

class defensa : public jugador{
	public:
		defensa(string,int,string,string,int);
		virtual void metergol(int);
		virtual int calcularsuerte();
		virtual int adrenalina(int);
		virtual void defender(int);		
};