/*
Name: Kavin J
Date: 05.05.2022
Question : efficieny of the worker
*/
#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 1; i <= 500; i++)
    {
        int count = 0;
        int temp = i;
        int ans = 0;

        while (temp != 0)
        {
            temp = temp / 10;
            count++;
        }
        temp = i;
        while (temp != 0)
        {
            int rem = temp % 10;
            temp = temp / 10;
            int power = 1;
            int tem = count;
            while (count != 0)
            {
                power *= rem;
                count--;
            }
            count = tem;
            ans = ans + power;
        }
        if (ans == i)
        {
            printf("%d ", ans);
        }
    }
}