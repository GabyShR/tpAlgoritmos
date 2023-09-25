#include "pch.h"
#include "Menu.h"

using namespace System;
using namespace std;

int main()
{
    srand(time(0));
    Console::SetWindowSize(120, 40);
    Console::CursorVisible = false;

    menuFinal();

    system("pause>0");
    return 0;
}
