#include <iostream>
#include "player.h"
#include "game.h"

int main()
{
    std::cout << "NOT EVERY WOUND IS ON THE BODY. SOME LIE DEEP IN THE MIND.\n";
    std::cout << "(Screen black. Distant waves. It slowly brightens.)\n"
                 "(Resident room: a window with a sea view; a desk with a computer showing the hospital system; a wall clock; an armchair.)\n";
    std::cout << "You're the rookie resident. It's your first primary on-call shift.\n"
                 "You'll handle all ED consults.\n"
                 "Good luck.\n";
    std::cout << "(The wall clock goes <tick... tock... tick... tock...>. Camera edges toward the clock.)\n";

    std::cout << "Enter your name: ";
    std::string name;
    std::getline(std::cin, name);
    clearScreen();
    Player player(name);
    std::cout << "Welcome ";
    player.printStats();

    Game game(player);
    game.run();
}