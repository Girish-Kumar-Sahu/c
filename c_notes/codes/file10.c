#include <stdio.h>   


// writing a function to reverse an array
void reverse(int arr[], int n){
    // n is the size of our array
    for(int i = 0; i<=(n-1)/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-i];
        arr[n-i] = temp;
    }
}
//printing array
void prarr(int arr[], int n){
   
for(int i=0;i<n;i++){
    printf("%d\t", arr[i]);
}

}
// writing a code for fibonacci 
void fib(int n){
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    prarr(arr,n);
    
}

// writing a function to count numbers of odd numbers in an array
void odd(int arr[], int n){
    int count = 0;
     for (int i = 0; i < n; i++)
   {
        if (arr[i]%2!=0){
            count++;
        }
        printf("%d\t", count);
   }
   printf("\n");
}

// creating a 2d array to store table of 2 numbers
void storTables(int arr[][10], int ps, int lmt, int number){
    for (int i = 0; i < lmt; i++)
    {
       arr[ps][i] = number*(i+1);
       printf("\n%d ", arr[ps][i]);
    }
    
}

int main() {
   // writing a function to count numbers of odd numbers in an array
   int arr[] = {0,1,2,3,4,56,7,8,9};
   // calculating the size of array
   int n = sizeof(arr) / sizeof(arr[0]);


    printf("prarr funtion work\t");
    prarr(arr,n);

    printf("\nodd num function \t");
    odd(arr, n);

   printf("\nfib function work\t");
    fib(10);
    printf("\nreversing the array\t");
    reverse(arr, n);
    prarr(arr,n);

    int tables[2][10];
    printf("\ntable of 2");
    storTables(tables, 0 /* 0 represents index*/, 10, 2);
    printf("\n\ntable of 3");
    storTables(tables, 1 /* 1 represents index*/, 10, 3);

    
    return 0;  
}
