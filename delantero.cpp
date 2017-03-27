#include "delantero.h"
#include <stdlib.h>
#include <time.h>
delantero:: delantero(string name,int age,string pie,string nacio,int vel,int goals) :jugador(name,age,pie,nacio,vel){
	golesanotados=goals;	

}

bool delantero::metergol(int num){
	if(num==7){
		return true;
	}
	else{
		return false;
	}
}

int delantero::calcularsuerte(){
	int num;
	srand(time(NULL));
	num = rand()%10;
	return num;
}
int delantero::adrenalina(int num){
	int adren;
	srand(time(NULL));
	adren = rand()%10;

	if(adren%2==0){
		num = rand()%7;
	}
	return num;
}
bool delantero::defender(int num){
	if(num==7){
		return true;
	}
	else{
		return false;
	}
}

void delantero::setgolesanotados(int anotados){
	golesanotados=anotados;
}
	
int delantero::getgolesanotados(){

}
