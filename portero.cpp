#include "portero.h"
#include <stdlib.h>
#include <time.h>
portero:: portero(string name,int age,string pie,string nacio,int vel,int goals) :jugador(name,age,pie,nacio,vel){
golesrecibidos=goals;	

}

bool portero::metergol(int num){
	if(num==7){
		return true;
	}
	else{
		return false;
	}
}

int portero::calcularsuerte(){
	int num;
	srand(time(NULL));
	num = rand()%200;
	return num;
}
int portero::adrenalina(int num){
	int adren;
	srand(time(NULL));
	adren = rand()%10;

	if(adren%5==0){
		num = rand()%100;
	}
	return num;
}
bool portero::defender(int num){
	if(num==7){
		return true;
	}
	else{
		return false;
	}
}