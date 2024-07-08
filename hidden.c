#include <stdio.h>
#include <string.h>

// Function to print hidden Pokémon names
void print_hidden_pokemon_names() {
    char pokemon1[] = "Bul";
    char pokemon2[] = "bas";
    char pokemon3[] = "aur";
    char pokemon4[] = "Ivy";
    char pokemon5[] = "saur";
    char pokemon6[] = "Cater";
    char pokemon7[] = "pie";
    char pokemon8[] = "But";
    char pokemon9[] = "ter";
    char pokemon10[] = "free";

    // Concatenate and print the Pokémon names
    printf("Hidden Pokémon names:\n");
    printf("%s%s%s\n", pokemon1, pokemon2, pokemon3);
    printf("%s%s%s\n", pokemon4, pokemon5, pokemon3);
    printf("%s%s%s\n", pokemon6, pokemon7, pokemon3);
    printf("%s%s%s\n", pokemon8, pokemon9, pokemon10);
}

int main() {
    // Call function to print hidden Pokémon names
    print_hidden_pokemon_names();

    return 0;
}
