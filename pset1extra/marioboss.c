#include <stdio.h> // nailed it like a boss

int main(void)
{
    int n;
    printf("Lines: ");
    scanf("%d", &n);

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