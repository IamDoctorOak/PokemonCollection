#include <stdio.h>
#include <string.h>

#define MAX_POKEMON 100
#define MAX_STYLE_LEN 20

// Structure to represent a Pokémon
struct Pokemon {
    char name[50];
    char style[MAX_STYLE_LEN];
};

// Function to display Pokémon based on style
void displayPokemonByStyle(struct Pokemon pokemons[], int numPokemons, const char style[]) {
    int found = 0;
    printf("Pokémon in the style '%s':\n", style);
    for (int i = 0; i < numPokemons; ++i) {
        if (strcmp(pokemons[i].style, style) == 0) {
            printf("- %s\n", pokemons[i].name);
            found = 1;
        }
    }
    if (!found) {
        printf("No Pokémon found in the style '%s'.\n", style);
    }
}

int main() {
    struct Pokemon pokedex[MAX_POKEMON] = {
        {"Pikachu", "Electric"},
        {"Charmander", "Fire"},
        {"Squirtle", "Water"},
        {"Bulbasaur", "Grass"},
        {"Gengar", "Ghost"},
        {"Jigglypuff", "Fairy"},
        {"Gyarados", "Water"},
        {"Arcanine", "Fire"},
        {"Venusaur", "Grass"},
        {"Dragonite", "Dragon"}
        // Add more Pokémon here as needed
    };

    int numPokemons = 10;  // Update this with the actual number of Pokémon in the pokedex

    char searchStyle[MAX_STYLE_LEN];
    printf("Enter a Pokémon style to search (e.g., Electric, Fire, Water): ");
    scanf("%s", searchStyle);

    displayPokemonByStyle(pokedex, numPokemons, searchStyle);

    return 0;
}
