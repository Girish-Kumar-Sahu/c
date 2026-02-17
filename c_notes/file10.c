#include <stdio.h>   

int main() {
   // writing a function to count numbers of odd numbers in an array
   int arr[] = {212,323,12,342,432,343,101};
   int count = 0;
   for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
   {
        if (arr[i]%2!=0){
            count++;
        }
        printf("%d\t", count);
   }
   
    return 0;  
}
