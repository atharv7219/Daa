#include <stdio.h>

int main() {
    int a[10], i, j, count;

    printf("Enter array elements:");

    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 10; i++) {
        count = 0;

        for(j = 0; j < 10; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }

        printf("%d occurs %d times", a[i], count);
    }

    return 0;
}
