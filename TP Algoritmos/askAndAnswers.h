#pragma once
#include "iostream"
#include "vector"
using namespace std;

string PreguntaRandom[10] = {
"SACO es a ASCO lo que 7683 es a...",
"�Qu� grupo contin�a la siguiente serie: 2Z3, 4Y5, 6X7...",
"El padre de Juan tiene 4 hijos: Lucas, Sandra, Ana y... �qui�n es el cuarto?",
"Si Mar�a habla m�s bajo que Carmen y Lola habla m�s alto que Carmen, �Mar�a habla m�s alto o m�s bajo que Lola?",
"Una madre tiene 40 a�os y su hijo tiene 10. �Cu�ntos a�os deben pasar para que la edad de la madre sea el triple que la edad de su hijo?",
"Hay 3 cajas de igual tama�o. Dentro de cada una de las tres cajas hay otras dos m�s peque�as, y en cada una de ellas hay otras cuatro todav�a m�s peque�as. �Cu�ntas cajas hay en total?",
"En un dep�sito hay un nivel muy bajo de agua, pero se duplica todos los d�as. En total, tarda 60 d�as en llenarse. �Cu�nto tarda en llegar a la mitad?",
"Le das una patada a una pelota, esta se aleja 5 metros, pero vuelve directamente a ti sin que nadie te la devuelva. �Por qu�?",
"Conduces un autob�s en el que se montan 18 personas. En la siguiente parada se bajan 5 pero suben otras 13. Al llegar a la siguiente estaci�n, se bajan 21 y suben 4. �Cu�ntas personas quedan en el autob�s?",
"Algunos meses tienen 30 d�as, otros 31. �Cu�ntos tienen 28 d�as?" };


class Pregunta
{
public:
	Pregunta();
	~Pregunta();
	void mostrar();
private:
	string pregunta;
};

void Pregunta::mostrar()
{
	cout << pregunta;
}

Pregunta::Pregunta()
{
	pregunta = PreguntaRandom[rand() % 10];
}

Pregunta::~Pregunta()
{
}

class ArrPreguntaRespondidas
{
public:
	ArrPreguntaRespondidas();
	~ArrPreguntaRespondidas();
	void agregarPregunta(Pregunta* objPregunta);
	//bool preguntaRespondida();
	void listarPreguntas();
private:
	vector<Pregunta* >ArrPregRespondidas;
};

ArrPreguntaRespondidas::ArrPreguntaRespondidas()
{
}

void ArrPreguntaRespondidas::listarPreguntas() {
	for (size_t i = 0; i < ArrPregRespondidas.size(); i++)
	{
		cout << "PREGUNTA " << i << endl;
		ArrPregRespondidas.at(i)->mostrar(); cout << endl;
	}
}
void ArrPreguntaRespondidas::agregarPregunta(Pregunta* objPregunta) {
	ArrPregRespondidas.push_back(objPregunta);
}
//bool ArrPreguntaRespondidas::preguntaRespondida() {
//
//}
ArrPreguntaRespondidas::~ArrPreguntaRespondidas()
{
}