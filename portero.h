#pragma once
#include "jugador.h"

class portero : public jugador{
	protected:
		int golesrecibidos;
	public:
		portero(string,int,string,string,int,int);
		virtual void metergol(int);
		virtual int calcularsuerte();
		virtual int adrenalina(int);
		virtual void defender(int);
		virtual void setgolesrecibidos(int);
		virtual int getgolesrecibidos();		
};