#pragma once
#include "jugador.h"

class portero : public jugador{
	protected:
		int golesrecibidos;
	public:
		portero(string,int,string,string,int,int);
		virtual bool metergol(int);
		virtual int calcularsuerte();
		virtual int adrenalina(int);
		virtual bool defender(int);
		void setgolesrecibidos(int);
		int getgolesrecibidos();		
};