#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int player;
    int computer;

    // Seed random number
    srand(time(NULL));

    // Generate computer choice (0–2)
    computer = rand() % 3;

    printf("Enter 0 for Snake, 1 for Water, 2 for Gun: ");
    scanf("%d", &player);

    printf("Computer chose: %d\n", computer);

    return 0;
}