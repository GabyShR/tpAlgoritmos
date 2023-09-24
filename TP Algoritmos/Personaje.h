#pragma once
#include "Librerias.h"

#define arriba 72
#define abajo 80
#define izquierda 75
#define derecha 77
#define MAXX 75
#define MAXY 37
#define MINX 20
#define MINY 16
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

		if (x < MINX || x + w > MAXX) dx = 0;
		else if (y < MINY || y + h > MAXY) dy = 0;
		else {
			if (ex == 1) { dx = ey; }
			if (ex == 2) { dy = ey; }
		}
		x += dx;
		y += dy;
	}


	int getX() { return x; }
	int getY() { return y; }
	int getAlto() { return h; }
	int getAncho() { return w; }
};
