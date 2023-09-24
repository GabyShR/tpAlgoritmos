#pragma once
#include "iostream"
#include "Librerias.h"
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

	void setx(int px)
	{
		x = px;
	}
	void sety(int py)
	{
		y = py;
	}
	void setdx(int pdx)
	{
		dx = pdx;
	}
	void setdy(int pdy)
	{
		dy = pdy;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
	int getdx()
	{
		return dx;
	}
	int getdy()
	{
		return dy;
	}


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