#include <stdio.h>

#define elements 11

int main()
{
    int a[] = {10, 9, 7, 8, 1, 6, 5, 3, 2, 4, 0};
    int swap;

    for(int i = elements - 1; i > 0; i--) {
        for(int j = 0; j < i; j++)
            if(a[j] > a[j + 1]) {
                swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
            }
    }

    for(int i = 0; i < elements; i++)
        printf("%d ", a[i]);
    printf("\n");
}