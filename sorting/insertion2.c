#include <stdio.h>

#define ele 11

int main()
{
    int a[] = {10, 9, 7, 8, 1, 6, 5, 3, 2, 4, 0};
    int min, found, mark, swap;

    for(int j = 0; j < ele; j++) {
        min = a[j];
        found = 0;
        for(int i = j; i < ele; i++) {
            if(a[i] < min) {
                min = a[i];
                mark = i;
                found = 1;
            }
        }

        if(found == 1) {
            swap = a[mark];
            while(mark != j) {
                a[mark] = a[mark - 1];
                mark--;
            }
            a[mark] = swap;
        }
    }

    for(int i = 0; i < ele; i++)
        printf("%d ", a[i]);
    printf("\n");
}