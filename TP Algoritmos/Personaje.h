#pragma once
#include "Librerias.h"

#define arriba 72
#define abajo 80
#define izquierda 75
#define derecha 77

using namespace System;
using namespace std;

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
	bool movimiento;
public:
	Personaje()
	{
		x = 50;
		y = 26;
		dx = 0;
		dy = 0;
		w = 3;
		h = 3;
	}

	~Personaje() {}
	void borraPersonaje()
	{
		for (size_t i = 0; i < h; i++)
		{
			for (size_t j = 0; j < w; j++)
			{
				setxy(x + j, i + y);
				cout << " ";
			}
		}
	}

	int validarMov(int maxx, int maxy, int minx, int miny) {
		if (x + dx  < minx || x + w + dx >maxx) { return 1; }
		if (y + dy  < miny || y + h + dy >maxy) { return 2; }
	}
	void movInvalido(int eje) {
		if (eje == 1) { dx = -dx; }
		if (eje == 2) { dy = -dy; }
	}

	void dibujaPersonaje()
	{
		for (size_t i = 0; i < h; i++)
		{
			for (size_t j = 0; j < w; j++)
			{
				color(992);
				setxy(x + j, i + y);
				if (i == 0 && j == 1)cout << char(79);
				else if ((i == h - 2 && j == 0) || (i == h - 1 && j == 0)) cout << char(47);
				else if ((i == h - 2 && j == w - 1) || (i == h - 1 && j == w - 1)) cout << char(92);
				if (i == 1 && j == 1)cout << char(124);
				else cout << ' ';
			}
			cout << endl;
		}
	}


	void mover(int ex, int ey) {
		if (ex == 1) { dx = ey; x += dx; }
		if (ex == 2) { dy = ey; y += dy; }
	}

	EntidadArea* getArea() {
		return new EntidadArea(x, y, x + w, y + h);
	}
};
