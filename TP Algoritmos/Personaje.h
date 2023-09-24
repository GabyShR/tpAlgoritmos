#pragma once
#include "iostream"
#include "conio.h"
#include "Persona.h"

#define arriba 72
#define abajo 80
#define izquierda 75
#define derecha 77

using namespace System;
using namespace std;

class Personaje : public Persona
{
private:
	int perx;
	int pery;
	int perdx;
	int perdy;
public:
	Personaje() : Persona()
	{
		perx = 18;
		pery = 25;
		perdx = 1;
		perdy = 1;
	}
	Personaje(int px, int py, int pdx, int pdy, int pperx, int ppery, int pperdx, int pperdy) : Persona(px, py, pdx, pdy)
	{
		perx = pperx;
		pery = ppery;
		perdx = pperdx;
		perdy = pperdy;
	}

	~Personaje() {}

	void anima_personaje()
	{
		borra_personaje();
		char tecla = _getch();
		if ((tecla == arriba) && (pery > 16)) pery -= perdy; sety(pery);
		if ((tecla == abajo) && (pery < 35)) pery += perdy; sety(pery);
		if ((tecla == izquierda) && (perx > 15)) perx -= perdx; setx(perx);
		if ((tecla == derecha) && (perx < 79)) perx += perdx; setx(perx);
		forma_personaje();
	}

};