#include "portero.h"
#include <stdlib.h>
#include <time.h>
portero:: portero(string name,int age,string pie,string nacio,int vel,int goals) :jugador(name,age,pie,nacio,vel){
golesrecibidos=goals;	

}

void portero::metergol(int num,equipo* team){
	if(num==7){
		team->setgoles(team->getgoles() + 1);
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

	if(adren%5=0){
		num = rand()%100;
	}
	return num;
}
void portero::defender(int num){
	if(num==7){
		team->setgoles(team->getgoles() - 1);
	}
}