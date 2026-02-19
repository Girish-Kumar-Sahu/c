#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int num = rand() % 101;   // secret number (0–100)
    int guessed;
    int guesses = 0;

    printf("=== Number Guessing Game ===\n");

    do {
        printf("Guess the number between 0 and 100: ");
        scanf("%d", &guessed);
        guesses++;

        if (guessed > num) {
            printf("Too High!\n");
        }
        else if (guessed < num) {
            printf("Too Low!\n");
        }

    } while (guessed != num);

    printf("Correct! You guessed it in %d tries.\n", guesses);

    return 0;
}
