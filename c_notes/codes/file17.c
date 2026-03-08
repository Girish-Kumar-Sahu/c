#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
} add;

int main(void) {
    printf("Hello, World!\n");
    add p[5];
    // inputing
    for (int i = 0; i < 2; i++)
    {
        printf("enter your house no. person %d :", i+1);
        scanf("%d", &p[i].houseNo);
        printf("enter your block no. person %d :", i+1);
        scanf("%d", &p[i].block);
        getchar();  // clear newline
        printf("enter your city person %d: ", i+1);
        fgets(p[i].city, 100, stdin);
        p[i].city[strcspn(p[i].city, "\n")] = '\0';

        printf("enter your state person %d: ", i+1);
        fgets(p[i].state, 100, stdin);
        p[i].state[strcspn(p[i].state, "\n")] = '\0';
    }
    

    for (int i = 0; i < 2; i++)
{
    printf("Person %d Address: %d, Block %d, %s, %s\n",
           i+1,
           p[i].houseNo,
           p[i].block,
           p[i].city,
           p[i].state);
}

    return EXIT_SUCCESS;
}