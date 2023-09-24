#pragma once
#include "Librerias.h"

#define arriba 72
#define abajo 80
#define izquierda 75
#define derecha 77

using namespace System;
using namespace std;
//class Persona
//{
//private:
//	int x;
//	int y;
//	int dx;
//	int dy;
//	int w;
//	int h;
//public:
//	Persona()
//	{
//		this->x = 0;
//		this->y = 0;
//		this->dx = 1;
//		this->dy = 1;
//	}
//	Persona(int px, int py, int pdx, int pdy, int w, int h)
//	{
//		this->x = px;
//		this->y = py;
//		this->dx = pdx;
//		this->dy = pdy;
//		this->w = w;
//		this->h = h;
//	}
//	~Persona() {}
//
//	void setx(int px) { x = px; }
//	void sety(int py) { y = py; }
//	void setdx(int pdx) { dx = pdx; }
//	void setdy(int pdy) { dy = pdy; }
//	int getx() { return x; }
//	int gety() { return y; }
//	int getdx() { return dx; }
//	int getdy() { return dy; }
//
//
//
//
//
//};

class EntidadArea {
	int x1, y1, x2, y2;
public:
	EntidadArea(int x1, int y1, int x2, int y2) {
		this->x1 = x1;
		this->y1 = y1;
		this->x2 = x2;
		this->y2 = y2;
	}

	~EntidadArea() { }

	bool colisionaCon(EntidadArea* area) {
		return (x1 < area->x2 && x2 > area->x1 && y1 < area->y2 && y2 > area->y1);
	}
};

class Personaje
{
private:
	int x;
	int y;
	int dx;
	int dy;
	int w;
	int h;
public:
	void forma_personaje()
	{
		for (size_t i = 0; i < h; i++)
		{
			for (size_t j = 0; j < w; j++)
			{
				setxy(x + j, i + y);
				if (i == 0 && j == 1)cout << char(79);
				if (i == 1)cout << char(47) << char(124) << char(92);
				if (i == 2)cout << char(47) << ' ' << char(92);
				else cout << ' ';
			}
		}

		/*setxy(x + 1, y); cout << char(79);
		setxy(x, y + 1);
		setxy(x, y + 2); cout << char(47) << " " << char(92);

		  0
		 /|\
		 / \
		*/
	}

	void borra_personaje()
	{
		setxy(x + 1, y); cout << " ";
		setxy(x, y + 1); cout << "   ";
		setxy(x, y + 2); cout << "   ";
	}

	Personaje()
	{
		x = 50;
		y = 27;
		dx = 3;
		dy = 3;
		w = 1;
		h = 1;
	}

	~Personaje() {}

	void anima_personaje(char tecla)
	{
		borra_personaje();
		if ((tecla == arriba) && (y > 16)) y -= dy;
		if ((tecla == abajo) && (y < 35)) y += y;
		if ((tecla == izquierda) && (x > 15)) x -= dx;
		if ((tecla == derecha) && (x < 79)) x += dx;
		forma_personaje();
	};

	EntidadArea* getArea() {
		return new EntidadArea(x, y, x + w, y + h);
	}
};
