#pragma once
#include "Torneo.h"
#include "equipo.h"
class Champions: public Torneo{
	
	public:
		Champions();
		Champions(string,int,equipo*,equipo*);
		
};
