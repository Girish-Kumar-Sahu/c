#include <stdlib.h>
#include <stdio.h>

int main() {
    //    check if a number is two digit or not
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);
    int c = (num>9) && (num<100);
    printf("%d\n", c);

    // same thing but with ternary operator
    // alternate of if else in asingle line with minimal syntax

    num>9 && num<100 ? printf("double digit number\n") : printf("single digit number (just like me) or greater than double digit numbers\n");

    // switch case

    switch (c){
        case 1: 
            printf("double digit\n");
            break;
        case 0:
        printf("not a double digit\n");
        break;
        default:
            printf("is this even a number?\n");
        
    }
    /* 
    switch Properties
    a. Cases can be in any order
    b. Nested switch (switch inside switch) are allowed (same as if-else)
    */

    // if else for marks checking and grading
    int mark;
    printf("enter your marks to get your grades: ");
    scanf("%d", &mark);

    if (mark >= 30 && mark<=100){
        if (mark<=30){
            printf("fail C grade\n");
        }
        else if (mark>=30 && mark<=70 ){
            printf("B\n");
        }
        else if (mark >= 70 && mark <=90){
            printf("'A' grade good work\n");
        }
        else{
            printf("A+ you actually studied \n");
        }
    }
    else{
        printf("wrong input\n");
    }
    return 0;
}