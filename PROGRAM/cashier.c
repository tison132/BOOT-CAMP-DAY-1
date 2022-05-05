/*
Name: Kavin J
Date: 05.05.2022
Question : number of currecy notes given to the withdrawer
*/
#include <stdio.h>
int main()
{
    int amount = 0;
    int h_c = 0, f_c = 0, t_c = 0;
    printf("Enter the withdraw amount: ");
    scanf("%d", &amount);
    while (amount != 0)
    {
        if (amount >= 100)
        {
            h_c++;
            amount -= 100;
        }
        else if (amount >= 50)
        {
            f_c++;
            amount -= 50;
        }
        else if (amount < 50)
        {
            t_c++;
            amount -= 10;
        }
    }
    printf("100 x %d\n", h_c);
    printf("50 x %d\n", f_c);
    printf("10 x %d\n", t_c);
}