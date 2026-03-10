#include <stdio.h>   

int main() {
    FILE *fptr;
    fptr = fopen("x.txt","r");
    if (fptr==NULL)
    {
        printf("file does not exist\n");
    }
    fptr = freopen("x.txt","r",fptr);
    char ch[20];
    fscanf(fptr, "%s", ch);
    printf("%s", ch);
    fgetc(fptr);
    fgetc(fptr);
    printf("%d", sizeof(*fptr));
    int count = 0, c;
    while ((c = fgetc(fptr)) != EOF) {
        count++;
    }
    printf("Characters in file: %d\n", count);
    fclose(fptr);
    return 0;  
}