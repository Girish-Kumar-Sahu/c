#include <stdio.h>   // Standard input-output header
#include <stdlib.h>  // Standard library header (optional, for memory functions)


int sod(int num);//Write a function to find sum of digits of a number.
int powr(int num, int power); // creating my own pow function
// int sqrt(int num); // my sqrt func
int sum(int n); // sum till n numbers
int fact(int n);
int main() {
    // printf("%d\n", sqrt(9));
   printf("%d\n",sod(155));
   printf("%d\n", powr(3,3));
    printf("%d\n", sum(3));
    printf("%d\n",fact(5));
    return 0;  // Exit status of the program
}

int sod(int num){
/*use looping till we have divisor equal to xero i mean zero, using % to extract each number*/
int sum, n = num;
sum = num - num;
while (n>0){
sum += n%10;
n /= 10;
}
return sum;
}

int powr(int num, int power){
    int r;
    r = num;
    for (int i =1; i<power; i++ ){
        r *= num;
    }
    return r;
}

int sum(int n){
    if (n<1){
        return 0;
    }
    return n + sum(n-1);
}


int fact(int n){
    if (n<1){
        return 1;
    }
    return n * fact(n-1);
}



// int sqrt(int number){
//     if (number < 0) {
//         return -1; // indicate error for negative input
//     }
//     if (number == 0 || number == 1) {
//         return number;
//     }

//     double x = number / 2.0;   // initial guess
//     double epsilon = 1e-6;     // tolerance for accuracy

//     while (1) {
//         double next = 0.5 * (x + number / x); // Newton-Raphson iteration
//         if (fabs(next - x) < epsilon) {
//             return next;
//         }
//         x = next;
//     }

// }