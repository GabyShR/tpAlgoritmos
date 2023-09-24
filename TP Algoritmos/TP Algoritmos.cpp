#include "pch.h"
#include "Menu.h"
using namespace System;
using namespace std;

void moverPuntero(int& xP, int& yP, int& dyP, bool& mostrarPuntero) {
    CJuego* objcjuego = new CJuego;

    if (_kbhit()) {
        int tecla = _getch();        

        if (tecla == ABAJO) {
            setxy(xP, yP);
            cout << " ";
            yP += dyP;
            setxy(xP, yP);
            cout << cuadradito();
            if (yP >= 31) dyP *= 0;
            else dyP = 4;
        }
        if (tecla == ARRIBA) {
            setxy(xP, yP);
            cout << " ";
            yP -= dyP;
            setxy(xP, yP);
            cout << cuadradito();
            if (yP <= 23) dyP *= 0;
            else dyP = 4;
        }
        if (tecla == ENTER && yP == 23) {
            mostrarPuntero = false;
            Console::Clear();
            objcjuego->partida();
            //if (ir_al_Menu == true) menuFinal();

        }
        if (tecla == ENTER && yP == 27) {
            mostrarPuntero = false;
            Console::Clear();
            //instrucciones();
        }
        if (tecla == ENTER && yP == 31) {
            mostrarPuntero = false;
            Console::Clear();
            //skin();
        }
        if (tecla == ENTER && yP == 24) {
            mostrarPuntero = false;
            Console::Clear();
            exit(0);
        }

    }
}

void menuFinal() {
    Console::Clear();
    //playmusic();
    int xP = 51; int yP = 23; int dyP = 4;
    bool mostrarPuntero = true;
    menu();

    while (mostrarPuntero)
    {
        color(998);
        setxy(xP, yP);
        cout << cuadradito();
        moverPuntero(xP, yP, dyP, mostrarPuntero);
    }
}

int main()
{
    srand(time(0));
    Console::SetWindowSize(120, 40);
    Console::CursorVisible = false;
    menuFinal();

    system("pause>0");
    return 0;
}

//AREA DONDE LAS PELOTAS SE VAN A MOVER
//16,17 - 79,17
//16,34 - 79,34