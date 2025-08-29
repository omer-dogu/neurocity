#pragma once
#include <string>

class Item {
public:
    Item(const std::string& name, int hpBonus = 0, int atkBonus = 0)
        : name(name), hpBonus(hpBonus), atkBonus(atkBonus) {}

    std::string getName() const { return name; }
    int getHpBonus() const { return hpBonus; }
    int getAtkBonus() const { return atkBonus; }

private:
    std::string name;
    int hpBonus;
    int atkBonus;
};