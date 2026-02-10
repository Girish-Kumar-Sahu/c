#include <stdio.h>   // Standard input-output header
#include <stdlib.h>  // Standard library header (optional, for memory functions)
#include <math.h>

int main() {
    printf("printing a pattern\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            printf("*");           
        }
        printf("\n");
    }

    printf("\nchecking if a number is prime or not\nEnter a number: ");
    int x;
    scanf("%d", &x);
    int prime = 1;
    for (int i = 2; i<=pow(x,0.5); i++){
        if (x%i==0){
            prime = 0;
        }
    }
    if(prime){
        printf("yes it is prime\n");
    } else {
        printf("No it is not prime num\n");
    }
    printf("checking all prime numbers in a give range starting from 2\n Enter number of range: ");
    int range;
    scanf("%d",&range);
    for (int i = 2; i <= range; i++){
        int prime = 1;
        for (int j = 2; j<=sqrt(i); j++){
            if (i%j == 0){
                prime = 0;
            }
        }
        if (prime){
            printf("%d ",i);
            
        }
    }
    return 0;  
}