#pragma once
#include "Personaje.h"

class Aliado : public CMovil
{
public:
	Aliado() : CMovil(30, 20, 1, 1, 2, 2) {}

	int Aliado::validarMov(int limX, int limY, int minX, int minY) {
		if (x + dx < minX || x + dx + w > limX) return 1;
		return 0;
	}
	void Aliado::movInvalido(int eje) {
		if (eje == 1) { dx = -dx; }
	}
	void Aliado::mover() {
		x += dx;
	}
	void Aliado::setX(int px) { x = px; }
	void Aliado::setY(int py) { x = py; }
	void Aliado::setDx(int pdx) { dx = pdx; }
	~Aliado() {}

private:
};

