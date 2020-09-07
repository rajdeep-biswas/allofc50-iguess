#include <stdio.h> // this is broken
#include <cs50.h>

int main(void)
{
    long int num = get_long_long();
    int dig = 0, valid = 0;
    long int credit = num;
    while(num != 0) // counts number of digits
    {
        num /= 10;
        dig++;
//        printf("%li\n", num);
    }
    printf("%d\n", dig);

    int sum0, sum1;
    sum0 = sum1 = 0;

    if(dig == 15 || dig == 13) // checks (ONLY) validity for 15 and 13 digit long cards
    {
        long int credit1 = credit;
        int di = 100;
        for(int i = 0; i < 7; i++) {
            sum0 += (credit % 10) * 2;
            credit /= 10;
            di *= 100;
        }
        printf("%d\n", sum0);
//        long int credit2 = credit1;
        di = 10;
        for(int i = 0; i < 8; i++) {
            sum1 += (credit1 % 10);
            credit1 /= 10;
            di *= 100;
        }
        printf("%d\n", sum1);
        if((sum0 + sum1)%10 == 0)
            valid = 1;
    }

    else if(dig == 16) // checks (ONLY) validity for 16 digit long cards
    {
        long int credit1 = credit;
        int di = 10;
        for(int i = 0; i < 8; i++) {
            sum0 += (credit % 10) * 2;
            credit /= 10;
            di *= 100;
        }
        printf("%d\n", sum0);
//        long int credit2 = credit1;
        di = 100;
        for(int i = 0; i < 8; i++) {
            sum1 += (credit1 % 10);
            credit1 /= 10;
            di *= 100;
        }
        printf("%d\n", sum1);
        if((sum0 + sum1)%10 == 0)
            valid = 1;
    }

    printf("%d\n", valid);
}