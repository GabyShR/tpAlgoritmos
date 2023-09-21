#include "pch.h"
#include "askAndAnswers.h"
#include "conio.h"

using namespace System;

int main()
{
    srand(time(0));
    Pregunta* objPregunta;
    ArrPreguntaRespondidas* arrPreguntas = new ArrPreguntaRespondidas;
    int c = 1;
    while (c == 1)
    {
        if (kbhit()) {
            char tecla = _getch();
            switch (tolower(tecla))
            {
            case 'a':
                objPregunta = new Pregunta;
                arrPreguntas->agregarPregunta(objPregunta);
                break;
            case 'b':
                arrPreguntas->listarPreguntas();
                break;
            case 'c':
                c = 2;
                break;
            default:
                break;
            }
        }
    }delete arrPreguntas;
    
    return 0;
}
