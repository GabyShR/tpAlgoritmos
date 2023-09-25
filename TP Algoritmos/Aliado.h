#pragma once
#include "Personaje.h"

class Aliado : public CMovil
{
public:
	Aliado : public CMovil();
	~Aliado : public CMovil();

private:
	Aliado() : CMovil(30, 20, 1, 1, 2, 2);

};
