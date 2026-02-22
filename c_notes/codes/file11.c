#include <stdio.h>
#include <string.h>

int strLen(char str[]);

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
    printf("Your name's length is = %zu\n", strLen(name));
    printf("Your name's address is = %zu\n", name); //printing address
    return 0;
}


//counting lentgh of a string function
int strLen(char str[]){
    int count = 0;
    for (int i = 0; str[i]!='\0' ; i++)
    {
        count++;
    }
    return count;
    
}