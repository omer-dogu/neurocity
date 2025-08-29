#include "game.h"

#ifdef _WIN32
#include <windows.h>
void clearScreen() { system("cls"); }
#else
void clearScreen() { system("clear"); }
#endif

Game::Game(Player& player) : player(player) {
    setupMap();
}

void Game::setupMap() {
    // 2x2 örnek harita
    map = {
        { Room("Resident Room", "A small room with a sea view."), Room("Hallway", "A long hospital corridor.") },
        { Room("ED", "Emergency Department, busy and loud."), Room("Storage", "A room full of medical supplies.") }
    };
    map[0][0].addItem(Item("Coffee", 10, 0));
    map[1][1].addItem(Item("Scalpel", 0, 5));
}

void Game::movePlayer(const std::string& direction) {
    if (direction == "north" && playerY > 0) playerY--;
    else if (direction == "south" && playerY < map.size() - 1) playerY++;
    else if (direction == "west" && playerX > 0) playerX--;
    else if (direction == "east" && playerX < map[0].size() - 1) playerX++;
    else std::cout << "You can't go that way.\n";
}

void Game::run() {
    while (true) {
        clearScreen();
        map[playerY][playerX].printInfo();
        std::cout << "Where do you want to go? (north/south/east/west/quit): ";
        std::string dir;
        std::cin >> dir;
        if (dir == "quit") break;
        movePlayer(dir);
    }
}