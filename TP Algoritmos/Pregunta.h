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
	ArrBancoDePreguntas.push_back("SACO es a ASCO lo que 7683 es a...");
	ArrBancoDePreguntas.push_back("El padre de Juan tiene 4 hijos:    Lucas, Sandra, Ana y...    quien esel cuarto?");
	ArrBancoDePreguntas.push_back("Que grupo continua la siguiente    serie: 2Z3, 4Y5, 6X7...");
	ArrBancoDePreguntas.push_back("Si Maria habla mas bajo que Carmen y Lola habla mas alto que Carmen,  Maria habla mas alto o mas bajo queLola?");
	ArrBancoDePreguntas.push_back("Una madre tiene 40 anios y su hijo tiene 10. Cuantos anios deben pasarpara que  la edad de la madre sea  el triple que la edad de su hijo?");
	ArrBancoDePreguntas.push_back("Hay 3 cajas de igual tamano. Dentrode cada una de las tres cajas  hay otras dos mas pequenas, y en cada  una de ellas hay otras cuatro      todavia mas pequenas. Cuantas cajashay en total?");
	ArrBancoDePreguntas.push_back("En un deposito hay un nivel muy    bajo de agua, pero se duplica todoslos dias. En total, tarda 60 dias  en llenarse. Cuanto tarda en llegara la mitad?");
	ArrBancoDePreguntas.push_back("Le das una patada a una pelota,    esta se aleja 5 metros, pero vuelvedirectamente a ti sin que nadie te la devuelva. Por que?");
	ArrBancoDePreguntas.push_back("Conduces un autobus en el que se   montan 18 personas. En la siguienteparada se bajan 5 pero suben otras 13. Al llegar a la siguiente       estacion, se bajan 21 y suben 4.   Cuantas personas quedan en el      autobus?");
	ArrBancoDePreguntas.push_back("Algunos meses tienen 30 dias, otros31. Cuantos tienen 28 dias?");
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
			_sleep(20);
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