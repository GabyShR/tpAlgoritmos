#pragma once
#include "Librerias.h"

#define arriba 72
#define abajo 80
#define izquierda 75
#define derecha 77

using namespace System;
using namespace std;

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
		y = 33;
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


	int getX() { return x; }
	int getY() { return y; }
	int getAlto() { return h; }
	int getAncho() { return w; }
};
