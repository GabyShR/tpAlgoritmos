#pragma once

#include <iostream>
#include "windows.h"
#include "conio.h"
#include <vector>

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

void restaurarIdiomaOriginal()
{
    locale original = locale::global(locale("spanish")); 
    locale::global(original); 
}