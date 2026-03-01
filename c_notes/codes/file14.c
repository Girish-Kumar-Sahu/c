#include <stdio.h>
#include<string.h>   

void slice(char s[], int n, int m);

int main() {

    slice("yo i am girish", 5, strlen("yo i am girish"));
   
    return 0;  
}

void slice(char s[], int n, int m){
    char newS[100];
    int j =0;
    for (int i = n; i <= m; i++, j++)
    {
       newS[j] = s[i];
    }
    newS[j] = "\0";
    puts(newS);
    
}