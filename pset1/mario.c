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

    for(int i = n; i > 0; i--)
    {
        for(int j = 0; j < n; j++)
        {
            if(j < i - 1)
                printf(" ");
            else
                printf("#");
        }
        printf("  ");
        for(int j = 0; j < n + 1 - i; j++)
            printf("#");
        printf("\n");
    }
}