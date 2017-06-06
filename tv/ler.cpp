#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include "stdlib.h"
#include <unistd.h>
#include "tv.h"


using namespace std;

int main(){
	ifstream file;

	Tv tv(0,0);

	string texto;

	int f= 0;

	while(1){

		file.open("tv.txt");
		getline(file, texto);
		if(texto == "0")
			cout << "Aguardando Comando" << endl;

		if(texto == "1"){
			tv.aumentarCanal();
			cout << "Canal: " << tv.getCanal() << endl << "Volume: "<< tv.getVolume() << endl << endl;
		}

		if(texto == "2"){
			tv.diminuirCanal();
			cout << "Canal: " << tv.getCanal() << endl << "Volume: "<< tv.getVolume() << endl << endl;
		}

		if(texto == "3"){
			tv.aumentarVolume();
			cout << "Canal: " << tv.getCanal() << endl << "Volume: "<< tv.getVolume() << endl << endl;
		}

		if(texto == "4"){
			tv.diminuirVolume();
			cout << "Canal: " << tv.getCanal() << endl << "Volume: "<< tv.getVolume() << endl << endl;
		}

		file.close();
		sleep(2);
		}
	}
