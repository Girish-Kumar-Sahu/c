#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int roll;
}; //we need semicolon here

int main() {
    struct student s1;
    strcpy(s1.name, "girish"); // we cant assign just go search it why
    s1.roll = 7;
    printf("%s", s1.name);
    printf("%d\n", s1.roll);

    // array of structure
    struct student cse[10];
    struct student aids[10];
    // cse[0].name = "random";
    strcpy(cse[0].name, "random");

    aids[1].roll = 7;

    printf(cse[0].name);
    printf("%d",aids[1].roll);
    //yeah
    return 0;
}