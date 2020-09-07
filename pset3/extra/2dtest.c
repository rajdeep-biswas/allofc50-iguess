#include <stdio.h>

int main()
{
    int d = 4;
    int board[4][4];
    int cur = d * d - 1;

    for(int i = 0; i < d; i++)
        for(int j = 0; j < d; j++) {
            board[i][j] = cur;
            cur--;
        }

    for(int i = 0; i < d; i++) {
        for(int j = 0; j < d; j++)
            printf("%d ", board[i][j]);
        printf("\n");
    }
}