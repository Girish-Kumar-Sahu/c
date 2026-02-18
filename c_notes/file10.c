#include <stdio.h>   


// writing a function to reverse an array
int *reverse(int arr[], int n){
    // n is the size of our array
    for(int i = 0; i<=(n-1)/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-i];
        arr[n-i] = temp;
    }
    return arr;
}



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
   printf("\n");
   int *res = reverse(arr,6);

for(int i=0;i<6;i++){
    printf("%d ", res[i]);
}

    return 0;  
}
