#include <stdio.h>
#include <string.h>

typedef struct{
    char name[100];
    int roll;
    char *sa;
} student;

typedef struct{
    student s;
    int marks;
} itWala;

void printInfo(itWala *stdent);

int main(){

    itWala a;

    strcpy(a.s.name, "Girish (but ye to AI-DS wala hai)");
    a.s.roll = 7;
    a.s.sa = "idk what is this";
    a.marks = 95;

    printf("%s\n", a.s.name);
    printf("%d\n", a.s.roll);
    printf("%d\n", a.marks);

    itWala *ptr = &a;

    printf("%p %lu\n", ptr, sizeof(*ptr));

    ptr->marks = 79;

    printInfo(&a);

    return 0;
}

void printInfo(itWala *stdent){

 printf("%s %d %s %d\n",
        stdent->s.name,
        stdent->s.roll,
        stdent->s.sa,
        stdent->marks);
}