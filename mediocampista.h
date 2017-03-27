#pragma once
#include "jugador.h"

class mediocampista : public jugador{
	public:
		mediocampista(string,int,string,string,int);
		virtual bool metergol(int);
		virtual int calcularsuerte();
		virtual int adrenalina(int);
		virtual bool defender(int);		
};