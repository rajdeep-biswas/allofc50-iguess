#include <stdio.h>

#define ELE 10

int main()
{
    int swap, pos, k, a[] = {25, 9, 63, 19, 51, 87, 15, 89, 94, 43};

    for(int i = 1; i < ELE; i++) {
        k = i - 1;
        if(a[i] < a[k]) {
            pos = k;
            swap = a[k];
            while(pos != 0) {
                a[pos] = a[pos - 1];
                pos--;
            }
            a[pos] = swap;
            k++;
        }
        else {
            k++;
            i = k + 1;
        }
    }

    for(int i = 0; i < ELE; i++)
        printf("%d ", a[i]);
    printf("\n");
}