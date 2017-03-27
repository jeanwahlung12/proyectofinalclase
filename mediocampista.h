#pragma once
#include "jugador.h"

class mediocampista : public jugador{
	public:
		mediocampista(string,int,string,string,int);
		virtual void metergol(int);
		virtual int calcularsuerte();
		virtual int adrenalina(int);
		virtual void defender(int);		
};