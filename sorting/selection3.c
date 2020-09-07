#include <stdio.h>

#define ele 11

int main()
{
    int a[] = {10, 9, 7, 8, 1, 6, 5, 3, 2, 4, 0};

    int mark, min = a[0];

    for(int i = 0; i < ele; i++)
        for(int j = i; j < ele - 1; j++) {
            if(a[j] < min) {
                min = a[j];
                mark = j;
            }
            int swap = a[j];
            a[j] = a[mark];
            a[mark] = swap;
        }

    for(int i = 0; i < ele; i++)
        printf("%d ", a[i]);
    printf("\n");
}