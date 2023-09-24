#include "Librerias.h"
#include "Juego.h"


char cuadradito() {
	return (char(220));
}

int OfficeTest[40][120] = {                                                  //                                                                                              //
	  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	  {2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,2,2,1,3,3,3,3,3,3,1,2,1,3,3,3,3,1,2,1,3,3,3,3,1,0,1,3,1,1,3,3,3,3,1,2,1,3,3,3,3,1,2,2,2,2,2,2,2,2,2,2,1,3,3,3,3,3,3,3,3,1,2,1,3,3,3,3,1,2,1,3,3,3,3,1,2,1,3,3,3,3,3,3,3,3,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
	  {2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,2,1,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,1,3,3,3,3,3,3,1,3,3,1,3,3,3,3,3,3,1,3,3,3,3,3,3,1,2,2,2,2,2,2,2,2,1,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,1,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,3,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
	  {4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,0,2,1,3,3,3,1,1,3,3,3,1,3,3,3,1,1,1,1,3,3,3,1,1,1,1,3,3,1,3,3,3,1,1,1,1,3,3,3,1,1,1,4,4,4,4,4,4,4,4,2,2,1,1,1,1,3,3,1,1,1,1,1,3,3,3,1,1,1,1,3,3,3,1,1,1,4,1,1,1,1,3,3,1,1,1,1,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4},
	  {4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,0,2,1,3,3,1,4,4,1,3,3,1,3,3,1,1,4,4,1,3,3,1,1,2,0,1,3,3,1,3,3,1,4,4,4,1,3,3,1,1,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,1,3,3,1,4,4,4,1,3,3,1,1,4,2,1,3,3,1,1,1,4,4,4,2,2,1,3,3,1,0,2,2,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4},
	  {4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,0,2,1,3,3,1,4,4,1,3,3,1,3,3,3,3,1,4,1,3,3,3,3,1,0,1,3,3,1,3,3,1,4,4,4,1,3,3,3,3,1,4,4,4,4,4,4,4,4,4,2,2,0,0,0,1,3,3,1,4,4,4,1,3,3,3,3,1,2,1,3,3,3,3,3,1,4,4,2,2,1,3,3,1,0,2,2,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4},
	  {4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,0,2,1,3,3,1,4,4,1,3,3,1,3,3,3,1,4,4,1,3,3,3,1,2,0,1,3,3,1,3,3,1,4,4,4,1,3,3,3,3,1,4,4,4,4,4,4,4,4,4,2,2,0,0,0,1,3,3,1,4,4,8,8,3,3,3,3,1,2,4,1,3,3,3,3,3,1,4,2,2,1,3,3,1,0,2,2,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4},
	  {4,2,4,4,4,4,4,4,4,4,4,8,8,0,0,0,0,0,2,1,3,3,1,4,4,1,3,3,1,3,3,1,4,4,4,1,3,3,1,2,2,0,1,3,3,1,3,3,1,4,4,4,1,3,3,1,1,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,1,3,3,1,4,8,5,8,3,3,1,1,4,2,4,4,1,1,1,3,3,1,4,2,2,1,3,3,1,0,2,2,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4},
	  {4,2,4,4,4,4,4,4,4,4,8,5,5,8,0,0,0,0,2,1,3,3,3,1,1,3,3,3,1,3,3,1,4,4,4,1,3,3,1,2,2,0,1,3,3,1,3,3,3,1,1,1,1,3,3,3,1,1,1,4,4,4,4,4,4,4,4,2,2,0,0,0,1,3,3,1,8,5,5,8,3,3,3,1,1,1,4,1,1,1,3,3,3,1,4,2,2,1,3,3,1,0,2,2,4,0,0,4,4,4,4,4,4,2,4,4,4,4,4,4},
	  {4,2,4,4,4,4,4,4,4,4,8,5,5,8,0,0,0,0,2,1,3,3,3,3,3,3,3,3,1,3,3,1,4,4,4,1,3,3,1,2,2,0,1,3,3,1,3,3,3,3,3,3,1,3,3,3,3,3,3,1,4,4,4,4,4,4,4,2,2,0,0,0,1,3,3,8,5,5,5,8,3,3,3,3,3,3,1,3,3,3,3,3,3,1,4,2,2,1,3,3,1,0,2,2,0,5,5,0,4,4,4,4,4,2,4,4,4,4,4,4},
	  {4,2,4,4,4,4,4,4,4,4,8,5,5,8,0,0,0,0,2,2,1,3,3,3,3,3,3,1,4,1,3,1,4,4,4,4,1,3,1,2,2,0,1,3,1,0,1,3,3,3,3,1,4,1,3,3,3,3,1,4,4,4,4,4,4,4,4,2,2,0,0,0,1,3,1,8,5,5,5,5,8,3,3,3,3,1,4,1,3,3,3,3,1,4,4,2,2,1,3,1,0,0,2,2,0,5,5,0,4,4,4,4,4,2,4,4,4,4,4,4},
	  {4,2,4,4,4,4,4,4,4,4,8,5,5,5,8,0,0,0,2,2,4,1,1,1,1,1,1,4,4,2,1,4,4,4,4,4,4,1,4,2,2,0,0,1,0,0,2,1,1,1,1,4,4,4,1,1,1,1,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,1,0,0,5,5,5,5,5,8,1,1,1,2,4,4,1,1,1,1,4,4,4,2,2,0,1,0,0,0,2,2,0,5,5,0,4,4,4,4,4,2,4,4,4,4,4,4},
	  {2,2,2,2,2,2,2,2,2,2,8,5,5,5,8,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,5,5,0,5,5,5,5,5,8,5,5,8,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,2,2,0,5,5,5,0,2,2,2,2,2,2,2,2,2,2,2},
	  {4,2,4,4,4,4,8,8,4,4,8,5,5,5,8,0,5,5,0,2,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,8,8,4,4,2,2,0,0,0,0,0,2,2,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,5,5,5,5,5,5,5,5,5,5,5,0,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,0,2,2,0,5,5,5,0,4,0,0,4,2,4,4,4,4,4,4},
	  {4,2,4,4,4,8,5,5,8,4,8,5,5,5,8,0,5,5,0,2,4,4,4,4,4,4,0,6,6,6,6,6,6,6,6,6,6,8,0,2,2,0,0,0,0,0,2,2,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,5,5,5,5,5,5,5,5,5,5,5,0,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,0,2,2,0,5,5,5,0,0,5,5,0,2,4,4,4,4,4,4},
	  {4,2,4,4,4,8,5,5,8,4,8,5,5,5,8,0,5,5,0,2,4,4,4,4,4,4,4,0,6,6,6,6,6,6,6,6,6,6,8,0,2,0,0,0,0,0,2,2,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,0,5,5,5,5,5,5,5,5,5,0,4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,5,5,0,2,0,5,5,5,0,0,5,5,0,2,4,4,4,4,4,4},
	  {4,2,4,4,4,8,5,5,8,4,8,5,5,5,8,5,5,8,2,0,4,4,4,4,4,4,4,0,6,6,6,6,6,6,6,6,6,6,6,8,2,0,0,0,0,0,2,2,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,4,4,4,2,2,0,0,0,0,0,0,0,5,5,5,5,5,0,0,4,4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,5,5,0,2,0,5,5,5,0,0,5,5,0,2,4,4,4,4,4,4},
	  {4,2,4,4,4,8,5,5,8,4,8,5,5,5,8,5,5,8,0,5,0,4,4,4,4,4,4,4,0,6,6,6,6,6,6,6,6,6,6,6,8,0,0,0,0,0,2,2,4,4,4,4,0,7,7,7,7,7,7,7,7,7,7,7,0,4,4,2,2,0,0,0,0,0,2,0,5,5,5,5,5,8,4,4,4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,5,5,0,2,0,5,5,5,0,5,5,0,4,0,4,4,4,4,4,4},
	  {4,2,4,4,4,4,8,5,5,8,8,5,5,5,8,5,5,8,0,5,5,0,4,4,4,4,4,4,4,0,6,6,6,6,6,6,6,6,6,6,8,0,0,0,0,0,2,2,4,4,4,0,7,7,7,7,7,7,7,7,7,7,7,7,7,0,4,2,2,0,0,0,0,0,0,0,0,0,0,0,0,8,0,8,8,8,4,4,4,4,4,4,4,4,4,2,2,0,0,0,5,5,0,2,0,5,5,5,0,5,5,0,0,5,0,4,4,4,4,4},
	  {4,2,4,4,4,8,8,5,5,8,8,5,5,5,8,5,5,8,5,5,5,0,4,4,4,4,4,4,4,0,6,6,6,6,6,6,6,6,6,6,6,8,0,0,0,0,2,2,4,4,0,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,2,2,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,8,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,5,5,0,0,5,5,5,0,5,5,0,0,5,5,0,4,4,4,4},
	  {4,2,4,4,8,5,8,5,5,8,8,5,5,5,8,5,5,8,5,5,0,4,4,4,4,4,4,4,4,2,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,8,0,2,4,0,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,2,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,8,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,5,5,0,0,5,5,5,0,5,5,0,5,5,5,0,4,4,4,4},
	  {4,2,4,4,8,5,0,5,5,8,8,5,5,5,8,5,8,5,5,5,0,4,4,4,4,4,4,4,4,2,0,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,8,2,4,0,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,2,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,8,2,4,4,4,4,4,4,4,4,4,2,2,0,0,5,0,5,5,0,0,5,5,5,0,5,5,0,5,5,0,4,4,4,4,4},
	  {2,2,2,2,8,5,5,5,5,8,5,5,5,5,8,5,8,5,5,5,0,2,2,2,2,2,2,2,2,2,2,8,8,8,8,8,8,0,0,0,0,0,8,8,8,8,0,2,2,0,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,2,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,0,2,2,2,2,2,2,2,2,2,2,2,0,0,5,0,5,5,0,0,5,5,5,0,5,0,5,5,5,0,4,2,2,2,2},
	  {2,2,2,2,8,5,5,5,5,8,5,5,5,5,8,5,8,5,5,0,2,2,2,2,2,2,2,0,0,0,8,8,7,7,7,7,7,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,7,7,7,7,7,8,8,0,0,0,2,2,2,2,2,2,0,0,5,5,5,5,0,5,5,5,5,0,5,0,5,5,5,0,2,2,2,2,2},
	  {0,0,0,0,0,8,5,5,5,8,5,5,5,8,5,8,5,5,5,0,0,0,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,8,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,0,0,5,5,5,5,0,5,5,5,5,0,5,0,5,5,0,2,2,0,0,0,0},
	  {0,0,0,0,0,8,5,5,5,8,5,5,5,8,5,8,5,5,5,0,0,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,0,0,5,5,5,0,5,5,5,0,5,0,5,5,5,0,0,0,0,0,0,0},
	  {0,0,0,0,0,0,8,5,5,5,5,5,5,8,5,5,5,5,0,0,0,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,0,0,5,5,5,0,5,5,5,0,5,0,5,5,5,0,0,0,0,0,0,0},
	  {0,0,0,0,0,0,8,5,5,5,5,5,5,5,5,5,5,5,0,0,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,0,0,5,5,5,5,5,5,0,5,5,5,5,0,0,0,0,0,0,0,0},
	  {0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0,0},
	  {0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0},
	  {0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0},
	  {0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,8,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0},
	  {0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0},
	  {0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0},
	  {0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0},
	  {0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,0,0,0,0,8,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,8,0,0,0,0,0,0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0},
	  {0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,0},
	  {0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,0},
	  {0,0,0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0,0,0,0},

};

int OfficeTestMenu[40][120] = {                                                                  //                                                    //
	//0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 
	 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	 {2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,2,2,1,3,3,3,3,3,3,1,2,1,3,3,3,3,1,2,1,3,3,3,3,1,0,1,3,1,1,3,3,3,3,1,2,1,3,3,3,3,1,2,2,2,2,2,2,2,2,2,2,1,3,3,3,3,3,3,3,3,1,2,1,3,3,3,3,1,2,1,3,3,3,3,1,2,1,3,3,3,3,3,3,3,3,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
	 {2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,2,1,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,1,3,3,3,3,3,3,1,3,3,1,3,3,3,3,3,3,1,3,3,3,3,3,3,1,2,2,2,2,2,2,2,2,1,3,3,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,1,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,3,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
	 {4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,0,2,1,3,3,3,1,1,3,3,3,1,3,3,3,1,1,1,1,3,3,3,1,1,1,1,3,3,1,3,3,3,1,1,1,1,3,3,3,1,1,1,4,4,4,4,4,4,4,4,2,2,1,1,1,1,3,3,1,1,1,1,1,3,3,3,1,1,1,1,3,3,3,1,1,1,4,1,1,1,1,3,3,1,1,1,1,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4},
	 {4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,0,2,1,3,3,1,4,4,1,3,3,1,3,3,1,1,4,4,1,3,3,1,1,2,0,1,3,3,1,3,3,1,4,4,4,1,3,3,1,1,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,1,3,3,1,4,4,4,1,3,3,1,1,4,2,1,3,3,1,1,1,4,4,4,2,2,1,3,3,1,0,2,2,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4},
	 {4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,0,2,1,3,3,1,4,4,1,3,3,1,3,3,3,3,1,4,1,3,3,3,3,1,0,1,3,3,1,3,3,1,4,4,4,1,3,3,3,3,1,4,4,4,4,4,4,4,4,4,2,2,0,0,0,1,3,3,1,4,4,4,1,3,3,3,3,1,2,1,3,3,3,3,3,1,4,4,2,2,1,3,3,1,0,2,2,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4},
	 {4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,0,2,1,3,3,1,4,4,1,3,3,1,3,3,3,1,4,4,1,3,3,3,1,2,0,1,3,3,1,3,3,1,4,4,4,1,3,3,3,3,1,4,4,4,4,4,4,4,4,4,2,2,0,0,0,1,3,3,1,4,4,8,8,3,3,3,3,1,2,4,1,3,3,3,3,3,1,4,2,2,1,3,3,1,0,2,2,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4},
	 {4,2,4,4,4,4,4,4,4,4,4,8,8,0,0,0,0,0,2,1,3,3,1,4,4,1,3,3,1,3,3,1,4,4,4,1,3,3,1,2,2,0,1,3,3,1,3,3,1,4,4,4,1,3,3,1,1,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,1,3,3,1,4,8,5,8,3,3,1,1,4,2,4,4,1,1,1,3,3,1,4,2,2,1,3,3,1,0,2,2,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4},
	 {4,2,4,4,4,4,4,4,4,4,8,5,5,8,0,0,0,0,2,1,3,3,3,1,1,3,3,3,1,3,3,1,4,4,4,1,3,3,1,2,2,0,1,3,3,1,3,3,3,1,1,1,1,3,3,3,1,1,1,4,4,4,4,4,4,4,4,2,2,0,0,0,1,3,3,1,8,5,5,8,3,3,3,1,1,1,4,1,1,1,3,3,3,1,4,2,2,1,3,3,1,0,2,2,4,0,0,4,4,4,4,4,4,2,4,4,4,4,4,4},
	 {4,2,4,4,4,4,4,4,4,4,8,5,5,8,0,0,0,0,2,1,3,3,3,3,3,3,3,3,1,3,3,1,4,4,4,1,3,3,1,2,2,0,1,3,3,1,3,3,3,3,3,3,1,3,3,3,3,3,3,1,4,4,4,4,4,4,4,2,2,0,0,0,1,3,3,8,5,5,5,8,3,3,3,3,3,3,1,3,3,3,3,3,3,1,4,2,2,1,3,3,1,0,2,2,0,5,5,0,4,4,4,4,4,2,4,4,4,4,4,4},
	 {4,2,4,4,4,4,4,4,4,4,8,5,5,8,0,0,0,0,2,2,1,3,3,3,3,3,3,1,4,1,3,1,4,4,4,4,1,3,1,2,2,0,1,3,1,0,1,3,3,3,3,1,4,1,3,3,3,3,1,4,4,4,4,4,4,4,4,2,2,0,0,0,1,3,1,8,5,5,5,5,8,3,3,3,3,1,4,1,3,3,3,3,1,4,4,2,2,1,3,1,0,0,2,2,0,5,5,0,4,4,4,4,4,2,4,4,4,4,4,4},
	 {4,2,4,4,4,4,4,4,4,4,8,5,5,5,8,0,0,0,2,2,4,1,1,1,1,1,1,4,4,2,1,4,4,4,4,4,4,1,4,2,2,0,0,1,0,0,2,1,1,1,1,4,4,4,1,1,1,1,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,1,0,0,5,5,5,5,5,8,1,1,1,2,4,4,1,1,1,1,4,4,4,2,2,0,1,0,0,0,2,2,0,5,5,0,4,4,4,4,4,2,4,4,4,4,4,4},
	 {2,2,2,2,2,2,2,2,2,2,8,5,5,5,8,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,5,5,0,5,5,5,5,5,8,5,5,8,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,2,2,0,5,5,5,0,2,2,2,2,2,2,2,2,2,2,2},
	 {4,2,4,4,4,4,8,8,4,4,8,5,5,5,8,0,5,5,0,2,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,8,8,4,4,2,2,0,0,0,0,0,2,2,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,5,5,5,5,5,5,5,5,5,5,5,0,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,0,2,2,0,5,5,5,0,4,0,0,4,2,4,4,4,4,4,4},
	 {4,2,4,4,4,8,5,5,8,4,8,5,5,5,8,0,5,5,0,2,4,4,4,4,4,4,0,6,6,6,6,6,6,6,6,6,6,8,0,2,2,0,0,0,0,0,2,2,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,5,5,5,5,5,5,5,5,5,5,5,0,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,0,2,2,0,5,5,5,0,0,5,5,0,2,4,4,4,4,4,4},
	 {4,2,4,4,4,8,5,5,8,4,8,5,5,5,8,0,5,5,0,2,4,4,4,4,4,4,4,0,6,6,6,6,6,6,6,6,6,6,8,0,2,0,0,0,0,0,2,2,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,0,5,5,5,5,5,5,5,5,5,0,4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,5,5,0,2,0,5,5,5,0,0,5,5,0,2,4,4,4,4,4,4},
	 {4,2,4,4,4,8,5,5,8,4,8,5,5,5,8,5,5,8,2,0,4,4,4,4,4,4,4,0,6,6,6,6,6,6,6,6,6,6,6,8,2,0,0,0,0,0,2,2,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,4,4,4,2,2,0,0,0,0,0,0,0,5,5,5,5,5,0,0,4,4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,5,5,0,2,0,5,5,5,0,0,5,5,0,2,4,4,4,4,4,4},
	 {4,2,4,4,4,8,5,5,8,4,8,5,5,5,8,5,5,8,0,5,0,4,4,4,4,4,4,4,0,6,6,6,6,6,6,6,6,6,6,6,8,0,0,0,0,0,2,2,4,4,4,4,0,7,7,7,7,7,7,7,7,7,7,7,0,4,4,2,2,0,0,0,0,0,2,0,5,5,5,5,5,8,4,4,4,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,5,5,0,2,0,5,5,5,0,5,5,0,4,0,4,4,4,4,4,4},
	 {4,2,4,4,4,4,8,5,5,8,8,5,5,5,8,5,5,8,0,5,5,0,4,4,4,4,4,4,4,0,6,6,6,6,6,6,6,6,6,6,8,0,0,0,0,0,2,2,4,4,4,0,7,7,7,7,7,7,7,7,7,7,7,7,7,0,4,2,2,0,0,0,0,0,0,0,0,0,0,0,0,8,0,8,8,8,4,4,4,4,4,4,4,4,4,2,2,0,0,0,5,5,0,2,0,5,5,5,0,5,5,0,0,5,0,4,4,4,4,4},
	 {4,2,4,4,4,8,8,5,5,8,8,5,5,5,8,5,5,8,5,5,5,0,4,4,4,4,4,4,4,0,6,6,6,6,6,6,6,6,6,6,6,8,0,0,0,0,2,2,4,4,0,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,2,2,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,8,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,5,5,0,0,5,5,5,0,5,5,0,0,5,5,0,4,4,4,4},
	 {4,2,4,4,8,5,8,5,5,8,8,5,5,5,8,5,5,8,5,5,0,4,4,4,4,4,4,4,4,2,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,8,0,2,4,0,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,2,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,8,2,4,4,4,4,4,4,4,4,4,2,2,0,0,0,0,5,5,0,0,5,5,5,0,5,5,0,5,5,5,0,4,4,4,4},
	 {4,2,4,4,8,5,0,5,5,8,8,5,5,5,8,5,8,5,5,5,0,4,4,4,4,4,4,4,4,2,0,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,8,2,4,4,4,4,4,4,4,4,4,2,2,0,0,5,0,5,5,0,0,5,5,5,0,5,5,0,5,5,0,4,4,4,4,4},
	 {2,2,2,2,8,5,5,5,5,8,5,5,5,5,8,5,8,5,5,5,0,2,2,2,2,2,2,2,2,2,2,8,8,8,8,8,8,0,0,0,0,0,8,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,0,2,2,2,2,2,2,2,2,2,2,2,0,0,5,0,5,5,0,0,5,5,5,0,5,0,5,5,5,0,4,2,2,2,2},
	 {2,2,2,2,8,5,5,5,5,8,5,5,5,5,8,5,8,5,5,0,2,2,2,2,2,2,2,0,0,0,8,8,7,7,7,7,7,8,8,8,8,8,8,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,8,8,8,8,7,7,7,7,7,8,8,0,0,0,2,2,2,2,2,2,0,0,5,5,5,5,0,5,5,5,5,0,5,0,5,5,5,0,2,2,2,2,2},
	 {0,0,0,0,0,8,5,5,5,8,5,5,5,8,5,8,5,5,5,0,0,0,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,8,8,8,8,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,0,8,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,0,0,5,5,5,5,0,5,5,5,5,0,5,0,5,5,0,2,2,0,0,0,0},
	 {0,0,0,0,0,8,5,5,5,8,5,5,5,8,5,8,5,5,5,0,0,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,8,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,8,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,0,0,5,5,5,0,5,5,5,0,5,0,5,5,5,0,0,0,0,0,0,0},
	 {0,0,0,0,0,0,8,5,5,5,5,5,5,8,5,5,5,5,0,0,0,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,8,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,8,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,0,0,5,5,5,0,5,5,5,0,5,0,5,5,5,0,0,0,0,0,0,0},
	 {0,0,0,0,0,0,8,5,5,5,5,5,5,5,5,5,5,5,0,0,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,8,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,0,0,5,5,5,5,5,5,0,5,5,5,5,0,0,0,0,0,0,0,0},
	 {0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,8,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0,0},
	 {0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0},
	 {0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,8,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,8,8,7,7,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0},
	 {0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0},
	 {0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0},
	 {0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0},
	 {0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,0,0,0,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,0,0,0,0,0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0},
	 {0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,0,0,0,0,8,8,7,7,7,7,7,7,7,7,7,7,7,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,7,7,7,7,7,7,7,7,7,7,7,8,8,0,0,0,0,0,0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0},
	 {0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,0},
	 {0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,1,1,1,1,1,1,1,1,1,1,8,0,0,0,0,0,0,0,0},
	 {0,0,0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,0,0,0,0},

};

void printOT()
{
	for (int i = 0; i < 40; i++)
	{
		for (int j = 0; j < 120; j++)
		{
			Console::SetCursorPosition(j, i);
			if (OfficeTest[i][j + 1] == 5 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;
			if (OfficeTest[i - 1][j + 1] == 5 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;
			if (OfficeTest[i + 1][j - 1] == 5 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;
			if (OfficeTest[i - 1][j - 1] == 5 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;
			if (OfficeTest[i + 1][j + 1] == 5 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;
			if (OfficeTest[i - 1][j + 1] == 5 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;

			if (OfficeTest[i][j + 1] == 7 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;
			if (OfficeTest[i - 1][j + 1] == 7 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;
			if (OfficeTest[i + 1][j - 1] == 7 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;
			if (OfficeTest[i - 1][j - 1] == 7 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;
			if (OfficeTest[i + 1][j + 1] == 7 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;
			if (OfficeTest[i - 1][j + 1] == 7 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;

			if (OfficeTest[i][j + 1] == 6 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;
			if (OfficeTest[i - 1][j + 1] == 6 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;
			if (OfficeTest[i + 1][j - 1] == 6 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;
			if (OfficeTest[i - 1][j - 1] == 6 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;
			if (OfficeTest[i + 1][j + 1] == 6 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;
			if (OfficeTest[i - 1][j + 1] == 6 && OfficeTest[i][j] == 0) OfficeTest[i][j] = 8;

			if (i > 17 && (OfficeTest[i][j - 1] == 1 && OfficeTest[i][j] == 0)) OfficeTest[i][j] = 8;
			if (i > 17 && (OfficeTest[i][j + 1] == 1 && OfficeTest[i][j] == 0)) OfficeTest[i][j] = 8;
			if (i > 17 && (OfficeTest[i - 1][j + 1] == 1 && OfficeTest[i][j] == 0)) OfficeTest[i][j] = 8;
			if (i > 17 && (OfficeTest[i + 1][j + 1] == 1 && OfficeTest[i][j] == 0)) OfficeTest[i][j] = 8;

			if (OfficeTest[i][j] == 8) color(0); cout << char(219);
			if (OfficeTest[i][j] == 0) color(14); cout << char(219);
			if (OfficeTest[i][j] == 1)color(12); cout << char(219);
			if (OfficeTest[i][j] == 2)color(4); cout << char(219);
			if (OfficeTest[i][j] == 3)color(15); cout << char(219);
			if (OfficeTest[i][j] == 4)color(11); cout << char(219);
			if (OfficeTest[i][j] == 5)color(10); cout << char(219);
			if (OfficeTest[i][j] == 6)color(7); cout << char(219);
			if (OfficeTest[i][j] == 7)color(3); cout << char(219);
		}
		cout << endl;
	}

}

void printOTMenu()
{
	for (int i = 20; i < 35; i++)
	{
		for (int j = 44; j < 74; j++)
		{
			Console::SetCursorPosition(j, i);
			if (OfficeTestMenu[i][j] == 0) color(14); cout << char(219);
		}cout << endl;
	}		

}

void menu()
{
	printOT();
	printOTMenu();
	color(992);

	setxy(53, 22); cout << "Nueva Partida";
	setxy(53, 25); cout << "Instrucciones";
	setxy(53, 28); cout << "Creditos";
	setxy(53, 31); cout << "Salir";

}




void moverPuntero(int& xP, int& yP, int& dyP, bool& mostrarPuntero)
{
	if (_kbhit()) {
		int tecla = _getch();
		if (tecla == ABAJO)
		{
			setxy(xP, yP);
			cout << " ";
			yP += dyP;
			setxy(xP, yP);
			cout << cuadradito();
			if (yP >= 31) dyP *= 0;
			else dyP = 3;
		}
		if (tecla == ARRIBA)
		{
			setxy(xP, yP);
			cout << " ";
			yP -= dyP;
			setxy(xP, yP);
			cout << cuadradito();
			if (yP <= 22) dyP *= 0;
			else dyP = 3;
		}
		if (tecla == ENTER && yP == 22)
		{
			mostrarPuntero = false;
			Console::Clear();
			CJuego* objJuego = new CJuego();
			printJuegoMatriz();
			objJuego->partida();
			//if (ir_al_Menu == true) menuFinal();

		}
		if (tecla == ENTER && yP == 25)
		{
			mostrarPuntero = false;
			Console::Clear();
			//instrucciones();
		}
		if (tecla == ENTER && yP == 28)
		{
			mostrarPuntero = false;
			Console::Clear();
			//skin();
		}
		if (tecla == ENTER && yP == 31)
		{
			mostrarPuntero = false;
			Console::Clear();
			setxy(WIDTH / 2, HEIGHT / 2); cout << "GRACIAS POR JUGAR :D";
			_sleep(1000);
			exit(0);
		}
	}
}

void menuFinal()
{
	Console::Clear();
	//playmusic();
	int xP = 51; int yP = 22; int dyP = 3;
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