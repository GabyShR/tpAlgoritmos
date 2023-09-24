#pragma once

#include <iostream>
#include "windows.h"
#include "conio.h"
#include <vector>
#include "Windows.h"
#include "windows.h"
#include "MMSystem.h"

#pragma comment(lib, "winmm.lib")
#define HEIGHT       40
#define WIDTH        120
#define ARRIBA       72 
#define ABAJO        80
#define IZQUIERDA    75		
#define DERECHA      77
#define ENTER        13
#define ESCAPE 27

using namespace System;
using namespace std;

void setxy(int x, int y) {
    Console::SetCursorPosition(x, y);
}

void color(int c) {

    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, c);
}

void setColor(int bgColor, int textColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int colorCode = bgColor * 16 + textColor;
    SetConsoleTextAttribute(hConsole, colorCode);
}

void restaurarIdiomaOriginal()
{
    locale original = locale::global(locale("spanish"));
    locale::global(original);
}

bool identificarColision(float x1, float y1, float ancho1, float altura1, float x2, float y2, float ancho2, float altura2)
{
    if (x1 <= x2 + ancho2 && x1 + ancho1 >= x2 && y1 <= y2 + altura2 && y1 + altura1 >= y2)
        return true;
    else
        return false;
}

int canciones[8] = { 0,1,2,3,4,5,7 };


void playmusic() {
    srand(time(NULL));

    int music = canciones[(rand() % 8)];

    if (music == 0) PlaySound(TEXT("africa.wav"), NULL, SND_ASYNC);
    if (music == 1) PlaySound(TEXT("allstar.wav"), NULL, SND_ASYNC);
    if (music == 2) PlaySound(TEXT("feelgood.wav"), NULL, SND_ASYNC);
    if (music == 3) PlaySound(TEXT("getlucky.wav"), NULL, SND_ASYNC);
    if (music == 4) PlaySound(TEXT("paloma.wav"), NULL, SND_ASYNC);
    if (music == 5) PlaySound(TEXT("smells.wav"), NULL, SND_ASYNC);
    if (music == 6) PlaySound(TEXT("takeonme.wav"), NULL, SND_ASYNC);
    if (music == 7) PlaySound(TEXT("triciclo.wav"), NULL, SND_ASYNC);

}