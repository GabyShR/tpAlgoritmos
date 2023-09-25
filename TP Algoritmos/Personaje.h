#pragma once
#include "Librerias.h"

#define arriba 72
#define abajo 80
#define izquierda 75
#define derecha 77
#define MAXX 75
#define MAXY 37
#define MINX 20
#define MINY 16

using namespace System;
using namespace std;

class CMovil {
protected:
    int x;
    int y;
    int dx;
    int dy;
    int w;
    int h;

public:
    CMovil(int px, int py, int pdx, int pdy, int pw, int ph) : x(px), y(py), dx(pdx), dy(pdy), w(pw), h(ph) {}

    virtual ~CMovil() {}

    void borrar() {
        for (size_t i = 0; i < h; i++) {
            for (size_t j = 0; j < w; j++) {
                setxy(x + j, i + y);
                cout << " ";
            }
        }
    }

    virtual void dibujar() {
        for (size_t i = 0; i < h; i++) {
            for (size_t j = 0; j < w; j++) {
                setxy(x + j, i + y);
                cout << char(219);
            }
        }
    }
    virtual int getX() {
        return x;
    }

    virtual int getY() {
        return y;
    }

    virtual int getAncho() {
        return w;
    }

    virtual int getAlto() {
        return h;
    }

};

class Personaje : public CMovil {
private:
    int puntosAcumulados;

public:
    Personaje() : CMovil(50, 33, 1, 1, 3, 3), puntosAcumulados(0) {}

    void mostrarPuntos() {
        setColor(14, 0);
        cout << "PUNTOS: ";
        setColor(14, 1);
        cout << puntosAcumulados;
    }

    void setPuntosAcumulados(int suma) { puntosAcumulados += suma; }
    int getPuntosAcumulados() { return puntosAcumulados; }

    void Personaje::dibujar() {
        for (size_t i = 0; i < h; i++) {
            for (size_t j = 0; j < w; j++) {
                color(992);
                setxy(x + j, i + y);

                if (i == 0 && j == 1)
                    cout << char(79);
                else if ((i == h - 2 && j == 0) || (i == h - 1 && j == 0))
                    cout << char(47);
                else if ((i == h - 2 && j == w - 1) || (i == h - 1 && j == w - 1))
                    cout << char(92);
                else if (i == 1 && j == 1)
                    cout << char(124);
                else
                    cout << ' ';
            }
            cout << endl;
        }
    }


    void mover(char var) {
        switch (var) {
        case 'W':
            if (y > MINY) y -= dy;
            break;
        case 'S':
            if (y < MAXY - 2) y += dy;
            break;
        case 'A':
            if (x > MINX) x -= dx;
            break;
        case 'D':
            if (x < MAXX) x += dx;
            break;
        }
    }
};
