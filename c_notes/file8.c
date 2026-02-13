#include <stdio.h>

int main() {
    char arr = 'a';
    char *ptr = &arr;

    printf("%p %c\n",ptr, *ptr);
    ptr++;
    printf("%p %c\n", ptr,  *ptr);

    return 0;
}