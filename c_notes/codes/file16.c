#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int roll;
    char *sa;
    
};


struct itWala{
    struct student s;
    int marks;
};

void printInfo(struct itWala *stdent);

int main(){
    struct itWala a;

    strcpy(a.s.name, "Girish (but ye to AI-DS wala hai)");
    a.s.roll = 7;
    a.marks = 95;
    a.s.sa = "idk what is this";

    printf("%s\n", a.s.name);
    printf("%d\n", a.s.roll);
    printf("%d\n", a.marks);
    
    struct itWala *ptr;
    ptr = &a;
    printf("%p %d\n",ptr, sizeof(*ptr)); // will return 112 because of padding
    ptr->marks = 79;

    printInfo(&a);
    return 0;
}

void printInfo(struct itWala *stdent){
printf("%s %d %s %d\n",
       stdent->s.name,
       stdent->s.roll,
       stdent->s.sa,
       stdent->marks);
}