#include <stdio.h>

#define ele 11

int main()
{
    int a[] = {10, 9, 7, 8, 1, 6, 5, 3, 2, 4, 0};

    for(int i = 0; i < ele - 1; i++) {
        for(int j = ele - 1; j > i; j--) {
            if(a[j] < a[i]) {
                int swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }

    for(int i = 0; i < ele; i++)
        printf("%d ", a[i]);
    printf("\n");
}