#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int level;
    int maxRange;
    int num, guessed;
    int guesses = 0;

    printf("=== Number Guessing Game (Level 2) ===\n");
    printf("Select Difficulty:\n");
    printf("1. Easy (0-50)\n");
    printf("2. Medium (0-100)\n");
    printf("3. Hard (0-500)\n");
    printf("Enter choice: ");
    scanf("%d", &level);

    // Decide range based on level
    if(level == 1) {
        maxRange = 50;
    }
    else if(level == 2) {
        maxRange = 100;
    }
    else {
        maxRange = 500;
    }

    num = rand() % (maxRange + 1);

    printf("\nI have selected a number between 0 and %d\n", maxRange);

    do {
        printf("Enter your guess: ");
        scanf("%d", &guessed);
        guesses++;

        if(guessed > num) {
            printf("Too High!\n");
        }
        else if(guessed < num) {
            printf("Too Low!\n");
        }

    } while(guessed != num);

    printf("\n Correct! You guessed it in %d tries.\n", guesses);

    // Simple scoring system
    if(guesses <= 5)
        printf("Pro Player!\n");
    else if(guesses <= 10)
        printf(" Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}
