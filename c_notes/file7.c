#include <stdio.h>   

int main() {
   char x = '7';
   char *pt = &x;
//    int _x = *ptr;
   printf("%p, %c,",pt, *pt);

   int age = 22;
    int *ptr = &age;
int _age = *ptr;
printf("%d\n", _age);
//address
printf("%p\n", &age);
printf("%p\n", ptr);
printf("%p\n", &ptr);
//data
printf("%d\n", age);
printf("%d\n", *ptr);
printf("%d\n", *(&age));
printf("%p %d\n", ptr, *ptr);
ptr++;
printf("%p %d", ptr , *ptr);
    return 0;  
}