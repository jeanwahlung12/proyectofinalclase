#include "defensa.h"

#include <stdlib.h>
#include <time.h>
defensa:: defensa(string name,int age,string pie,string nacio,int vel) :jugador(name,age,pie,nacio,vel){

}

bool defensa::metergol(int num){
	if(num==7){
		return true;
	}
	else{
		return false;
	}
}

int defensa::calcularsuerte(){
	int num;
	srand(time(NULL));
	num = rand()%20;
	return num;

}
int defensa::adrenalina(int num){
	int adren;
	srand(time(NULL));
	adren = rand()%10;

	if(adren%3==0){
		num = rand()%10;
	}
	return num;
}
bool defensa::defender(int num){
	if(num==7){
		return true;
	}
	else{
		return false;
	}
}
