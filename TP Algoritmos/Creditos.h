#pragma once
#include "Librerias.h"

#define WIDTH 120
#define HEIGHT 40


class CIntegrante
{
private:

	short alto;
	short ancho;
	int x;
	int y;
	int dy;
public:
	CIntegrante(short alto, short ancho);
	~CIntegrante();

	int getAlto();
	int getY();

	void setXY(int x, int y);

	void borrar();
	void mover();
	void dibujarJahaziel();
	void dibujarDayro();
	void dibujarGabriela();

	void setY(int y) { this->y = y; }
};

CIntegrante::CIntegrante(short alto, short ancho)
{
	this->alto = alto;
	this->ancho = ancho;
	this->x = (WIDTH - ancho) / 2;
	this->y = HEIGHT - alto - 1;
	this->dy = 1;
}

CIntegrante::~CIntegrante() {}

int CIntegrante::getAlto()
{
	return alto;
}
int CIntegrante::getY()
{
	return y;
}


void CIntegrante::setXY(int x, int y)
{
	setxy(x, y);
}


void CIntegrante::borrar()
{
	for (int i = 0; i < alto; i++)
	{
		for (int i = 0; i < ancho; i++)
		{
			cout << ' ';
		}
	}
}

void  CIntegrante::mover()
{
	y -= dy;
}

void  CIntegrante::dibujarJahaziel()
{
	setXY(x, y);	 cout << "     _          _                  _         _      ___                                  ";
	setXY(x, y + 1); cout << "  _ | |  __ _  | |_    __ _   ___ (_)  ___  | |    / __|  _  _   ___   _ _   _ _   __ _  ";
	setXY(x, y + 2); cout << " | || | / _` | | ' \\  / _` | |_ / | | / -_) | |   | (_ | | || | / -_) | '_| | '_| / _` |";
	setXY(x, y + 3); cout << "  \\__/  \\__,_| |_||_| \\__,_| /__| |_| \\___| |_|    \\___| \\_,_ | \\___| |_|   |_|   \\__,_|";
}

void  CIntegrante::dibujarDayro()
{
	setXY(x, y + 1); cout << "  ___                                ___   _             ";
	setXY(x, y + 2); cout << " |   \\   __ _   _  _   _ _   ___    | _ \\ (_)  ___   ___ ";
	setXY(x, y + 3); cout << " | |) | / _` | | || | | '_| / _ \\   |   / | | / _ \\ (_-< ";
	setXY(x, y + 4); cout << " |___/  \\__,_| \\_,| | |_ |  \\___/   |_|_\\ |_| \\___/ /__/ ";
	setXY(x, y + 5); cout << "                |__/                                     ";
}

void  CIntegrante::dibujarGabriela()
{
	setXY(x, y);     cout << "   ___          _            _         _            ___   _                    _                        ";
	setXY(x, y + 1); cout << "  / __|  __ _  | |__   _ _  (_)  ___  | |  __ _    / __| | |_    __ _   _ __  (_)  __ _   _ __    __ _  ";
	setXY(x, y + 2); cout << " | (_ | / _` | | '_ \\ | '_| | | / -_) | | / _` |   \\__ \\ | ' \\  / _` | | '_ \\ | | / _` | | '  \\  / _` | ";
	setXY(x, y + 3); cout << "  \\___| \\__,_| |_.__/ |_|   |_| \\___| |_| \\__,_|   |___/ |_||_| \\__,_| | .__/ |_| \\__,_| |_|_|_| \\__,_| ";
	setXY(x, y + 4); cout << "                                                                       |_|                              ";

}