#pragma once
#include "Librerias.h"
#include "Pregunta.h"
#include "Pelotas.h"
#include "Personaje.h"
#include "Aliado.h"

int vidas = 3;

class CPartida
{
private:

	Pregunta* objPregunta;
	Controladora* controladorPelotas;
	Aliado* objAliado;

public:
	CPartida()
	{
		objPregunta = new Pregunta();
		controladorPelotas = new Controladora();
	}

	~CPartida() {}

	Controladora* getControladorPelotas()
	{
		return controladorPelotas;
	}

	Pregunta* getObjPregunta() {
		return objPregunta;

	}

	void animacion()
	{
		controladorPelotas->animacion(objPregunta->getOpcionCorrecta(), objPregunta->getOpcionIncorrecta());
	}

	bool verificarColisiones(Personaje* Jugador, Aliado* Aliado, bool& AliadoCogido)
	{

		if (identificarColision(controladorPelotas->at(0)->getX(), controladorPelotas->at(0)->getY(), controladorPelotas->at(0)->getAncho(), controladorPelotas->at(0)->getAlto(),
			Jugador->getX(), Jugador->getY(), Jugador->getAncho(), Jugador->getAlto()))
		{
			Jugador->setPuntosAcumulados(10);
			return true;
		}

		if (identificarColision(controladorPelotas->at(1)->getX(), controladorPelotas->at(1)->getY(), controladorPelotas->at(1)->getAncho(), controladorPelotas->at(1)->getAlto(),
			Jugador->getX(), Jugador->getY(), Jugador->getAncho(), Jugador->getAlto()))
		{
			vidas--;
			return true;
		}

		if (identificarColision(Jugador->getX(), Jugador->getY(), Jugador->getAncho(), Jugador->getAlto(), Aliado->getX(), Aliado->getY(), Aliado->getAncho(), Aliado->getAlto())) {
			AliadoCogido = true;
			vidas++;
			return true;
		}


		return false;
	}

	void mostrarEnunciados()
	{
		objPregunta->mostrarPregunta();
		objPregunta->mostrarRespuestas();
	}
};