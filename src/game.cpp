#include "game.h"

#ifdef _WIN32
#include <windows.h>
void clearScreen() { system("cls"); }
#else
void clearScreen() { system("clear"); }
#endif

void Game::run()
{

}