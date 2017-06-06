#include <iostream>
#include "tv.h"

Tv::Tv(int c, int v){
	canal = c;
	volume = v;
}

Tv::Tv(void){
	canal = 0;
	volume = 0;
}

void Tv::setCanal(int c){
	if(c>0)
		canal = c;
}

int Tv::getCanal(void){
	return canal;
}

void Tv::setVolume(int v){
	if(v>0)
		canal = v;
}

int Tv::getVolume(void){
	return volume;
}

void Tv::aumentarCanal(void){
	canal++;
}

void Tv::diminuirCanal(void){
	if(canal == 0)
		canal = 0;
	else
		canal--;
}

void Tv::aumentarVolume(void){
	volume++;
}

void Tv::diminuirVolume(void){
	if(volume == 0)
		volume = 0;
	else
		volume--;
}