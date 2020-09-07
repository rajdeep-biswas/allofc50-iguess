#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(void)
{
    string A = get_string();

    printf("%c", toupper(A[0]));
    for(int i = 1, n = strlen(A); i < n; i++)
        if(A[i] == ' ')
            printf("%c", toupper(A[i + 1]));
    printf("\n");

    return 0;
}