#pragma once
#include "jugador.h"

class delantero : public jugador{
	protected:
		int golesanotadps;
	public:
		delantero(string,int,string,string,int,int);
		virtual void metergol(int);
		virtual int calcularsuerte();
		virtual int adrenalina(int);
		virtual void defender(int);
		virtual void setgolesanotados(anotados);
		virtual int getgolesanotados();		
};