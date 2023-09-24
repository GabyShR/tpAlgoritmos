#pragma once
#include "Librerias.h"

#define arriba 72
#define abajo 80
#define izquierda 75
#define derecha 77

using namespace System;
using namespace std;
class Persona
{
private:
	int x;
	int y;
	int dx;
	int dy;
public:
	Persona()
	{
		this->x = 0;
		this->y = 0;
		this->dx = 1;
		this->dy = 1;
	}
	Persona(int px, int py, int pdx, int pdy)
	{
		this->x = px;
		this->y = py;
		this->dx = pdx;
		this->dy = pdy;
	}
	~Persona() {}

	void setx(int px) { x = px; }
	void sety(int py) { y = py; }
	void setdx(int pdx) { dx = pdx; }
	void setdy(int pdy) { dy = pdy; }
	int getx() { return x; }
	int gety() { return y; }
	int getdx() { return dx; }
	int getdy() { return dy; }


	void forma_personaje()
	{
		setxy(x + 1, y); cout << char(79);
		setxy(x, y + 1); cout << char(47) << char(124) << char(92);
		setxy(x, y + 2); cout << char(47) << " " << char(92);
	}

	void borra_personaje()
	{
		setxy(x + 1, y); cout << " ";
		setxy(x, y + 1); cout << "   ";
		setxy(x, y + 2); cout << "   ";
	}

};

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
		perx = 50;
		pery = 27;
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

	void anima_personaje(char tecla)
	{
		borra_personaje();
		if ((tecla == arriba) && (pery > 16)) pery -= perdy; sety(pery);
		if ((tecla == abajo) && (pery < 35)) pery += perdy; sety(pery);
		if ((tecla == izquierda) && (perx > 15)) perx -= perdx; setx(perx);
		if ((tecla == derecha) && (perx < 79)) perx += perdx; setx(perx);
		forma_personaje();
	}

};
