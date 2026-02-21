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

    if (player == computer) {
    printf("It's a Draw!\n");
}
else if (
    (player == 0 && computer == 1) ||
    (player == 1 && computer == 2) ||
    (player == 2 && computer == 0)
) {
    printf("You Win!\n");
}
else {
    printf("Computer Wins!\n");
}

    return 0;
}