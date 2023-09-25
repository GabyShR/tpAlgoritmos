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
	setxy(x, y);	 cout << "     _          _                  _         _      ___                                  ";
	setxy(x, y + 1); cout << "  _ | |  __ _  | |_    __ _   ___ (_)  ___  | |    / __|  _  _   ___   _ _   _ _   __ _  ";
	setxy(x, y + 2); cout << " | || | / _` | | ' \\  / _` | |_ / | | / -_) | |   | (_ | | || | / -_) | '_| | '_| / _` |";
	setxy(x, y + 3); cout << "  \\__/  \\__,_| |_||_| \\__,_| /__| |_| \\___| |_|    \\___| \\_,_ | \\___| |_|   |_|   \\__,_|";
}

void  CIntegrante::dibujarDayro()
{
	setxy(x, y + 1); cout << "  ___                                ___   _             ";
	setxy(x, y + 2); cout << " |   \\   __ _   _  _   _ _   ___    | _ \\ (_)  ___   ___ ";
	setxy(x, y + 3); cout << " | |) | / _` | | || | | '_| / _ \\   |   / | | / _ \\ (_-< ";
	setxy(x, y + 4); cout << " |___/  \\__,_| \\_,| | |_ |  \\___/   |_|_\\ |_| \\___/ /__/ ";
	setxy(x, y + 5); cout << "                |__/                                     ";
}

void  CIntegrante::dibujarGabriela()
{
	setxy(x, y);     cout << "   ___          _            _         _            ___   _                    _                        ";
	setxy(x, y + 1); cout << "  / __|  __ _  | |__   _ _  (_)  ___  | |  __ _    / __| | |_    __ _   _ __  (_)  __ _   _ __    __ _  ";
	setxy(x, y + 2); cout << " | (_ | / _` | | '_ \\ | '_| | | / -_) | | / _` |   \\__ \\ | ' \\  / _` | | '_ \\ | | / _` | | '  \\  / _` | ";
	setxy(x, y + 3); cout << "  \\___| \\__,_| |_.__/ |_|   |_| \\___| |_| \\__,_|   |___/ |_||_| \\__,_| | .__/ |_| \\__,_| |_|_|_| \\__,_| ";
	setxy(x, y + 4); cout << "                                                                       |_|                              ";

}

class CCreditos
{
private:
	CIntegrante* jahaziel;
	CIntegrante* dayro;
	CIntegrante* gabriela;
public:
	CCreditos();
	~CCreditos();

	void animarCreditos();
	void escribirCreditos();
};

CCreditos::CCreditos()
{
	jahaziel = new CIntegrante(4, 88); // alto - ancho 
	dayro = new CIntegrante(5, 54);
	gabriela = new CIntegrante(5, 103);
}

CCreditos::~CCreditos()
{
	delete jahaziel;
	delete dayro;
	delete gabriela;
}

void CCreditos::escribirCreditos()
{
	int ancho = 70;
	int x = (WIDTH - ancho) / 2;
	int y = 1;

	short colorRandom = rand() % 6;

	int matriz[13][70] =
	{
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1},
	{0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1},
	{0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
	{1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1},

	};

	for (int f = 0; f < 13; f++)
	{
		for (int c = 0; c < ancho; c++)
		{
			setxy(x + c, y + f);
			switch (matriz[f][c])
			{
			case 0: setColor(14,colorRandom); cout << char(219); break;
			}
		}
	}

}
void dibujarFondo()
{
	color(14);
	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			setxy(i, j); cout << char(219);
		}
	}
}

void CCreditos::animarCreditos()
{

	short diferencia = 3;
	short limiteY = 16;

	bool jahazielBool = true;
	bool dayroBool = false;
	bool gabyBool = false;

	escribirCreditos();
	setColor(14, 0);
	while (true)
	{
		if (jahazielBool)
		{
			jahaziel->borrar();
			jahaziel->mover();
			jahaziel->dibujarJahaziel();

			if (jahaziel->getY() == limiteY)
			{
				jahazielBool = false;
				dayroBool = true;
			}
		}

		if (dayroBool)
		{
			dayro->borrar();
			dayro->mover();
			dayro->dibujarDayro();

			if (dayro->getY() == limiteY + jahaziel->getAlto() + diferencia)
			{
				dayroBool = false;
				gabyBool = true;
			}
		}

		if (gabyBool)
		{
			gabriela->borrar();
			gabriela->mover();
			gabriela->dibujarGabriela();


			if (gabriela->getY() == limiteY + jahaziel->getAlto() + diferencia + dayro->getAlto() + diferencia)
			{
				gabyBool = false;
				break;
			}
		}

		_sleep(10);
	}

	int n = 15;

	while (n)
	{
		escribirCreditos();
		jahaziel->dibujarJahaziel();
		gabriela->dibujarGabriela();
		dayro->dibujarDayro();
		_sleep(120);

		n--; 

	}
}


