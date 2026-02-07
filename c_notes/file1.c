#include <stdio.h>
#include <math.h>

int main(){
    printf("HELLO WORLD!\n");
    int a;
    a = 5;
    printf("%d",a);
    // calculating area of a square
    float side;
    printf("\nEnter side of a square: ");
    scanf("%f",&side);
    printf("area of given side %.2f square area is %.2f", side, side*side);
        // calculating area of a circle
    float radius;
    printf("\nEnter radius of circle: ");
    scanf("%f",&radius);
    const float PI = 3.14;
    printf("area of given radius %.2f circle area is %.2f \n", radius, PI * radius*radius);

        return 0;
}