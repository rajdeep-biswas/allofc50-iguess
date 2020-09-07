#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Height: ");

    int check = 0, height;
    do
    {
        height = get_int();
        if(height <= 23 && height >= 0)
            check++;
        else
            printf("Try again\n");
    } while(check == 0);

    for(int i = height; i > 0; i--)
    {
        for(int j = 0; j < height + 1; j++)
        {
            if(j < i - 1)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}