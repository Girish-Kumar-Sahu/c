#include <stdio.h>
#include <string.h>

int main() {
    char name[100];  // allocate writable buffer

    // print a predefined name
    strcpy(name, "Girish");
    printf("%s\n", name);

    strcpy(name, "123456");
    puts(name);

    // let user enter their name and print its length
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // remove newline if present
    name[strcspn(name, "\n")] = '\0';

    printf("Your name's length is = %zu\n", strlen(name));
    return 0;
}