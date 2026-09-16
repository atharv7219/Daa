#include <stdio.h>

int main() {
    int a[10], i;
    int max, second_max;

    printf("Enter array elements:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }


    max = a[0];

    for(i = 1; i < 10; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }

  
    second_max = a[0];

    for(i = 0; i < 10; i++) {
        if(a[i] > second_max && a[i] < max) {
            second_max = a[i];
        }
    }

    printf("Second maximum = %d\n", second_max);

   
}
