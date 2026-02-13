#include <stdio.h>

int main() {
    char arr = 'a';
    char *ptr = &arr;

    printf("%p %c\n",ptr, *ptr);
    ptr++;
    printf("%p %c\n", ptr,  *ptr);

    // printing all eng letters
    for (int i = 65; i < 123; i++)
    { 
        if (i>96 || i < 91)
        {printf("%c & %d ,, ",i, i);}
    }
    

    return 0;
}