#include "mediocampista.h"
#include <stdlib.h>
#include <time.h>
mediocampista:: mediocampista(string name,int age,string pie,string nacio,int vel) :jugador(name,age,pie,nacio,vel){

}

bool mediocampista::metergol(int num){
	if(num==7){
		return true;
	}
	else{
		return false;
	}
}

int mediocampista::calcularsuerte(){
	int num;
	srand(time(NULL));
	num = rand()%13;
	return num;

}
int mediocampista::adrenalina(int num){
	int adren;
	srand(time(NULL));
	adren = rand()%10;

	if(adren%3==0){
		num = rand()%10;
	}
	return num;
}
bool mediocampista::defender(int num){
	if(num==7){
		return true;
	}
	else{
		return false;
	}
}
