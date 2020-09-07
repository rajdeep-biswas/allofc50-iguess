#include <stdio.h>

#define elements 10

int main()
{
    int a[] = {25, 9, 63, 19, 51, 87, 15, 89, 94, 43};
    int swap;

    for(int i = 0; i < elements - 1; i++)
        for(int j = i; j < elements - 1; j++)
            if(a[j + 1] < a[i]) {
                swap = a[i];
                a[i] = a[j + 1];
                a[j + 1] = swap;
            }

    for(int i = 0; i < elements; i++)
        printf("%d ", a[i]);
    printf("\n");
}