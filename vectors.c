#include <stdio.h>   

typedef struct vector{
    // 2d plain
    int x;
    int y;
} vct;

vct vectorSum(vct v1, vct v2);

int main() {
    vct v1 = {5,3};
    vct v2 = {5,4};
    vct v3 = vectorSum(v1,v2);
    printf("v3 x axis: %d and y axis: %d", v3.x, v3.y);
   
    return 0;  
}

vct vectorSum(vct v1, vct v2){
    vct v3 = {v1.x+v2.x, v1.y+v2.y};
    return v3;
}