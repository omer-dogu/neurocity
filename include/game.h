#pragma once
#include "player.h"

class Game {
public:
    Game(Player& player) : player(player) { }
private:
    Player& player;
};