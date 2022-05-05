/*
Name: Kavin J
Date: 05.05.2022
Question : PRINT THE PATTERN
*/
#include <stdio.h>
int main()
{
    int n=0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("  ");
        }
        for (int k = 1; k < i; k++)
        {
            printf("* ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}