
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
	//run();
	cout << "HOLAS!";
	return 0;
}

/*int run(){//Metodo Run
	vector <equipo*> teams;
	vector <cuidades*> city;
	int opc,opcequipo,cantjugadores, opcpos, edad, velocidad, opcciud, poblacion, num_estadios, opcest, capac;
	string nombre, nombrej, piehabil, nacionalidad, grama, name_stadium;
	cin >> nombre;
	cout << nombre;
	cout << "----SIMULACIÓN DE PARTIDOS----\n\n";
	cout << "Bienvenido! Escoja una opción, recuerde que para simular partidos necesita crear equipos primero. \n1.Agregar Equipos\n2.Agregar Ciudades\n3.Simulacion\n4.Salir ";
	cin >> opc;

	while (opc!=4){

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

		}else if (opcequipo==2){

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
			
		}else if (opcequipo==3){
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


		}else if(opcequipo==4){
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
				//fin agregar munich
		}else if (opcequipo==5){

				equipo* chels = new Chelsea(0);

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
						chels->setjugador(medio);
						//termina posicion medio campista.
					}else if (opcpos==2){
						jugador* def = new defensa(nombrej,edad,piehabil,nacionalidad,velocidad);
						chels->setjugador(def);
						//Termina posicion defensa
					}else if (opcpos==3){
						jugador* del = new delantero(nombrej,edad,piehabil,nacionalidad,velocidad,0);
						chels->setjugador(del);
						//Termina posicion delantero
					}else if (opcpos==4){
						jugador* port = new portero(nombrej,edad,piehabil,nacionalidad,velocidad,0);
						chels->setjugador(port);
						//Termina posicion arquero
					}else{
						cout << "Opción no disponible.";
					}//FINALIZA AGREGAR JUGADORES
				}
				teams.push_back(chels);

		}else if (opcequipo==6){

			equipo* united = new ManU(0);
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
						united->setjugador(medio);
						//termina posicion medio campista.
					}else if (opcpos==2){
						jugador* def = new defensa(nombrej,edad,piehabil,nacionalidad,velocidad);
						united->setjugador(def);
						//Termina posicion defensa
					}else if (opcpos==3){
						jugador* del = new delantero(nombrej,edad,piehabil,nacionalidad,velocidad,0);
						united->setjugador(del);
						//Termina posicion delantero
					}else if (opcpos==4){
						jugador* port = new portero(nombrej,edad,piehabil,nacionalidad,velocidad,0);
						united->setjugador(port);
						//Termina posicion arquero
					}else{
						cout << "Opción no disponible.";
					}//FINALIZA AGREGAR JUGADORES
				}
				teams.push_back(united);


		}else if(opcequipo==7){
			equipo* real = new RealMadridFC(0);

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
						real->setjugador(medio);
						//termina posicion medio campista.
					}else if (opcpos==2){
						jugador* def = new defensa(nombrej,edad,piehabil,nacionalidad,velocidad);
						real->setjugador(def);
						//Termina posicion defensa
					}else if (opcpos==3){
						jugador* del = new delantero(nombrej,edad,piehabil,nacionalidad,velocidad,0);
						real->setjugador(del);
						//Termina posicion delantero
					}else if (opcpos==4){
						jugador* port = new portero(nombrej,edad,piehabil,nacionalidad,velocidad,0);
						real->setjugador(port);
						//Termina posicion arquero
					}else{
						cout << "Opción no disponible.";
					}//FINALIZA AGREGAR JUGADORES
				}
				teams.push_back(real);

		}else if(opcequipo==8){
			equipo* nap = new NapoliFC(0);

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
						nap->setjugador(medio);
						//termina posicion medio campista.
					}else if (opcpos==2){
						jugador* def = new defensa(nombrej,edad,piehabil,nacionalidad,velocidad);
						nap->setjugador(def);
						//Termina posicion defensa
					}else if (opcpos==3){
						jugador* del = new delantero(nombrej,edad,piehabil,nacionalidad,velocidad,0);
						nap->setjugador(del);
						//Termina posicion delantero
					}else if (opcpos==4){
						jugador* port = new portero(nombrej,edad,piehabil,nacionalidad,velocidad,0);
						nap->setjugador(port);
						//Termina posicion arquero
					}else{
						cout << "Opción no disponible.";
					}//FINALIZA AGREGAR JUGADORES
				}
				teams.push_back(nap);

			}else{
				cout << "Numero incorrecto";
			}
			
		}//fin case 1
		break;
		case 2:{
			cout << "----AGREGAR CIUDADES----" << endl;
			cout << "Que ciudad desea agregar? \n1.Barcelona\n2.Chelsea\n3.Dormund\n4.Juventus\n5.Madrid\n6.Manchester\n7.Munich: ";
			cin >> opcciud;
			cout << "Poblacion de la ciudad: ";
			cin >> poblacion;
			cout << "Cuantos estadios desea agregar a la ciudad?: ";
			cin >> num_estadios;


			if (opcciud==1){
				cuidades* barc = new Barcelona("Barcelona",poblacion);

				for (int i = 0; i < num_estadios; ++i)
				{
					cout << "Que estadio desea agregar?\n1.Allianz Arena\n2.Camp Nou\n3.Juventus Stadium\n4.Old Trafford\n5.San Paolo\n6.Santiago Bernabeu\n7.Signaliduna Park\n8.Stanford Bridge";
					cin >> opcest;
					cout << "Capacidad del estadio: ";
					cin >> capac;
					cout << "Tipo de grama: ";
					cin >> grama;

					//TIPOS DE ESTADIO
					if (opcest==1){
						name_stadium ="Allianz Arena";
						Estadio* allian = new AllianzArena(name_stadium,capac,grama);
						barc->setestadios(allian);	
					}else if (opcest==2){
						name_stadium = "Camp Nou";
						Estadio* cam = new Campnou(name_stadium,capac,grama);
						barc->setestadios(cam);
					}else if(opcest==3){
						name_stadium = "Juventus Stadium";
						Estadio* juv = new JuventusStadium(name_stadium,capac,grama);
						barc->setestadios(juv);
					}else if (opcest==4){
						name_stadium = "OldTrafford";
						Estadio* old = new OldTrafford(name_stadium,capac,grama);
						barc->setestadios(old);
					}else if (opcest==5){
						name_stadium = "San Paolo";
						Estadio* SanP = new SanPaolo(name_stadium,capac,grama);
						barc->setestadios(SanP);
					}else if (opcest==6){
						name_stadium = "SantiagoBernabeu";
						Estadio* Sant = new SantiagoBernabeu(name_stadium,capac,grama);
						barc->setestadios(Sant);
					}else if (opcest==7){
						name_stadium = "Signaliduna Park";
						Estadio* Signa = new SignalidunaPark(name_stadium,capac,grama);
						barc->setestadios(Signa);
					}else if (opcest==8){
						name_stadium = "Stanfor Bridge";
						Estadio* Stanford = new StanfordBridge(name_stadium,capac,grama);
						barc->setestadios(Stanford);
					}else{
						cout << "opcion invalida";
					}
					city.push_back(barc);

				}
			}else if (opcciud==2){
				cuidades* cchels = new ChelseaCD("Chelsea",poblacion);

				for (int i = 0; i < num_estadios; ++i)
				{
					cout << "Que estadio desea agregar?\n1.Allianz Arena\n2.Camp Nou\n3.Juventus Stadium\n4.Old Trafford\n5.San Paolo\n6.Santiago Bernabeu\n7.Signaliduna Park\n8.Stanford Bridge";
					cin >> opcest;
					cout << "Capacidad del estadio: ";
					cin >> capac;
					cout << "Tipo de grama: ";
					cin >> grama;

					//TIPOS DE ESTADIO
					if (opcest==1){
						name_stadium ="Allianz Arena";
						Estadio* allian = new AllianzArena(name_stadium,capac,grama);
						cchels->setestadios(allian);	
					}else if (opcest==2){
						name_stadium = "Camp Nou";
						Estadio* cam = new Campnou(name_stadium,capac,grama);
						cchels->setestadios(cam);
					}else if(opcest==3){
						name_stadium = "Juventus Stadium";
						Estadio* juv = new JuventusStadium(name_stadium,capac,grama);
						cchels->setestadios(juv);
					}else if (opcest==4){
						name_stadium = "OldTrafford";
						Estadio* old = new OldTrafford(name_stadium,capac,grama);
						cchels->setestadios(old);
					}else if (opcest==5){
						name_stadium = "San Paolo";
						Estadio* SanP = new SanPaolo(name_stadium,capac,grama);
						cchels->setestadios(SanP);
					}else if (opcest==6){
						name_stadium = "SantiagoBernabeu";
						Estadio* Sant = new SantiagoBernabeu(name_stadium,capac,grama);
						cchels->setestadios(Sant);
					}else if (opcest==7){
						name_stadium = "Signaliduna Park";
						Estadio* Signa = new SignalidunaPark(name_stadium,capac,grama);
						cchels->setestadios(Signa);
					}else if (opcest==8){
						name_stadium = "Stanfor Bridge";
						Estadio* Stanford = new StanfordBridge(name_stadium,capac,grama);
						cchels->setestadios(Stanford);
					}else{
						cout << "opcion invalida";
					}					
			}
			city.push_back(cchels);
			
			}else if(opcciud==3){
				cuidades* dorm = new Dormund("Dormund",poblacion);

				for (int i = 0; i < num_estadios; ++i)
				{
					cout << "Que estadio desea agregar?\n1.Allianz Arena\n2.Camp Nou\n3.Juventus Stadium\n4.Old Trafford\n5.San Paolo\n6.Santiago Bernabeu\n7.Signaliduna Park\n8.Stanford Bridge";
					cin >> opcest;
					cout << "Capacidad del estadio: ";
					cin >> capac;
					cout << "Tipo de grama: ";
					cin >> grama;

					//TIPOS DE ESTADIO
					if (opcest==1){
						name_stadium ="Allianz Arena";
						Estadio* allian = new AllianzArena(name_stadium,capac,grama);
						dorm->setestadios(allian);	
					}else if (opcest==2){
						name_stadium = "Camp Nou";
						Estadio* cam = new Campnou(name_stadium,capac,grama);
						dorm->setestadios(cam);
					}else if(opcest==3){
						name_stadium = "Juventus Stadium";
						Estadio* juv = new JuventusStadium(name_stadium,capac,grama);
						dorm->setestadios(juv);
					}else if (opcest==4){
						name_stadium = "OldTrafford";
						Estadio* old = new OldTrafford(name_stadium,capac,grama);
						dorm->setestadios(old);
					}else if (opcest==5){
						name_stadium = "San Paolo";
						Estadio* SanP = new SanPaolo(name_stadium,capac,grama);
						dorm->setestadios(SanP);
					}else if (opcest==6){
						name_stadium = "SantiagoBernabeu";
						Estadio* Sant = new SantiagoBernabeu(name_stadium,capac,grama);
						dorm->setestadios(Sant);
					}else if (opcest==7){
						name_stadium = "Signaliduna Park";
						Estadio* Signa = new SignalidunaPark(name_stadium,capac,grama);
						dorm->setestadios(Signa);
					}else if (opcest==8){
						name_stadium = "Stanfor Bridge";
						Estadio* Stanford = new StanfordBridge(name_stadium,capac,grama);
						dorm->setestadios(Stanford);
					}else{
						cout << "opcion invalida";
					}					
			}
			city.push_back(dorm);
			

			}else if(opcciud==4){
				cuidades* juvct = new Juventus("Juventus",poblacion);

				for (int i = 0; i < num_estadios; ++i)
				{
					cout << "Que estadio desea agregar?\n1.Allianz Arena\n2.Camp Nou\n3.Juventus Stadium\n4.Old Trafford\n5.San Paolo\n6.Santiago Bernabeu\n7.Signaliduna Park\n8.Stanford Bridge";
					cin >> opcest;
					cout << "Capacidad del estadio: ";
					cin >> capac;
					cout << "Tipo de grama: ";
					cin >> grama;

					//TIPOS DE ESTADIO
					if (opcest==1){
						name_stadium ="Allianz Arena";
						Estadio* allian = new AllianzArena(name_stadium,capac,grama);
						juvct->setestadios(allian);	
					}else if (opcest==2){
						name_stadium = "Camp Nou";
						Estadio* cam = new Campnou(name_stadium,capac,grama);
						juvct->setestadios(cam);
					}else if(opcest==3){
						name_stadium = "Juventus Stadium";
						Estadio* juv = new JuventusStadium(name_stadium,capac,grama);
						juvct->setestadios(juv);
					}else if (opcest==4){
						name_stadium = "OldTrafford";
						Estadio* old = new OldTrafford(name_stadium,capac,grama);
						juvct->setestadios(old);
					}else if (opcest==5){
						name_stadium = "San Paolo";
						Estadio* SanP = new SanPaolo(name_stadium,capac,grama);
						juvct->setestadios(SanP);
					}else if (opcest==6){
						name_stadium = "SantiagoBernabeu";
						Estadio* Sant = new SantiagoBernabeu(name_stadium,capac,grama);
						juvct->setestadios(Sant);
					}else if (opcest==7){
						name_stadium = "Signaliduna Park";
						Estadio* Signa = new SignalidunaPark(name_stadium,capac,grama);
						juvct->setestadios(Signa);
					}else if (opcest==8){
						name_stadium = "Stanfor Bridge";
						Estadio* Stanford = new StanfordBridge(name_stadium,capac,grama);
						juvct->setestadios(Stanford);
					}else{
						cout << "opcion invalida";
					}					
			}
			city.push_back(juvct);

			}else if (opcciud==5){
				cuidades* mad = new Madrid("Madrid",poblacion);

				for (int i = 0; i < num_estadios; ++i)
				{
					cout << "Que estadio desea agregar?\n1.Allianz Arena\n2.Camp Nou\n3.Juventus Stadium\n4.Old Trafford\n5.San Paolo\n6.Santiago Bernabeu\n7.Signaliduna Park\n8.Stanford Bridge";
					cin >> opcest;
					cout << "Capacidad del estadio: ";
					cin >> capac;
					cout << "Tipo de grama: ";
					cin >> grama;

					//TIPOS DE ESTADIO
					if (opcest==1){
						name_stadium ="Allianz Arena";
						Estadio* allian = new AllianzArena(name_stadium,capac,grama);
						mad->setestadios(allian);	
					}else if (opcest==2){
						name_stadium = "Camp Nou";
						Estadio* cam = new Campnou(name_stadium,capac,grama);
						mad->setestadios(cam);
					}else if(opcest==3){
						name_stadium = "Juventus Stadium";
						Estadio* juv = new JuventusStadium(name_stadium,capac,grama);
						mad->setestadios(juv);
					}else if (opcest==4){
						name_stadium = "OldTrafford";
						Estadio* old = new OldTrafford(name_stadium,capac,grama);
						mad->setestadios(old);
					}else if (opcest==5){
						name_stadium = "San Paolo";
						Estadio* SanP = new SanPaolo(name_stadium,capac,grama);
						mad->setestadios(SanP);
					}else if (opcest==6){
						name_stadium = "SantiagoBernabeu";
						Estadio* Sant = new SantiagoBernabeu(name_stadium,capac,grama);
						mad->setestadios(Sant);
					}else if (opcest==7){
						name_stadium = "Signaliduna Park";
						Estadio* Signa = new SignalidunaPark(name_stadium,capac,grama);
						mad->setestadios(Signa);
					}else if (opcest==8){
						name_stadium = "Stanfor Bridge";
						Estadio* Stanford = new StanfordBridge(name_stadium,capac,grama);
						mad->setestadios(Stanford);
					}else{
						cout << "opcion invalida";
					}					
			}
			city.push_back(mad);

			}else if(opcciud==6){
				cuidades* man = new Manchester("Manchester",poblacion);

				for (int i = 0; i < num_estadios; ++i)
				{
					cout << "Que estadio desea agregar?\n1.Allianz Arena\n2.Camp Nou\n3.Juventus Stadium\n4.Old Trafford\n5.San Paolo\n6.Santiago Bernabeu\n7.Signaliduna Park\n8.Stanford Bridge";
					cin >> opcest;
					cout << "Capacidad del estadio: ";
					cin >> capac;
					cout << "Tipo de grama: ";
					cin >> grama;

					//TIPOS DE ESTADIO
					if (opcest==1){
						name_stadium ="Allianz Arena";
						Estadio* allian = new AllianzArena(name_stadium,capac,grama);
						man->setestadios(allian);	
					}else if (opcest==2){
						name_stadium = "Camp Nou";
						Estadio* cam = new Campnou(name_stadium,capac,grama);
						man->setestadios(cam);
					}else if(opcest==3){
						name_stadium = "Juventus Stadium";
						Estadio* juv = new JuventusStadium(name_stadium,capac,grama);
						man->setestadios(juv);
					}else if (opcest==4){
						name_stadium = "OldTrafford";
						Estadio* old = new OldTrafford(name_stadium,capac,grama);
						man->setestadios(old);
					}else if (opcest==5){
						name_stadium = "San Paolo";
						Estadio* SanP = new SanPaolo(name_stadium,capac,grama);
						man->setestadios(SanP);
					}else if (opcest==6){
						name_stadium = "SantiagoBernabeu";
						Estadio* Sant = new SantiagoBernabeu(name_stadium,capac,grama);
						man->setestadios(Sant);
					}else if (opcest==7){
						name_stadium = "Signaliduna Park";
						Estadio* Signa = new SignalidunaPark(name_stadium,capac,grama);
						man->setestadios(Signa);
					}else if (opcest==8){
						name_stadium = "Stanfor Bridge";
						Estadio* Stanford = new StanfordBridge(name_stadium,capac,grama);
						man->setestadios(Stanford);
					}else{
						cout << "opcion invalida";
					}					
			}
			city.push_back(man);

			}else if(opcciud==7){
				cuidades* mun = new Munich("Munich",poblacion);

				for (int i = 0; i < num_estadios; ++i)
				{
					cout << "Que estadio desea agregar?\n1.Allianz Arena\n2.Camp Nou\n3.Juventus Stadium\n4.Old Trafford\n5.San Paolo\n6.Santiago Bernabeu\n7.Signaliduna Park\n8.Stanford Bridge";
					cin >> opcest;
					cout << "Capacidad del estadio: ";
					cin >> capac;
					cout << "Tipo de grama: ";
					cin >> grama;

					//TIPOS DE ESTADIO
					if (opcest==1){
						name_stadium ="Allianz Arena";
						Estadio* allian = new AllianzArena(name_stadium,capac,grama);
						mun->setestadios(allian);	
					}else if (opcest==2){
						name_stadium = "Camp Nou";
						Estadio* cam = new Campnou(name_stadium,capac,grama);
						mun->setestadios(cam);
					}else if(opcest==3){
						name_stadium = "Juventus Stadium";
						Estadio* juv = new JuventusStadium(name_stadium,capac,grama);
						mun->setestadios(juv);
					}else if (opcest==4){
							name_stadium = "OldTrafford";
						Estadio* old = new OldTrafford(name_stadium,capac,grama);
						mun->setestadios(old);
					}else if (opcest==5){
						name_stadium = "San Paolo";
						Estadio* SanP = new SanPaolo(name_stadium,capac,grama);
						mun->setestadios(SanP);
					}else if (opcest==6){
						name_stadium = "SantiagoBernabeu";
						Estadio* Sant = new SantiagoBernabeu(name_stadium,capac,grama);
						mun->setestadios(Sant);
					}else if (opcest==7){
						name_stadium = "Signaliduna Park";
						Estadio* Signa = new SignalidunaPark(name_stadium,capac,grama);
						mun->setestadios(Signa);
					}else if (opcest==8){
						name_stadium = "Stanfor Bridge";
						Estadio* Stanford = new StanfordBridge(name_stadium,capac,grama);
						mun->setestadios(Stanford);
					}else{
						cout << "opcion invalida";
					}					
			}
			city.push_back(mun);


			}else{
				cout << "Opcion invalida";
			}

		}//fin agregar estadios
		break;
		
	}//Fin Switch
	cout << "Bienvenido! Escoja una opción, recuerde que para simular partidos necesita crear equipos primero. \n1.Agregar Equipos\n2.Agregar Ciudades\n3.Simulacion\n4.Salir ";
	cin >> opc;

}//FIN WHILE
}//Fin Del Metodo Run
