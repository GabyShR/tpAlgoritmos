#pragma once
#include "Librerias.h"

class Tiempo
{
private:
	short microseg;
	short seg;
	short min;

public:
	Tiempo();
	~Tiempo();

	bool verificarTiempo();

	void mostrarTiempo();
	
};

Tiempo::Tiempo()
{
	this->microseg = 14;
	this->seg = 0;
	this->min = 3;
}

Tiempo::~Tiempo() {}

bool Tiempo::verificarTiempo()
{
		microseg--;
		if (microseg == 0)
		{
			microseg = 14;

			if (seg == 0)
			{

				if (min == 0 && seg == 0)
				{
					return true;
				}
				seg = 60;
				min--;
			}
			seg--;
		}
		setColor(14, 0); 
		setxy(WIDTH - 16, 5); cout << "TIEMPO " << '\n';
		setxy(WIDTH - 15, 7); cout << min << ":";

		if (seg >= 0 && seg <= 9)
			cout << 0 << seg;
		else
			cout << seg;

		return false;

	
}

void Tiempo::mostrarTiempo()
{
	if (verificarTiempo())
	{
		Console::Clear();
		cout << " perdiste";
		system("pause>0");

	}
}