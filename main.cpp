#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>

// Pokemon class
class Pokemon {
public:
    std::string name;
    int attack;
    int defense;
    int speed;
    int hp;

    int totalScore() {
        return attack + defense + speed + hp;
    }
};

    // Pokemon Team
    std::vector<Pokemon> generateTeam(std::vector<Pokemon>& allPokemon) {
        // Shuffle the vector
        std::random_device rd;
        std::mt19937 g(rd());

        // Shuffle the vector
        std::shuffle(allPokemon.begin(), allPokemon.end(), g);

        // Create a team of 6 Pokemon
        std::vector<Pokemon> team(allPokemon.begin(), allPokemon.begin() + 6);

        return team;
    }   

// Main function
int main() {

    // Vector of Pokemon
    std::vector<Pokemon> allPokemon;

    // Create a new Pokemon
    Pokemon magikarp;
    magikarp.name = "Magikarp";
    magikarp.hp = 20;
    magikarp.attack = 10;
    magikarp.defense = 55;
    magikarp.speed = 80;

    // Add the new Pokemon to the vector
    allPokemon.push_back(magikarp);

    // New Pokemon
    Pokemon pikachu;
    pikachu.name = "Pikachu";
    pikachu.attack = 55;
    pikachu.defense = 40;
    pikachu.speed = 90;
    pikachu.hp = 35;
    allPokemon.push_back(pikachu);

    // New Pokemon
    Pokemon charmander;
    charmander.name = "Charmander";
    charmander.attack = 52;
    charmander.defense = 43;
    charmander.speed = 65;
    charmander.hp = 39;
    allPokemon.push_back(charmander);

    // New Pokemon
    Pokemon bulbasaur;
    bulbasaur.name = "Bulbasaur";
    bulbasaur.attack = 49;
    bulbasaur.defense = 49;
    bulbasaur.speed = 45;
    bulbasaur.hp = 45;
    allPokemon.push_back(bulbasaur);

    // New Pokemon
    Pokemon squirtle;
    squirtle.name = "Squirtle";
    squirtle.attack = 48;
    squirtle.defense = 65;
    squirtle.speed = 43;
    squirtle.hp = 44;
    allPokemon.push_back(squirtle);

    // New Pokemon
    Pokemon jigglypuff;
    jigglypuff.name = "Jigglypuff";
    jigglypuff.attack = 45;
    jigglypuff.defense = 20;
    jigglypuff.speed = 20;
    jigglypuff.hp = 115;
    allPokemon.push_back(jigglypuff);

    // New Pokemon
    Pokemon meowth;
    meowth.name = "Meowth";
    meowth.attack = 45;
    meowth.defense = 35;
    meowth.speed = 90;
    meowth.hp = 40;
    allPokemon.push_back(meowth);

    // New Pokemon
    Pokemon psyduck;
    psyduck.name = "Psyduck";
    psyduck.attack = 52;
    psyduck.defense = 48;
    psyduck.speed = 55;
    psyduck.hp = 50;
    allPokemon.push_back(psyduck);

    // New Pokemon
    Pokemon snorlax;
    snorlax.name = "Snorlax";
    snorlax.attack = 110;
    snorlax.defense = 65;
    snorlax.speed = 30;
    snorlax.hp = 160;
    allPokemon.push_back(snorlax);

    // New Pokemon
    Pokemon mewtwo;
    mewtwo.name = "Mewtwo";
    mewtwo.attack = 110;
    mewtwo.defense = 90;
    mewtwo.speed = 130;
    mewtwo.hp = 106;
    allPokemon.push_back(mewtwo);

    // New Pokemon
    Pokemon dragonite;
    dragonite.name = "Dragonite";
    dragonite.attack = 134;
    dragonite.defense = 95;
    dragonite.speed = 80;
    dragonite.hp = 91;
    allPokemon.push_back(dragonite);

    // New Pokemon
    Pokemon mew;
    mew.name = "Mew";
    mew.attack = 100;
    mew.defense = 100;
    mew.speed = 100;
    mew.hp = 100;
    allPokemon.push_back(mew);

    // New Pokemon
    Pokemon rayquaza;
    rayquaza.name = "Rayquaza";
    rayquaza.attack = 150;
    rayquaza.defense = 90;
    rayquaza.speed = 95;
    rayquaza.hp = 105;
    allPokemon.push_back(rayquaza);

    // Generate a team of 6 Pokemon
    std::vector<Pokemon> team = generateTeam(allPokemon);

    // Count the number of elements in the vector
    size_t count = allPokemon.size();
    std::cout << "The vector pokemon contains " << count << " elements. Which are the number of Pokemon" << std::endl;

    // Randomly select a Pokemon from the vector
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, allPokemon.size() - 1);

    // Generate a random index
    int randomIndex = distr(gen);
    Pokemon randomPokemon = allPokemon[randomIndex];

    // Print out the randomly selected Pokemon
    //std::cout << "Randomly selected Pokemon: " << randomPokemon.name << std::endl;
    //std::cout << "Pokemon HP: " << randomPokemon.hp << std::endl;
    //std::cout << "Pokemon Attack: " << randomPokemon.attack << std::endl;
    //std::cout << "Pokemon Defense: " << randomPokemon.defense << std::endl;
    //std::cout << "Pokemon Speed: " << randomPokemon.speed << std::endl;
    //std::cout << "Pokemon Total Score: " << randomPokemon.totalScore() << std::endl;

    // Battle
    // Randomly select two Pokemon
    Pokemon pokemon1 = allPokemon[0];
    Pokemon pokemon2 = allPokemon[1];

    // Print out the two Pokemon
    std::cout << "Pokemon 1: " << pokemon1.name << std::endl;
    std::cout << "Pokemon 2: " << pokemon2.name << std::endl;

// Print out different winning message depending on percentage of win landslide amount
// If the winning score is 50% higher than the losing score, it's a landslide win
double ratio = 1.5; // Adjust this value to change the threshold for a "landslide" win

// Print out the winner
double ratio1 = 1.2; // Close skirmish
double ratio2 = 2.0; // Godlike win

if (pokemon1.totalScore() == pokemon2.totalScore()) {
    // It's a draw
    std::cout << "It's a draw!" << std::endl;
} else if (pokemon1.totalScore() > pokemon2.totalScore()) {
    // Pokemon 1 wins
    if (pokemon1.totalScore() >= pokemon2.totalScore() * ratio2) { 
        std::cout << "Pokemon 1 wins! It's GODLIKE!" << std::endl;
    } else if (pokemon1.totalScore() >= pokemon2.totalScore() * ratio1) {
            std::cout << "It's a close skirmish! But " << pokemon1.name << " wins!" << std::endl;
    } else {
        std::cout << "Pokemon 1 wins!" << std::endl;
    }
    std::cout << "Pokemon 1 had a total score of " << pokemon1.totalScore() << " and Pokemon 2 had a total score of " << pokemon2.totalScore() << std::endl;
} else {
    // Pokemon 2 wins
    if (pokemon2.totalScore() >= pokemon1.totalScore() * ratio2) {
        std::cout << "Pokemon 2 wins! It's GODLIKE!" << std::endl;
    } else if (pokemon2.totalScore() >= pokemon1.totalScore() * ratio1) {
        std::cout << "It's a close skirmish! But " << pokemon2.name << " wins!" << std::endl;
    } else {
        std::cout << "Pokemon 2 wins!" << std::endl;
    }
    std::cout << "Pokemon 2 had a total score of " << pokemon2.totalScore() << " and Pokemon 1 had a total score of " << pokemon1.totalScore() << std::endl;
}

    // Idea 1 (EASIER)
    // Highest stats as score
    // List a bunch of pokemon and their stats
    // Create a team of 6 pokemon randomly
    // Calculate the total score of the team
    // Print out the team and the total score

    // Idea 2 (HARDER)
    //Two pokemon randomly selected
    //Random moves used to battle 1v1
    //Print out the winner
    //Moves




    // Return 0
    return 0;
}