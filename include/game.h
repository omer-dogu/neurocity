#pragma once
#include "player.h"

void clearScreen();

class Game {
public:
    Game(Player& player) : player(player) { }
    void run();
private:
    Player& player;
};