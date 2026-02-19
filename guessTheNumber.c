#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate number between 0 and 100
    int num = rand() % 101;
    int guesses =0, guessed;
    do
    {
        printf("guess the number between 0 to 100: ");
        scanf("%d", &guessed);
        guesses++;
    } while (guessed!=num);
    printf("You guessed the number in %d guesses",guesses);
        return 0;
}
