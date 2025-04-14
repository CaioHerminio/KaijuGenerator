// 🦖 KAIJU GENERATOR - C++ Edition

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iomanip>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Kaiju data
    std::vector<std::string> syllables1 = {"Giga", "Mega", "Ultra", "Zilla", "Kor", "Kaiju", "Titan", "Dino"};
    std::vector<std::string> syllables2 = {"tro", "zi", "do", "ra", "gon"};
    std::vector<std::string> syllables3 = {"-X", " Prime", " Omega", " Ultimus", " King"};

    std::vector<std::string> bodyDescriptions = {
        "a six-legged shark with metal armor and goat horns",
        "a snake with a wolf's head, bird wings, and nine scorpion tails",
        "a gorilla with lava skin and iron fists",
        "a centipede made of stone and covered in spikes",
        "a crocodile with rhino armor and eagle talons",
        "a turtle with crystal shell and spider legs",
        "a lion with obsidian fur and tentacle mane",
        "a mantis with golden plating and bat wings",
        "a deer with armor made of bones and venomous fangs",
        "a horse with magma hooves and beetle horns",
        "a jellyfish floating with glass skin and serpent tendrils",
        "a dragonfly fused with sapphire scales and crab claws"
    };

    std::vector<std::string> colors = {"black", "silver", "white", "red", "orange", "gold", "yellow", "green", "turquoise", "blue", "purple", "pink"};
    std::vector<std::string> rageRanks = {"S", "A", "B", "C", "D", "E"};

    // Game Starts
    std::cout << "Welcome to the Kaiju Generator Service!\n";
    std::cout << "Here, you can generate and purchase your own Kaiju to destroy planets and armies.\n\n";
    std::cout << "Press Enter to generate your Kaiju...";
    std::cin.get();

    // Generate random values
    std::string kaijuName = 
        syllables1[rand() % syllables1.size()] +
        syllables2[rand() % syllables2.size()] +
        syllables3[rand() % syllables3.size()];

    int kaijuSize = rand() % (300 - 50 + 1) + 50;
    std::string kaijuRage = rageRanks[rand() % rageRanks.size()];
    int kaijuDestruction = rand() % (100 - 10 + 1) + 10;
    int kaijuPrice = rand() % (10000000 - 1000000 + 1) + 1000000;
    std::string kaijuBody = bodyDescriptions[rand() % bodyDescriptions.size()];

    // Colors
    int colorCount = (rand() % 2) + 1;
    std::random_shuffle(colors.begin(), colors.end());

    std::string kaijuColorDescription = colors[0];
    if (colorCount == 2) {
        kaijuColorDescription += " and " + colors[1];
    }

    // Display results
    std::cout << "\nYour Kaiju has been generated!\n";
    std::cout << "Name: " << kaijuName << "\n";
    std::cout << "Size: " << kaijuSize << " meters high\n";
    std::cout << "Color(s): " << kaijuColorDescription << "\n";
    std::cout << "Rage Rank: " << kaijuRage << "\n";
    std::cout << "Destruction Level: " << kaijuDestruction << "%\n";
    std::cout << "Body Description: " << kaijuBody << "\n";
    std::cout << "Price: $" << std::fixed << std::setprecision(0) << kaijuPrice << "\n";

    // Confirmation
    std::cout << "\nPress Enter to confirm your purchase...";
    std::cin.get();

    // Game ends
    std::cout << "\nThank you for using the Kaiju Generator Service!\n";
    std::cout << "Happy destruction and world domination!\n";

    system("pause");
    return 0;
}
