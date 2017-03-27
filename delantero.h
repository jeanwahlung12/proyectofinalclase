#pragma once
#include "jugador.h"

class delantero : public jugador{
	protected:
		int golesanotados;
	public:
		delantero(string,int,string,string,int,int);
		virtual bool metergol(int);
		virtual int calcularsuerte();
		virtual int adrenalina(int);
		virtual bool defender(int);
		virtual void setgolesanotados(int);
		virtual int getgolesanotados();		
};