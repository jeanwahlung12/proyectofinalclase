#pragma once
#include <iostream>
#include <string>
#include "carta.h"
#include <vector>
using namespace std;

class inventario{
private:
	vector<carta*> cartas;
public:
	void setcarta(carta*);
	void getcarta();
};