#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void printChoice(int choice) {
    if (choice == 0) {
        printf("Snake\n");
    }
    else if (choice == 1) {
        printf("Water\n");
    }
    else {
        printf("Gun\n");
    }
}

int checkWinner(int player, int computer) {

    if (player == computer)
        return 0;

    if ((player == 0 && computer == 1) ||
        (player == 1 && computer == 2) ||
        (player == 2 && computer == 0))
        return 1;

    return -1;
}

int getPlayerChoice() {
    char input[20];

    printf("\nEnter Snake, Water or Gun: ");
    scanf("%s", input);

    // Convert to lowercase manually
    for (int i = 0; input[i]; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z')
            input[i] = input[i] + 32;
    }

    if (strcmp(input, "snake") == 0)
        return 0;
    if (strcmp(input, "water") == 0)
        return 1;
    if (strcmp(input, "gun") == 0)
        return 2;

    return -1; // invalid
}

int main() {

    int playerScore = 0;
    int computerScore = 0;

    srand(time(NULL));

    printf("===== SNAKE WATER GUN GAME =====\n");
    printf("Best of 5 - First to 3 wins!\n");

    while (playerScore < 3 && computerScore < 3) {

        int player = getPlayerChoice();

        if (player == -1) {
            printf("Invalid input! Try again.\n");
            continue;
        }

        int computer = rand() % 3;

        printf("\nYou chose: ");
        printChoice(player);

        printf("Computer chose: ");
        printChoice(computer);

        int result = checkWinner(player, computer);

        if (result == 0) {
            printf("It's a Draw!\n");
        }
        else if (result == 1) {
            printf("You Win this round!\n");
            playerScore++;
        }
        else {
            printf("Computer Wins this round!\n");
            computerScore++;
        }

        printf("\nScore => You: %d | Computer: %d\n", playerScore, computerScore);
        printf("--------------------------------\n");
    }

    printf("\n===== FINAL RESULT =====\n");

    if (playerScore > computerScore)
        printf("Congratulations! You Won the Game!\n");
    else
        printf("Computer Won the Game!\n");

    return 0;
}