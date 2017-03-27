#include "delantero.h"
#include <stdlib.h>
#include <time.h>
delantero:: delantero(string name,int age,string pie,string nacio,int vel,int goals) :jugador(name,age,pie,nacio,vel){
golesanotados=goals;	

}

void delantero::metergol(int num,equipo* team){
	if(num==7){
		team->setgoles(team->getgoles() + 1);
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

	if(adren%2=0){
		num = rand()%7;
	}
	return num;
}
void delantero::defender(int num){
	if(num==7){
		team->setgoles(team->getgoles() - 1);
	}
}