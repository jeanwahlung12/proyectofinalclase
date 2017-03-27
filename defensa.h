#pragma once
#include "jugador.h"

class defensa : public jugador{
	public:
		defensa(string,int,string,string,int);
		virtual bool metergol(int);
		virtual int calcularsuerte();
		virtual int adrenalina(int);
		virtual bool defender(int);		
};