#include <stdio.h>
#include <cs50.h>

int main()
{
    int b = get_int();
    int *a;
    a = &b;
    printf("%u\n", &a);
}