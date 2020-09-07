#include <stdio.h>

#define ele 10

int main()
{
    int a[] = {25, 9, 63, 19, 51, 87, 15, 89, 94, 43};
    int in, found = -1;

    printf("Enter element to search for: ");
    scanf("%d", &in);

    for(int i = 0; i < ele; i++)
        if(a[i] == in) {
            found = i;
            break;
        }

    if(found != -1)
        printf("Element found at index location %d\n", found);
    else
        printf("Element not found in array\n");
}