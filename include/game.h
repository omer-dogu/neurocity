#pragma once
#include "player.h"
#include "room.h"

void clearScreen();

class Game {
public:
    Game(Player& player);
    void run();
private:
    Player& player;
    std::vector<std::vector<Room>> map;
    int playerX = 0, playerY = 0;

    void setupMap();
    void movePlayer(const std::string& direction);
};