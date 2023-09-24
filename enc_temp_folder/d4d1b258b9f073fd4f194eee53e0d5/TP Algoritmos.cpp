#include "pch.h"
#include "CCreditos.h"

int main()
{
	//system("color 3b");
	Console::SetWindowSize(WIDTH, HEIGHT);
	Console::CursorVisible = false;
	CCreditos* creditos = new CCreditos();
	CIntegrante* gaby = new CIntegrante(5, 103);

	//creditos->pantallaDeFondo();

	color(992); 
	creditos->animarNombres();


	system("pause>0");
	return 0;
}
