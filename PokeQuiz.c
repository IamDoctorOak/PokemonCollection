#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Function to display Pokémon quiz questions
void pokemon_quiz() {
    int score = 0;
    char answer[20];

    printf("Welcome to the Pokémon Quiz!\n");
    printf("Answer the following questions:\n\n");

    // Question 1
    printf("1. What type is Pikachu?\n");
    printf("   A. Electric\n   B. Fire\n   C. Grass\n   D. Water\n");
    printf("Your answer: ");
    scanf(" %s", answer);
    if (strcasecmp(answer, "A") == 0 || strcasecmp(answer, "Electric") == 0) {
        printf("Correct! Pikachu is Electric type.\n");
        score++;
    } else {
        printf("Incorrect! Pikachu is Electric type.\n");
    }
    printf("\n");

    // Question 2
    printf("2. Which Pokémon is known as the 'Fire Lizard'?\n");
    printf("   A. Pikachu\n   B. Charmander\n   C. Squirtle\n   D. Bulbasaur\n");
    printf("Your answer: ");
    scanf(" %s", answer);
    if (strcasecmp(answer, "B") == 0 || strcasecmp(answer, "Charmander") == 0) {
        printf("Correct! Charmander is known as the Fire Lizard.\n");
        score++;
    } else {
        printf("Incorrect! Charmander is known as the Fire Lizard.\n");
    }
    printf("\n");

    // Question 3
    printf("3. Which Pokémon evolves into Gyarados?\n");
    printf("   A. Magikarp\n   B. Psyduck\n   C. Poliwag\n   D. Tentacool\n");
    printf("Your answer: ");
    scanf(" %s", answer);
    if (strcasecmp(answer, "A") == 0 || strcasecmp(answer, "Magikarp") == 0) {
        printf("Correct! Magikarp evolves into Gyarados.\n");
        score++;
    } else {
        printf("Incorrect! Magikarp evolves into Gyarados.\n");
    }
    printf("\n");

    // Display final score
    printf("Quiz completed! Your final score is: %d/3\n", score);

    // Call function to reveal hidden link
    reveal_hidden_link();
}


void reveal_hidden_link() {
    printf("\n");
    printf("Congratulations! You found the hidden link!\n");
    printf("Click here to access the hidden Pokémon site: ");
    printf("https://drive.google.com/file/d/1zQiwHpv7qQw_VN4ERV5_4XDc1FuZJ5kN/view?usp=sharing\n");
}

int main() {
    // Call the Pokémon quiz function
    pokemon_quiz();

    return 0;
}
