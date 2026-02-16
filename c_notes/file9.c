#include <stdio.h>
int main() {
    int marks[5] = {90, 85, 70, 88, 95};
    for (int i = 0; i < 5; i++) {
        printf("marks[%d] = %d\n", i, marks[i]);
    }

    // writing a prgram to enter price of 3 item and return it with gst cost with 18%
    float items[3], final_val[3];
    for (int i = 0; i < 3; i++)
    {
       printf("enter the price of item no. %d: ", i+1);
       scanf("%f",&items[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        final_val[i] = 0.18 * items[i] + items[i];
        printf("%.2f\n", final_val[i]);
    }
    
    
    return 0;
}