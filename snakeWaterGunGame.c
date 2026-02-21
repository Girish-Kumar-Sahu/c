#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkWinner(int player, int computer) {

    if (player == computer)
        return 0;

    if ((player == 0 && computer == 1) ||
        (player == 1 && computer == 2) ||
        (player == 2 && computer == 0))
        return 1;

    return -1;
}

int main() {

    int player, computer, result;

    srand(time(NULL));
    computer = rand() % 3;

    printf("Enter 0 for Snake, 1 for Water, 2 for Gun: ");
    scanf("%d", &player);

    result = checkWinner(player, computer);

    printf("Computer chose: %d\n", computer);

    if (result == 0)
        printf("Draw!\n");
    else if (result == 1)
        printf("You Win!\n");
    else
        printf("Computer Wins!\n");

    return 0;
}