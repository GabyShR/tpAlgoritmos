#pragma once
#include "iostream"
#include "vector"
using namespace std;

string PreguntaRandom[10] = {
"SACO es a ASCO lo que 7683 es a...",
"¿Qué grupo continúa la siguiente serie: 2Z3, 4Y5, 6X7...",
"El padre de Juan tiene 4 hijos: Lucas, Sandra, Ana y... ¿quién es el cuarto?",
"Si María habla más bajo que Carmen y Lola habla más alto que Carmen, ¿María habla más alto o más bajo que Lola?",
"Una madre tiene 40 años y su hijo tiene 10. ¿Cuántos años deben pasar para que la edad de la madre sea el triple que la edad de su hijo?",
"Hay 3 cajas de igual tamaño. Dentro de cada una de las tres cajas hay otras dos más pequeñas, y en cada una de ellas hay otras cuatro todavía más pequeñas. ¿Cuántas cajas hay en total?",
"En un depósito hay un nivel muy bajo de agua, pero se duplica todos los días. En total, tarda 60 días en llenarse. ¿Cuánto tarda en llegar a la mitad?",
"Le das una patada a una pelota, esta se aleja 5 metros, pero vuelve directamente a ti sin que nadie te la devuelva. ¿Por qué?",
"Conduces un autobús en el que se montan 18 personas. En la siguiente parada se bajan 5 pero suben otras 13. Al llegar a la siguiente estación, se bajan 21 y suben 4. ¿Cuántas personas quedan en el autobús?",
"Algunos meses tienen 30 días, otros 31. ¿Cuántos tienen 28 días?" };


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