#include "pch.h"

#include "CCreditos.h"

void colori(int c) {

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, c);
} 
int main()
{
	//system("color 3b");
	Console::SetWindowSize(WIDTH, HEIGHT);
	Console::CursorVisible = false;
	CCreditos* creditos = new CCreditos();
	CIntegrante* gaby = new CIntegrante(5, 103);

dibujarFondo(); 

	colori(992); 
	creditos->animarCreditos();


	system("pause>0");
	return 0;
}
