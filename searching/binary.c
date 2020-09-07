#include <stdio.h>
#include <string.h>

#define ele 10

int main()
{
    int a[] = {9, 15, 19, 25, 43, 51, 63, 87, 89, 94};
    int found = -1, mid, n = ele, search;

    scanf("%d", &search);
    do {
        mid = n / 2;

        if(search == a[mid]) {
            found = mid;
            break;
        }

        if(search < a[mid]) {
            for(int i = 0; i < mid; i++)
                if(a[i] == search) {
                    found = i;
                    break;
                }
        }

        else if(search > a[mid]) {
            for(int i = mid + 1; i < ele; i++)
                if(a[i] == search) {
                    found = i;
                    break;
                }
        }

        n /= 2;
    } while (n != 0);

    if(found != -1)
        printf("Element found at index location %d\n", mid);
    else
        printf("Element not found\n");
}