#pragma once

#include <iostream>
#include <string>

class Player
{
    public:
        Player() { }
        Player(const std::string& name) : name(name) { }
        Player(const int atk) : atk(atk) { }
        Player(const std::string& name, const int atk) : name(name), atk(atk) { }
        void printName()const { std::cout << name << "\n"; }

    // HP
    void printHp() const { std::cout << hp; }
    int getHp() const { return hp; }
    void setHp(int value) { setStat(hp, value, "HP"); }
    void decreaseHp(int value) { changeStat(hp, -value, 0, 100, "HP decreased to "); }
    void increaseHp(int value) { changeStat(hp, value, 0, 100, "HP increased to "); }

    // ATK
    void printAtk() const { std::cout << atk; }
    int getAtk() const { return atk; }
    void setAtk(int value) { setStat(atk, value, "ATK"); }
    void decreaseAtk(int value) { changeStat(atk, -value, 0, 100, "ATK decreased to "); }
    void increaseAtk(int value) { changeStat(atk, value, 0, 100, "ATK increased to "); }

private:
    std::string name{"garip"};
    int hp{100};
    int atk{10};

    // Yardımcı fonksiyonlar
    void setStat(int& stat, int value, const char* statName) {
        stat = value;
        std::cout << "Player's " << statName << " set to " << stat << "\n";
    }
    void changeStat(int& stat, int delta, int min, int max, const char* msg) {
        stat += delta;
        if (stat < min) stat = min;
        if (stat > max) stat = max;
        std::cout << "Player's " << msg << stat << "\n";
    }
};