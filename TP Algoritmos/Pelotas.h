#pragma once
#include "Librerias.h"
#pragma once

class CPelota
{
private:
	float x, y;
	float dx, dy;
	short alto, ancho;
	int velocidad;
	char alternativa;
	short minX, minY;

public:
	CPelota();
	~CPelota();

	void borrar();
	void mover();
	void dibujar(char alternativa);

	//void setX(int x) { this->x = x; }
	//void setY(int y) { this->y = y; }

	float getX() { return x; }
	float getY() { return y; }
};

CPelota::CPelota()
{
	Random r;

	this->velocidad = 1;

	this->ancho = 5;
	this->alto = 3;

	this->minX = 15;
	this->minY = 16;

	this->x = r.Next(minX, WIDTH - 38 - ancho);
	this->y = r.Next(minY, HEIGHT - 2 - alto);

	this->dx = rand() % 2 == 0 ? -1 : 1;
	this->dy = rand() % 2 == 0 ? -1 : 1;
}

CPelota::~CPelota() {}

void CPelota::borrar()
{
	for (int i = 0; i < alto; ++i) {
		for (int j = 0; j < ancho; ++j) {
			setxy(x + j, y + i);
			cout << ' ';
		}
	}
}

void CPelota::mover()
{
	if (x + dx * velocidad < minX || x + dx * velocidad + ancho > WIDTH - 38) 
		dx *= -1;
	if (y + dy * velocidad < minY || y + dy * velocidad + alto > HEIGHT - 2) 
		dy *= -1;

	x += dx * velocidad;
	y += dy * velocidad;
}

void CPelota::dibujar(char alternativa) 
{
	restaurarIdiomaOriginal();

	for (int i = 0; i < alto; i++)
	{
		for (int j = 0; j < ancho; j++)
		{
			if (i == 0)
			{
				setxy(x + j, y + i); cout << char(223);
			}

			if (i == alto - 1)
			{
				setxy(x + j, y + i); cout << char(220);
			}

			if (j == 0 || j == ancho - 1)
			{
				setxy(x + j, y + i); cout << char(219);
			}

			if (i == alto - 2 && j == ancho - 3)
			{
				setxy(x + j, y + i); cout << alternativa; 
			}
		}
	}
}

// =====================================================================================

class Controladora
{
private:
	std::vector<CPelota*> pelotas;

public:

	Controladora();
	~Controladora();

	void borrarPelota(short index); 
	void verificarColisiones();
	void animacion(char alternativa1, char alternativa2); 

};

Controladora::Controladora() 
{
	int cant = 2;

	for (int i = 0; i < cant; i++)
	{
		pelotas.push_back(new CPelota());
	}
}

Controladora::~Controladora()
{
	for (int i = 0; i < pelotas.size(); i++)
	{
		delete pelotas[i];
	}
	pelotas.clear();
}

void Controladora::borrarPelota(short index) 
{
	pelotas.erase(pelotas.begin() + index);
}

void Controladora::verificarColisiones()
{
	for (int i = 0; i < pelotas.size(); ++i)
	{
		CPelota* primeraPelota = pelotas.at(i);
		for (int j = 0; j < pelotas.size(); ++j)
		{
			if (i == j) continue;
			CPelota* segundaPelota = pelotas.at(j);


			if (primeraPelota->getX() == segundaPelota->getX() &&
				primeraPelota->getY() == segundaPelota->getY())
			{
				primeraPelota->borrar();
				primeraPelota->mover();

				segundaPelota->mover();

			}
		}
	}
}

void Controladora::animacion(char alternativa1, char alternativa2)  
{
	verificarColisiones();

	for (int i = 0; i < pelotas.size(); i++)
	{
		pelotas[i]->borrar();
		pelotas[i]->mover(); 

		if (i == 0) pelotas[i]->dibujar(alternativa1);
		if (i == 1) pelotas[i]->dibujar(alternativa2);
	}
}