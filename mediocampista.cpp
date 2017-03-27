#include "mediocampista.h"
#include <stdlib.h>
#include <time.h>
mediocampista:: mediocampista(string name,int age,string pie,string nacio,int vel) :jugador(name,age,pie,nacio,vel){

}

void mediocampista::metergol(int num,equipo* team){
	if(num==7){
		team->setgoles(team->getgoles() + 1);
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
void mediocampista::defender(int num){
	if(num==7){
		team->setgoles(team->getgoles() - 1);
	}
}
