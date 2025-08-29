#include <iostream>
#include <chrono>
#include <thread>
#include "player.h"
#include "game.h"

void printSlow(const std::string& text, int delayMs = 30) {
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delayMs));
    }
}

int main()
{
    printSlow("NOT EVERY WOUND IS ON THE BODY. SOME LIE DEEP IN THE MIND.\n");
    printSlow("(Screen black. Distant waves. It slowly brightens.)\n"
              "(Resident room: a window with a sea view; a desk with a computer showing the hospital system; a wall clock; an armchair.)\n");
    printSlow("You're the rookie resident. It's your first primary on-call shift.\n"
              "You'll handle all ED consults.\n"
              "Good luck.\n");
    printSlow("(The wall clock goes <tick... tock... tick... tock...>. Camera edges toward the clock.)\n");
    printSlow("Enter your name: ");
    std::string name;
    std::getline(std::cin, name);
    Player player(name);
    printSlow("Welcome, Dr. " + name + ".\n");
    player.printStats();

    Game game(player);
}