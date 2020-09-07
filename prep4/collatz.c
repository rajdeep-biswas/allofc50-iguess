#include <stdio.h>


int col(int n)
{
    if(n == 1)
        return 0;

    if(n % 2 == 0)
        return 1 + col(n / 2);

    else
        return 1 + col(3 * n + 1);
}

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", col(n));
}