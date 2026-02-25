#include <stdio.h>
#include <string.h>

int strLen(char str[]);

void prarr(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", arr[i]);
    }
}

int main() {

    char name[100];   // writable buffer

    /* ---- Basic string copy & print ---- */
    strcpy(name, "Girish");
    printf("%s\n", name);

    strcpy(name, "123456");
    puts(name);

    /* ---- Input using fgets ---- */
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // remove newline added by fgets
    name[strcspn(name, "\n")] = '\0';

    printf("Your name's length is = %d\n", strLen(name));
    printf("Your name's address is = %p\n", (void*)name);

    /* ---- Safe strcat example ---- */
    char str[20] = "123,";   // extra space required
    strcat(str, "456");
    printf("%s\n", str);

    /* ---- Character-by-character input ---- */
    char ch;
    int i = 0;

    printf("\nenter your name again: ");

    while (i < 99 && scanf("%c", &ch) == 1 && ch != '\n') {
        name[i++] = ch;
    }
    name[i] = '\0';   // VERY IMPORTANT

    prarr(name, strLen(name));
    printf("\n%s", name);

    return 0;
}


/* ---- Homemade string length ---- */
int strLen(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}