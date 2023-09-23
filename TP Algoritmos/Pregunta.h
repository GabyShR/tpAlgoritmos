#pragma once
#include "Librerias.h"
#include <vector>

class BancoDePreguntas
{
public:
	BancoDePreguntas();
	~BancoDePreguntas();
	string getPregunta(int eje) { return ArrBancoDePreguntas[eje]; }

private:
	vector<string> ArrBancoDePreguntas;
};

BancoDePreguntas::BancoDePreguntas()
{
	setlocale(LC_ALL, "spanish");
	ArrBancoDePreguntas.push_back("SACO es a ASCO lo que 7683 es a...");
	ArrBancoDePreguntas.push_back("El padre de Juan tiene 4 hijos:    Lucas, Sandra, Ana y...    qui�n es el cuarto?");
	ArrBancoDePreguntas.push_back("Que grupo contin�a la siguiente    serie: 2Z3, 4Y5, 6X7...");
	ArrBancoDePreguntas.push_back("Si Maria habla m�s bajo que Carmen y Lola habla m�s alto que Carmen,  Maria habla m�s alto o m�s bajo queLola?");
	ArrBancoDePreguntas.push_back("Una madre tiene 40 a�os y su hijo tiene 10. Cuantos a�os deben pasarpara que  la edad de la madre sea  el triple que la edad de su hijo?");
	ArrBancoDePreguntas.push_back("Hay 3 cajas de igual tama�o. Dentrode cada una de las tres cajas  hay otras dos mas peque�as, y en cada  una de ellas hay otras cuatro      todavia mas peque�as. Cu�ntas cajashay en total?");
	ArrBancoDePreguntas.push_back("En un dep�sito hay un nivel muy    bajo de agua, pero se duplica todoslos d�as. En total, tarda 60 d�as  en llenarse. Cu�nto tarda en llegara la mitad?");
	ArrBancoDePreguntas.push_back("Le das una patada a una pelota,    esta se aleja 5 metros, pero vuelvedirectamente a ti sin que nadie te la devuelva. Por qu�?");
	ArrBancoDePreguntas.push_back("Conduces un autobus en el que se   montan 18 personas. En la siguienteparada se bajan 5 pero suben otras 13. Al llegar a la siguiente       estaci�n, se bajan 21 y suben 4.   Cu�ntas personas quedan en el      autobus?");
	ArrBancoDePreguntas.push_back("Algunos meses tienen 30 d�as, otros31. Cuantos tienen 28 d�as?");
}

BancoDePreguntas::~BancoDePreguntas()
{
}

class Pregunta
{
public:
	Pregunta(BancoDePreguntas* parrPreguntas, int preguntaIndex) {

		//esta inicializando el vector
		arrPreguntas = parrPreguntas;
		pregunta = arrPreguntas->getPregunta(preguntaIndex);

	}
	~Pregunta() {};
	void mostrarPregunta()
	{
		int length = pregunta.length();
		int x = 31;
		int y = 7;
		color(110);
		for (int i = 0; i < length; i++) {
			setxy(x, y);
			cout << pregunta[i];

			if (x == 65) {
				cout << "\n";
				y++;
				x = 30;
			}
			x++;
			_sleep(10);
		}
	}

private:
	string pregunta;
	BancoDePreguntas* arrPreguntas;
};


//class ArrPreguntaRespondidas
//{
//public:
//	ArrPreguntaRespondidas();
//	~ArrPreguntaRespondidas();
//	void agregarPregunta(Pregunta* objPregunta);
//	//bool preguntaRespondida();
//	void listarPreguntas();
//private:
//	vector<Pregunta* >ArrPregRespondidas;
//};
//
//ArrPreguntaRespondidas::ArrPreguntaRespondidas()
//{
//}
//
//void ArrPreguntaRespondidas::listarPreguntas() {
//	for (size_t i = 0; i < ArrPregRespondidas.size(); i++)
//	{
//		cout << "PREGUNTA " << i << endl;
//		ArrPregRespondidas.at(i)->mostrar(); cout << endl;
//	}
//}
//void ArrPreguntaRespondidas::agregarPregunta(Pregunta* objPregunta) {
//	ArrPregRespondidas.push_back(objPregunta);
//}
////bool ArrPreguntaRespondidas::preguntaRespondida() {
////
////}
//ArrPreguntaRespondidas::~ArrPreguntaRespondidas()
//{
//}