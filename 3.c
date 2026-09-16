#include <stdio.h>

int main() {
    int a[5], b[5], c[10];
    int i = 0, j = 0, k = 0;

    printf("Enter 5 elements of first sorted array:");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Enter 5 elements of second sorted array:");
    for(i = 0; i < 5; i++)
        scanf("%d", &b[i]);

    i = 0;

    while(i < 5 && j < 5) {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < 5)
        c[k++] = a[i++];

    while(j < 5)
        c[k++] = b[j++];

    printf("Merged array:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", c[i]);

    return 0;
}
