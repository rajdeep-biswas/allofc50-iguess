#include <stdio.h>

int binary(int a[], int l, int u, int s);

int main()
{
    int u, s, a[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};
    u = sizeof(a) / 4;

    printf("Number for search: ");
    scanf("%d", &s);

    int res = binary(a, 0, u, s);

    if(res < 0)
        printf("Element couldn't be found\n");
    else
        printf("Element found at index location %d\n", res);

}

int binary(int a[], int l, int u, int s)
{
    int mid = (l + u) / 2;

    if(u < l)
        return -1;

    else if(s < a[mid])
        return binary(a, l, mid - 1, s);

    else if(s > a[mid])
        return binary(a, mid + 1, u, s);

    else
        return mid;
}