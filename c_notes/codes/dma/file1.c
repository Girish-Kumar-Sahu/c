#include <stdio.h>
#include <stdlib.h>

int main() {

    float *x;
    x = malloc(16);
    *x = 39.0;
    printf("%f ",*x+0);
    x = (float*) x;
    // *x = 39;
    printf("%f %p",*x, x);

    int n;
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));

    for(int i=0;i<n;i++){
        arr[i] = i + 121;
    }

    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}