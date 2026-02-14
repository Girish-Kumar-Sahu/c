#include <stdio.h>
int main() {
    int marks[5] = {90, 85, 70, 88, 95};
    for (int i = 0; i < 5; i++) {
        printf("marks[%d] = %d\n", i, marks[i]);
    }
    return 0;
}