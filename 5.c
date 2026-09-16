#include <stdio.h>

int main() {
    int a[10], i, sum = 0;
    float average;

    printf("Enter array elements:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    average = (float)sum / 10;

    printf("Sum = %d\n", sum);
    printf("Average = %f\n", average);

    return 0;
}
