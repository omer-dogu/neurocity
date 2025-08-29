#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "item.h"

class Room {
public:
    Room(const std::string& name, const std::string& description)
        : name(name), description(description) {}

    void addItem(const Item& item) { items.push_back(item); }
    const std::vector<Item>& getItems() const { return items; }
    std::string getName() const { return name; }
    std::string getDescription() const { return description; }

    void printInfo() const {
        std::cout << "You are in: " << name << "\n";
        std::cout << description << "\n";
        if (items.empty()) {
            std::cout << "There are no items here.\n";
        } else {
            std::cout << "Items in this room:\n";
            for (const auto& item : items)
                std::cout << "- " << item.getName() << "\n";
        }
    }

    // Item alma fonksiyonu ekleyebilirsin

private:
    std::string name;
    std::string description;
    std::vector<Item> items;
};