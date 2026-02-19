#include <stdio.h>
#include <math.h>

int main(){
    int p;
    p = pow(5,4);
    printf("power of 5 to the power 4 is: %d \n", p);
    printf("%d\n", (int)1.34); // explicit conversion

    // precedene /*% highest then +-, if they are in same then left to right

    //eg
    int a,b;
    a = 4*3/6*2;
    b = 4 * (3.0/6) * 2;
    printf("a: %d, b: %d \n", a, b);
    printf("a: %d, b: %d \n", !1, !(0));
   return 0;
}