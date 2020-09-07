#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int check = 0, n;
    do
    {
        printf("Height: ");
        n = get_int();
        if(n >= 0 && n <= 23)
            check++;
    } while(check == 0);

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n - 1; j++)
            printf(" ");
        for(int j = 0; j < i + 1; j++)
            printf("#");
        printf("  ");
        for(int j = 0; j < i + 1; j++)
            printf("#");
        printf("\n");
    }
}