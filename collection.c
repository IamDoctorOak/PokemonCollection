#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Array of Pokémon names (replace with your collection)
const char *pokemon_collection[] = {
    "Pikachu", "Charizard", "Bulbasaur", "Squirtle", "Jigglypuff",
    "Gengar", "Snorlax", "Mewtwo", "Dragonite", "Eevee",
    "Magikarp", "Gyarados", "Articuno", "Zapdos", "Moltres"
};

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Print 15 random Pokémon from the collection
    printf("Random Pokémon from Your Collection:\n");
    for (int i = 0; i < 15; ++i) {
        int index = rand() % (sizeof(pokemon_collection) / sizeof(pokemon_collection[0]));
        printf("%d. %s\n", i + 1, pokemon_collection[index]);
    }

    return 0;
}
