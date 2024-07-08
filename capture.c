#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Array of Pokémon names
const char *pokemon_names[] = {
    "Pikachu", "Charmander", "Bulbasaur", "Squirtle", "Jigglypuff",
    "Gengar", "Snorlax", "Mewtwo", "Dragonite", "Eevee"
};

// Function to simulate a Pokémon capture attempt
bool try_to_capture(const char *pokemon) {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random success rate (0 to 99)
    int success_rate = rand() % 100;

    // Capture attempt
    if (success_rate < 50) {  // Success rate of 50%
        printf("Congratulations! You captured %s!\n", pokemon);
        return true;
    } else {
        printf("Oh no! %s escaped!\n", pokemon);
        return false;
    }
}

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Select a random Pokémon from the list
    int idx = rand() % (sizeof(pokemon_names) / sizeof(pokemon_names[0]));
    const char *pokemon = pokemon_names[idx];

    // Attempt to capture the Pokémon
    bool captured = try_to_capture(pokemon);

    if (captured) {
        printf("You are now a proud Pokémon Trainer!\n");
    } else {
        printf("Better luck next time!\n");
    }

    return 0;
}
