#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Array of Pokémon names
const char *pokemon_names[] = {
    "Pikachu", "Charmander", "Bulbasaur", "Squirtle", "Jigglypuff",
    "Gengar", "Snorlax", "Mewtwo", "Dragonite", "Eevee"
};

// Function to simulate a Pokémon battle
void pokemon_battle() {
    // Seed the random number generator
    srand(time(NULL));

    // Select two random Pokémon
    int idx1 = rand() % (sizeof(pokemon_names) / sizeof(pokemon_names[0]));
    int idx2 = rand() % (sizeof(pokemon_names) / sizeof(pokemon_names[0]));
    
    // Ensure both indices are different
    while (idx2 == idx1) {
        idx2 = rand() % (sizeof(pokemon_names) / sizeof(pokemon_names[0]));
    }

    // Display the battle
    printf("Welcome to the Ultimate Pokémon Battle!\n");
    printf("%s vs %s\n", pokemon_names[idx1], pokemon_names[idx2]);

    // Determine the outcome (randomly)
    int outcome = rand() % 3;  // 0: Tie, 1: First wins, 2: Second wins

    switch (outcome) {
        case 0:
            printf("It's a tie! Both Pokémon faint from laughter!\n");
            break;
        case 1:
            printf("%s wins! %s is too busy posing for photos.\n", pokemon_names[idx1], pokemon_names[idx2]);
            break;
        case 2:
            printf("%s wins! %s got distracted by its own reflection.\n", pokemon_names[idx2], pokemon_names[idx1]);
            break;
        default:
            break;
    }
}

int main() {
    // Simulate a Pokémon battle
    pokemon_battle();

    return 0;
}
