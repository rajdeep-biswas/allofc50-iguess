#include <stdio.h>

float fact(float i);

int main()
{
    float n, sum = 1;
    scanf("%f", &n);

    for(int i = 2; i < n + 1; i++)
        sum += i / fact(i);

    printf("%f\n", sum);
}

float fact(float i)
{
    if(i <= 1)
        return i;
    else
        return i * fact(i - 1);
}