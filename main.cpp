
//#include <ncurses.h>
#include "jugador.h"
#include "defensa.h"
#include "equipo.h"
#include "portero.h"
#include "delantero.h"
#include "mediocampista.h"
#include "barcelonafc.h"
#include "Estadio.h"
#include "Campnou.h"
#include "cuidades.h"
#include "Barcelona.h"
#include "Manchester.h"
#include "Madrid.h"
#include "Napoli.h"
#include "ChelseaCD.h"
#include "Juventus.h"
#include "Munich.h"
#include "Torneo.h"
#include "Champions.h"
#include "EuropaLeague.h"
#include "Dormund.h"
#include "SantiagoBernabeu.h"
#include "StanfordBridge.h"
#include "OldTrafford.h"
#include "AllianzArena.h"
#include "SignalidunaPark.h"
#include "SanPaolo.h"
#include "JuventusStadium.h"
#include "RealMadridFC.h"
#include "ManU.h"
#include "Bayern.h"
#include "BorussiaDormund.h"
#include "Chelsea.h"
#include "JuventusFC.h"
#include "NapoliFC.h"
using namespace std;
// declaracion del metodo
int run();

int main(){
	run();
	return 0;
}

int run(){//Metodo Run
	vector <equipo*> teams;
	int opc,opcequipo,cantjugadores, opcpos, edad, velocidad;
	string nombre, nombrej, piehabil, nacionalidad;
	cin >> nombre;
	cout << nombre;
	cout << "----SIMULACIÓN DE PARTIDOS----\n\n";
	cout << "Bienvenido! Escoja una opción, recuerde que para simular partidos necesita crear equipos primero. \n1.Agregar Equipos\n2.Agregar Ciudades\n3.Simulacion ";
	cin >> opc;

	switch (opc){
		case 1:{
		cout << "----AGREGAR EQUIPOS----" << endl;
		cout << "\n\nQue equipo desea agregar? \n1.Borussia Dormund\n2.Barcelona FC\n3.Juventus FC\n4.Bayern Munich\n5.Chelsea\n6.Manchester United\n7.Real Madrid\n8.Napoli";
		cin >> opcequipo;
		cout << "Ingrese la cantidad de jugadores que tendra su equipo: ";
		cin >> cantjugadores;
		cout << "\n----AGREGAR JUGADORES----" << endl;
		//COMIENZA LA CREACION DE EQUIPO SELECCIONADO
		if (opcequipo==1){//DORTMUND
				equipo* Boruss = new BorussiaDormund(0);

				//COMIENZA AGREGAR JUGADORES AL EQUIPO
				for (int i = 0; i < cantjugadores; ++i)
				{
					cout << "\n¿Que posicion es el jugador?\n1.Mediocampista\n2.Defensa\3.Delantero\n4.Portero ";
					cin >> opcpos;
					cout << "Ingrese el nombre del jugador: ";
					cin >> nombrej;
					cout << "Ingrese la edad del jugador: ";
					cin >> edad;
					cout << "Pie habil del jugador: ";
					cin >> piehabil;
					cout << "Nacionalidad del jugador: ";
					cin >> nacionalidad;
					cout << "Velocidad del jugador: ";
					cin >> velocidad;

					if (opcpos==1){
						jugador* medio = new mediocampista(nombrej,edad,piehabil,nacionalidad,velocidad);
						Boruss->setjugador(medio);
						//termina posicion medio campista.
					}else if (opcpos==2){
						jugador* def = new defensa(nombrej,edad,piehabil,nacionalidad,velocidad);
						Boruss->setjugador(def);
						//Termina posicion defensa
					}else if (opcpos==3){
						jugador* del = new delantero(nombrej,edad,piehabil,nacionalidad,velocidad,0);
						Boruss->setjugador(del);
						//Termina posicion delantero
					}else if (opcpos==4){
						jugador* port = new portero(nombrej,edad,piehabil,nacionalidad,velocidad,0);
						Boruss->setjugador(port);
						//Termina posicion arquero
					}else{
						cout << "Opción no disponible.";
					}
				}
				//FINALIZA AGREGAR JUGADORES AL EQUIPO
				teams.push_back(Boruss);

		}//FIN DORTMUND
	}//fin AGREGAR A DORMUND
		break;

		case 2:{

				equipo* barca = new barcelonafc (0);
				for (int i = 0; i < cantjugadores; ++i)
				{
					cout << "\n¿Que posicion es el jugador?\n1.Mediocampista\n2.Defensa\3.Delantero\n4.Portero ";
					cin >> opcpos;
					cout << "Ingrese el nombre del jugador: ";
					cin >> nombrej;
					cout << "Ingrese la edad del jugador: ";
					cin >> edad;
					cout << "Pie habil del jugador: ";
					cin >> piehabil;
					cout << "Nacionalidad del jugador: ";
					cin >> nacionalidad;
					cout << "Velocidad del jugador: ";
					cin >> velocidad;

					if (opcpos==1){
						jugador* medio = new mediocampista(nombrej,edad,piehabil,nacionalidad,velocidad);
						barca->setjugador(medio);
						//termina posicion medio campista.
					}else if (opcpos==2){
						jugador* def = new defensa(nombrej,edad,piehabil,nacionalidad,velocidad);
						barca->setjugador(def);
						//Termina posicion defensa
					}else if (opcpos==3){
						jugador* del = new delantero(nombrej,edad,piehabil,nacionalidad,velocidad,0);
						barca->setjugador(del);
						//Termina posicion delantero
					}else if (opcpos==4){
						jugador* port = new portero(nombrej,edad,piehabil,nacionalidad,velocidad,0);
						barca->setjugador(port);
						//Termina posicion arquero
					}else{
						cout << "Opción no disponible.";
					}//FINALIZA AGREGAR JUGADORES					
				}

				teams.push_back(barca);
			}

		break;

		case 3:{
				equipo* juve = new JuventusFC(0);

				for (int i = 0; i < cantjugadores; ++i)
				{
					cout << "\n¿Que posicion es el jugador?\n1.Mediocampista\n2.Defensa\3.Delantero\n4.Portero ";
					cin >> opcpos;
					cout << "Ingrese el nombre del jugador: ";
					cin >> nombrej;
					cout << "Ingrese la edad del jugador: ";
					cin >> edad;
					cout << "Pie habil del jugador: ";
					cin >> piehabil;
					cout << "Nacionalidad del jugador: ";
					cin >> nacionalidad;
					cout << "Velocidad del jugador: ";
					cin >> velocidad;

					if (opcpos==1){
						jugador* medio = new mediocampista(nombrej,edad,piehabil,nacionalidad,velocidad);
						juve->setjugador(medio);
						//termina posicion medio campista.
					}else if (opcpos==2){
						jugador* def = new defensa(nombrej,edad,piehabil,nacionalidad,velocidad);
						juve->setjugador(def);
						//Termina posicion defensa
					}else if (opcpos==3){
						jugador* del = new delantero(nombrej,edad,piehabil,nacionalidad,velocidad,0);
						juve->setjugador(del);
						//Termina posicion delantero
					}else if (opcpos==4){
						jugador* port = new portero(nombrej,edad,piehabil,nacionalidad,velocidad,0);
						juve->setjugador(port);
						//Termina posicion arquero
					}else{
						cout << "Opción no disponible.";
					}//FINALIZA AGREGAR JUGADORES
				}
				teams.push_back(juve);


		}//fin agregar juventus
		break;
		case 4:{
			equipo* bay = new Bayern(0);

			for (int i = 0; i < cantjugadores; ++i)
				{
					cout << "\n¿Que posicion es el jugador?\n1.Mediocampista\n2.Defensa\3.Delantero\n4.Portero ";
					cin >> opcpos;
					cout << "Ingrese el nombre del jugador: ";
					cin >> nombrej;
					cout << "Ingrese la edad del jugador: ";
					cin >> edad;
					cout << "Pie habil del jugador: ";
					cin >> piehabil;
					cout << "Nacionalidad del jugador: ";
					cin >> nacionalidad;
					cout << "Velocidad del jugador: ";
					cin >> velocidad;

					if (opcpos==1){
						jugador* medio = new mediocampista(nombrej,edad,piehabil,nacionalidad,velocidad);
						bay->setjugador(medio);
						//termina posicion medio campista.
					}else if (opcpos==2){
						jugador* def = new defensa(nombrej,edad,piehabil,nacionalidad,velocidad);
						bay->setjugador(def);
						//Termina posicion defensa
					}else if (opcpos==3){
						jugador* del = new delantero(nombrej,edad,piehabil,nacionalidad,velocidad,0);
						bay->setjugador(del);
						//Termina posicion delantero
					}else if (opcpos==4){
						jugador* port = new portero(nombrej,edad,piehabil,nacionalidad,velocidad,0);
						bay->setjugador(port);
						//Termina posicion arquero
					}else{
						cout << "Opción no disponible.";
					}//FINALIZA AGREGAR JUGADORES
				}
				teams.push_back(bay);

		}//Fin agregar munich
		break;
		
		
	}//Fin Switch
}//Fin Del Metodo Run
