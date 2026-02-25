#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    for(int i=0;i<5;i++){
        int dice = rand()%6 + 1;
        printf("Dice: %d\n", dice);
    }

    return 0;
}