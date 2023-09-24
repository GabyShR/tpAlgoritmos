#pragma once
#include "Librerias.h"

class BancoDePreguntas
{
private:
	vector<string> ArrBancoDePreguntas;
	vector<string> ArrRespuestasCorrectas;
	vector<string> ArrRespuestasIncorrectas;

public:
	BancoDePreguntas();
	~BancoDePreguntas();

	string getPregunta(int eje) { return ArrBancoDePreguntas[eje]; }

	string getRespuestaIncorrecta(int eje) { return ArrRespuestasIncorrectas[eje]; }

	string getRespuestaCorrecta(int eje) { return ArrRespuestasCorrectas[eje]; }

};

BancoDePreguntas::BancoDePreguntas()
{
	//preguntas
	ArrBancoDePreguntas.push_back("SACO es a ASCO lo que 7683 es a...");
	ArrBancoDePreguntas.push_back("El padre de Juan tiene 4 hijos:    Lucas, Sandra, Ana y...    qui�n es el cuarto?");
	ArrBancoDePreguntas.push_back("Qu� grupo contin�a la siguiente    serie: 2Z3, 4Y5, 6X7...");
	ArrBancoDePreguntas.push_back("Si Maria habla m�s bajo que Carmen y Lola habla m�s alto que Carmen,  Maria habla m�s alto o m�s bajo queLola?");
	ArrBancoDePreguntas.push_back("Una madre tiene 40 a�os y su hijo tiene 10. Cu�ntos a�os deben pasarpara que  la edad de la madre sea  el triple que la edad de su hijo?");
	ArrBancoDePreguntas.push_back("Hay 3 cajas de igual tama�o. Dentrode cada una de las tres cajas  hay otras dos m�s peque�as, y en cada  una de ellas hay otras cuatro      todav�a m�s peque�as. Cu�ntas cajashay en total?");
	ArrBancoDePreguntas.push_back("En un dep�sito hay un nivel muy    bajo de agua, pero se duplica todoslos d�as. En total, tarda 60 d�as  en llenarse. Cu�nto tarda en llegara la mitad?");
	ArrBancoDePreguntas.push_back("Le das una patada a una pelota,    esta se aleja 5 metros, pero vuelvedirectamente a ti sin que nadie te la devuelva. Por qu�?");
	ArrBancoDePreguntas.push_back("Conduces un autobus en el que se   montan 18 personas. En la siguienteparada se bajan 5 pero suben otras 13. Al llegar a la siguiente       estaci�n, se bajan 21 y suben 4.   Cu�ntas personas quedan en el      autobus?");
	ArrBancoDePreguntas.push_back("Algunos meses tienen 30 d�as, otros31. Cu�ntos tienen 28 d�as?");

	//respuestas correctas
	ArrRespuestasCorrectas.push_back(". 6783");
	ArrRespuestasCorrectas.push_back(". Juan");
	ArrRespuestasCorrectas.push_back(". 8W9");
	ArrRespuestasCorrectas.push_back(". Habla m�s bajo");
	ArrRespuestasCorrectas.push_back(". 5 a�os");
	ArrRespuestasCorrectas.push_back(". 24 cajas");
	ArrRespuestasCorrectas.push_back(". 59 d�as");
	ArrRespuestasCorrectas.push_back(". Porque se lanz� hacia arriba");
	ArrRespuestasCorrectas.push_back(". 9 personas ");
	ArrRespuestasCorrectas.push_back(". Todos");

	//respuestas incorrectas
	ArrRespuestasIncorrectas.push_back(". 6873");
	ArrRespuestasIncorrectas.push_back(". Lucas");
	ArrRespuestasIncorrectas.push_back(". 8V9");
	ArrRespuestasIncorrectas.push_back(". Habla m�s alto");
	ArrRespuestasIncorrectas.push_back(". 4 a�os");
	ArrRespuestasIncorrectas.push_back(". 12 cajas");
	ArrRespuestasIncorrectas.push_back(". 30 d�as");
	ArrRespuestasIncorrectas.push_back(". Porque rebot� en una pared");
	ArrRespuestasIncorrectas.push_back(". 14 personas ");
	ArrRespuestasIncorrectas.push_back(". 1 mes");

}

BancoDePreguntas::~BancoDePreguntas() {}

//==================================================================================================

class Pregunta
{

private:
	short preguntaIndex;
	char opcionCorrecta, opcionIncorrecta;

	string pregunta;
	BancoDePreguntas* arrPreguntas;
	string respuesta;
	string respuestaCorrecta;
	BancoDePreguntas* arrRespuestasCorrectas;
	string respuestaIncorrecta;
	BancoDePreguntas* arrRespuestasIncorrectas;

public:
	Pregunta()
	{
		Random r;
		opcionCorrecta = r.Next('A', 'B' + 1);

		if (opcionCorrecta == 'A') opcionIncorrecta = 'B';
		else opcionIncorrecta = 'A';

		preguntaIndex = r.Next(0, 10); // 0 - 9

		arrPreguntas = new BancoDePreguntas();
		pregunta = arrPreguntas->getPregunta(preguntaIndex);

		arrRespuestasCorrectas = new BancoDePreguntas();
		respuestaCorrecta = arrRespuestasCorrectas->getRespuestaCorrecta(preguntaIndex);

		arrRespuestasIncorrectas = new BancoDePreguntas();
		respuestaIncorrecta = arrRespuestasIncorrectas->getRespuestaIncorrecta(preguntaIndex);
	}

	~Pregunta() {};

	char getOpcionCorrecta() { return opcionCorrecta; }
	char getOpcionIncorrecta() { return opcionIncorrecta; }

	void mostrarAlternativa(string alternativa)
	{
		setlocale(LC_ALL, "spanish"); 
		int aumentoEnY = 0;
		if (alternativa[0] == 'A') aumentoEnY = 8;
		if (alternativa[0] == 'B') aumentoEnY = 12;

		int x = WIDTH - 20;
		int y = (HEIGHT / 2) + aumentoEnY;  
		int length = alternativa.length();

		//color(110);

		for (int i = 0; i < length; i++)
		{
			setxy(x, y);
			cout << alternativa[i];

			if (x == WIDTH - 3) {
				cout << '\n';
				y++;
				x = WIDTH - 20;
			}
			x++;
		}
	}

	
	void mostrarRespuestas()
	{
		string alternativaA, alternativaB;

		if (opcionCorrecta == 'A')
		{
			alternativaA = "A" + respuestaCorrecta;
			alternativaB = "B" + respuestaIncorrecta;
		}
		else
		{
			alternativaA = "A" + respuestaIncorrecta;
			alternativaB = "B" + respuestaCorrecta;
		}

		mostrarAlternativa(alternativaA);
		mostrarAlternativa(alternativaB);
	}

	void mostrarPregunta()
	{
		setlocale(LC_ALL, "spanish"); 
		int length = pregunta.length();
		int x = 31;
		int y = 7;
		color(110);
		for (int i = 0; i < length; i++) {
			setxy(x, y);
			cout << pregunta[i];

			if (x == 65) {
				cout << '\n';
				y++;
				x = 30;
			}
			x++;
			_sleep(10);
		}
	}

};