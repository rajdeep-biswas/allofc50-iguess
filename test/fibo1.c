#include <stdio.h>

int fibo(int n);

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", fibo(n));
}

int fibo(int n)
{
    int c, a = 0, b = 1, i = 1;

    if(i == n)
        return a;
    else {
        c = a + b;
        b = a;
        a = c;
        i++;
        return fibo(n);
    }
}