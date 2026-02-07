#include <stdio.h>
#include <ctype.h>  // for isdigit()

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isdigit(ch)) {
        printf("'%c' is a digit.\n", ch);
    } else {
        printf("'%c' is NOT a digit.\n", ch);
    }

    return 0;
}